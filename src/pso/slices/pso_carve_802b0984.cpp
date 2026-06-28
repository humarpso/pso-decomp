#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_802AB2B8(void *, s32);
int fn_802AACEC(void*);
int fn_802AC86C(void*, void*);
void fn_802B09F4(void* p);
void fn_802B0A34(void* p);

void fn_802B0984(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) == 0x69) {
        fn_8022675C(0x40030F00, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 0x12C) {
        fn_802AB2B8(arg0, 1);
    }
}
void fn_802B09F4(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)2); } }
void fn_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
