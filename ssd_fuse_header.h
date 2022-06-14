/*
  FUSE-ioctl: ioctl support for FUSE
  Copyright (C) 2008       SUSE Linux Products GmbH
  Copyright (C) 2008       Tejun Heo <teheo@suse.de>
  This program can be distributed under the terms of the GNU GPLv2.
  See the file COPYING.
*/
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/ioctl.h>
#include "list.h"

#define PHYSICAL_NAND_NUM (13)
#define LOGICAL_NAND_NUM (10)
#define NAND_SIZE_KB (50)
#define INVALID_PCA     (0xFFFFFFFF)
#define INVALID_LBA     (0xFFFFFFFF)
#define FREE_BLOCK     (0xFFFFFFFF)
#define OUT_OF_BLOCK     (0xFFFF)
#define FULL_PCA     (0xFFFFFFFE)
#define PAGE_PER_BLOCK     (10)
#define PAGE_INDEX (1 << 16)
#define NAND_LOCATION  "/home/fan/Desktop/osc2022/final_project"


typedef struct {
  struct list_head list;
  int idx;
} LRU;

int gc();
int pca2idx(int pca);
void update_lru(int block);
enum
{
    SSD_GET_LOGIC_SIZE   = _IOR('E', 0, size_t),
    SSD_GET_PHYSIC_SIZE   = _IOR('E', 1, size_t),
    SSD_GET_WA            = _IOR('E', 2, size_t),
};
