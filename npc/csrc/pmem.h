#include <cstdint>
#include <cstddef>

void init_pmem(size_t size, uint32_t base);
void free_pmem();
bool load_image(const char *path, uint32_t load_addr);

uint32_t paddr_read(uint32_t addr, int len);
void paddr_write(uint32_t addr, int len, uint32_t data);
