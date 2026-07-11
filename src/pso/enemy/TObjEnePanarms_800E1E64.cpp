#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int TObjEnePanarms__sub_800E1DB8(void* p);
void TObjEnePanarms__sub_800E1E64(void* p);
int TObjEnePanarms__sub_800E1C98(void*, int);

void TObjEnePanarms__sub_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
