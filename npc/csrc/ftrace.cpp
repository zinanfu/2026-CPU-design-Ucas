#include "ftrace.h"
#include <cassert>
#include <cstdlib>
#include <cstring>



static int func_cnt = 0;
static int depth = 0;
static Func func_table[MAX_FUNC];
static uint32_t call_stack[MAX_DEPTH];




void init_ftrace(const char* elf_file) {
    FILE *fp = fopen(elf_file, "rb");
    assert(fp);
    // 读文件头
    Elf32_Ehdr ehdr;
    size_t ret = fread(&ehdr, 1, sizeof(ehdr), fp);
    assert(ret == sizeof(ehdr));
    // 读取 ELF 文件的节头表
    Elf32_Shdr shdrs[ehdr.e_shnum];
    fseek(fp, ehdr.e_shoff, SEEK_SET);
    printf("e_shoff=0x%x e_shnum=%d e_shentsize=%d\n", ehdr.e_shoff, ehdr.e_shnum, ehdr.e_shentsize);
    assert(fread(shdrs, ehdr.e_shnum, sizeof(Elf32_Shdr), fp) == ehdr.e_shnum);

    Elf32_Shdr symtab = {0};
    Elf32_Shdr strtab = {0};

    bool found = false;

    for (int i = 0; i < ehdr.e_shnum; i++) {
        if (shdrs[i].sh_type == SHT_SYMTAB) {
            symtab = shdrs[i];
            strtab = shdrs[symtab.sh_link];
            found = true;
            break;
        }
    }

    assert(found);

    int num = symtab.sh_size / sizeof(Elf32_Sym);
    Elf32_Sym* syms = (Elf32_Sym* )malloc(symtab.sh_size);

    fseek(fp, symtab.sh_offset, SEEK_SET);
    assert(fread(syms, symtab.sh_size, 1, fp));

    char* str_data = (char* )malloc(strtab.sh_size);

    fseek(fp, strtab.sh_offset, SEEK_SET);
    assert(fread(str_data, strtab.sh_size, 1, fp));

    func_cnt = 0;

    for (int i = 0; i < num; i++) {
        if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC) {
            func_table[func_cnt].addr = syms[i].st_value;
            func_table[func_cnt].size = syms[i].st_size;

            strcpy(func_table[func_cnt].name, str_data + syms[i].st_name);

            func_cnt++;
        }

        if (func_cnt == MAX_FUNC) {
            printf("Warning: func_table is full\n");
        }


    }

}

char* find_func(uint32_t addr) {
    for (int i = 0; i < func_cnt; i++) {
        if (func_table[i].size == 0) {
            if (addr == func_table[i].addr) {
                return func_table[i].name;
            }
        }
        else if (addr >= func_table[i].addr && addr < func_table[i].addr + func_table[i].size) {
            return func_table[i].name;
        }
    }
    return NULL;
}

void ftrace_call(uint32_t addr, uint32_t pc) {
    char* func_name = find_func(addr);

    if (func_name == NULL) {
        printf("Error: addr doesn't exist in func_table\n");
        return;
    }

    printf("0x%08x:", pc);

    for (int i = 0; i < depth; i++) {
        printf("  ");
    }

    printf("call [%s@0x%08x]\n", func_name, addr);

    if (depth < MAX_DEPTH) {
        call_stack[depth++] = addr;
    }
    
}
void ftrace_ret(uint32_t pc) {
    if (depth <= 0) {
        return;
    }

    uint32_t func_addr = call_stack[--depth];

    char* func_name = find_func(func_addr);

    if (func_name == NULL) {
        printf("Error: addr doesn't exist in func_table\n");
        return;
    }

    printf("0x%08x:", pc);

    for (int i = 0; i < depth; i++) {
        printf("  ");
    }

    printf("ret [%s]\n", func_name);
}

// 判断是否是 jal 或 jalr
// uint32_t (*read_arg)(int reg_idx) 函数指针，(int reg_idx)为该函数传入的参数
void ftrace_check(uint32_t inst, uint32_t pc, const uint32_t *regs) {
    uint32_t opcode = inst & 0x7f;
    uint32_t rd = (inst >> 7) & 0x1f;
    uint32_t rs1 = (inst >> 15) & 0x1f; 
    uint32_t funct3 = (inst >> 12) & 0x7;

    if (opcode == 0x6f) { // jal
        uint32_t imm = (((inst >> 31) & 1) << 20) | (((inst >> 12) & 0xff) << 12) | (((inst >> 20) & 1) << 11) | (((inst >> 21) & 0x3ff) << 1);

        if (imm & 0x100000) {
            imm |= 0xffe00000;
        }

        if (rd == 1) {
            uint32_t target = pc + imm;
            if (find_func(target) != NULL) {
                ftrace_call(target, pc);
            }
        }
    }
    else if (opcode == 0x67) { // jalr
        uint32_t imm = (inst >> 20) &0xfff;
        if (imm & 0x800) {
            imm |= 0xfffff000;
        }
        uint32_t target = (regs[rs1] + imm) & ~1;

        if (rd == 1 && find_func(target) != NULL) {
            ftrace_call(target, pc);
        }

        if (rd == 0 && rs1 == 1 && imm == 0) {
            ftrace_ret(pc);
        }
    }

}
