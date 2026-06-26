#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

extern "C" {

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void fn_801C11BC(void *arg0)
{
  *((s16 *) (((s8 *) arg0) + 4)) = 0;
  *((s16 *) (((s8 *) arg0) + 6)) = 0;
  *((s8 *) (((s8 *) arg0) + 0)) = (double) 0x83;
  *((s8 *) (((s8 *) arg0) + 1)) = 2;
}

}
