#include <fs.h>

#define MAX_FS_NUM 32
// ramdisk
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

typedef struct {
  int fd;
  size_t open_offset;

} File_description;

File_description fs_d[MAX_FS_NUM];

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
  int range = sizeof(file_table) / sizeof(Finfo);
  for (int i = 0; i < range; i++) {
    if (file_table[i].read == NULL) {
      file_table[i].read  = ramdisk_read;
      file_table[i].write = ramdisk_write;
    }
  }
}

int fs_open(const char *pathname, int flags, int mode) {
  int range = sizeof(file_table) / sizeof(Finfo);
  // printf("range = %d\n", range);
  for (int i = 0; i < range; i++) {
    // printf("there is for pathname = %s\n", pathname);
    if (strcmp(pathname, file_table[i].name) == 0) {
      fs_d[i].open_offset = 0;
      printf("fd == %d\n", i);
      return i;
    }
  }
  int i = -1;
  // can't reach here
  assert(i != -1);
  return -1;

}

size_t fs_read(int fd, void *buf, size_t len) {
  size_t offset = file_table[fd].disk_offset;
  size_t inner_file_offset = fs_d[fd].open_offset;
  // size_t all_size = len;
  // int out_of_bond = 0;

  
  // if (len + inner_file_offset > file_table[fd].size) {
  //   all_size = file_table[fd].size - inner_file_offset;
  //   out_of_bond = 1;
  // }
  printf("read begin\n");
  size_t ret = ramdisk_read(buf, offset + inner_file_offset, len);

  printf("read done\n");

  // return (out_of_bond ==  1) ? 0 : ret;
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len) {
  size_t offset = file_table[fd].disk_offset;
  size_t inner_file_offset = fs_d[fd].open_offset;
  size_t all_size = len;
  int out_of_bond = 0;

  
  if (len + inner_file_offset > file_table[fd].size) {
    all_size = file_table[fd].size - inner_file_offset;
    out_of_bond = 1;
  }

  size_t ret = ramdisk_write(buf, offset + inner_file_offset, all_size);

  return (out_of_bond ==  1) ? 0 : ret;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  switch (whence)
  {
  case SEEK_SET:
    fs_d[fd].open_offset = offset;
    break;

  case SEEK_CUR:
    fs_d[fd].open_offset += offset;
    break;

  case SEEK_END:
    // int i = 0;
    // assert(i != 0);
    fs_d[fd].open_offset = file_table[fd].size + offset;
    break;

  default:
    return -1;
    break;
  }

  return fs_d[fd].open_offset;
}

int fs_close(int fd) {
  printf("close is here\n");
  return 0;
}
