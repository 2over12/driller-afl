#ifndef _HAVE_VV_H
#define _HAVE_VV_H
#include <stdint.h>

struct block
{
  u32 branch1;
  u32 branch2;
  u8 count1;
  u8 count2;
  u32 prev_loc;
};
typedef struct block block;

  #ifdef _HAVE_CONFIG_H
  #define NUM_BLOCKS (1<<16)
  #define ALLOC_SIZE (NUM_BLOCKS * sizeof(block))
  //#define VV_ENV "__AFL_VV_ID"
  #endif //Has CONFIG_H
#endif // Has VV_H
