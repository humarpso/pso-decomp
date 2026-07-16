#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_list_entry__20TWindowSubStatusDispFPvUcii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0);
void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v);

int TWindowSetLevelUp__sub_8026DDE0(void) { return 0; }

}
