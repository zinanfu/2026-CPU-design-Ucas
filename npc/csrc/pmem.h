#include <cstdint>
#include <cstddef>

#define SERIAL_PORT 0x10000000
#define RTC_ADDR 0x00000000

void init_pmem(size_t size, uint32_t base);
void free_pmem();
bool load_image(const char *path, uint32_t load_addr);

uint32_t paddr_read(uint32_t addr, int len);
void paddr_write(uint32_t addr, int len, uint32_t data, uint8_t wmask);
