#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3);

extern M2C_UNK lbl_8043E560;
extern const f32 lbl_805DABA4;
extern const f32 lbl_805DABA8;

void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, void **, 0x28) = arg3;
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DABA4;
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u32 *, 4) - lbl_805DABA8);
    }
}

}
