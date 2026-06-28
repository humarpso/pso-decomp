#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8022675C(s32, s32, s32, s32);
void fn_802B1004(void* p);
int fn_802B1018(void);

void fn_802B0FC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    fn_8022675C(0x4003351F, 0, 0, 0);
}
void fn_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int fn_802B1018(void) { return 0; }

}
