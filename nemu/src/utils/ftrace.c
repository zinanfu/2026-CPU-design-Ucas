#include <ftrace.h>

int depth = 0;
paddr_t call_stack[MAX_DEPTH];

int func_cnt = 0;
Func func_table[MAX_FUNC];




void init_ftrace(char* elf_file) {
    FILE *fp = fopen(elf_file, "rb");
    assert(fp);
    // 读文件头
    Elf32_Ehdr ehdr;
    size_t ret = fread(&ehdr, 1, sizeof(ehdr), fp);
    assert(ret == sizeof(ehdr));
    // 读取 ELF 文件的节头表
    Elf32_Shdr shdrs[ehdr.e_shnum];
    fseek(fp, ehdr.e_shoff, SEEK_SET);
    assert(fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) == ehdr.e_shnum);

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
    Elf32_Sym* syms = malloc(symtab.sh_size);

    fseek(fp, symtab.sh_offset, SEEK_SET);
    assert(fread(syms, symtab.sh_size, 1, fp));

    char* str_data = malloc(strtab.sh_size);

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

char* find_func(paddr_t addr) {
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

void ftrace_call(paddr_t addr, paddr_t pc) {
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
void ftrace_ret(paddr_t pc) {
    if (depth <= 0) {
        return;
    }

    paddr_t func_addr = call_stack[--depth];

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