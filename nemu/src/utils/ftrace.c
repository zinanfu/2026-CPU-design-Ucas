#include <ftrace.h>

void init_ftrace(char* elf_file) {

}

char* find_func(paddr_t addr) {
    for (int i = 0; i < func_cnt; i++) {
        if (addr >= func_table[i].addr && addr <= func_table[i].addr + func_table[i].size) {
            return func_table[i].name;
        }
    }
    return NULL;
}

void ftrace_call(paddr_t addr, paddr_t pc) {
    
}
void ftrace_ret(paddr_t pc) {
        
}