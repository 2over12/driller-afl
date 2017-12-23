#ifndef _HAVE_VV_H
#define _HAVE_VV_H
#include <stdint.h>

struct block
{
  u16 branch1;
  u16 branch2;
  u8 count1;
  u8 count2;
};
typedef struct block block;

  #ifdef _HAVE_CONFIG_H
  #define NUM_BLOCKS (1<<16)
  #define MAP_SIZE (NUM_BLOCKS * sizeof(block))
  #endif //Has CONFIG_H
#endif // Has VV_H
