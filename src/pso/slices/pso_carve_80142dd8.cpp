#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801E3CFC(u32, u32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
M2C_UNK TObjEneRe7Berura__sub_803E4CE0(M2C_UNK *);
extern M2C_UNK fn_80142EEC[];
extern s32 lbl_805D5678;
extern s32 lbl_805D567C;

s32 fn_80142DD8(void *arg0, f32 farg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF8) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
        return 0;
    }
    fn_803E4BC4();
    lbl_805D567C = lbl_805D5678;
    TObjEneRe7Berura__sub_803E4CE0(fn_80142EEC);
    fn_801E3CFC(M2C_FIELD(arg0, u32 *, 0x34), M2C_FIELD(arg0, u32 *, 0xF8), farg0);
    TObjEneRe7Berura__sub_803E4CE0(NULL);
    fn_803E4BD0();
    return 1;
}

}
