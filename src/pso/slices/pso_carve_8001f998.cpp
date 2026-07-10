#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001EF8C(void *, s32, s32 *, M2C_UNK *);
M2C_UNK fn_8001F8D8(void *, void *);
M2C_UNK fn_80131794(M2C_UNK *, ...);
extern M2C_UNK lbl_80434C48[];
extern s32 lbl_805D4ACC;

void load_bin_motion_callback(void *arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r4;

    *M2C_FIELD(arg0, s32 **, 0) = 0;
    spC = 0;
    temp_r3 = fn_8001EF8C(M2C_FIELD(arg0, void **, 4), lbl_805D4ACC, &spC, &sp8);
    if (temp_r3 == 0) {
        fn_80131794(lbl_80434C48);
    }
    *M2C_FIELD(arg0, s32 **, 0) = temp_r3;
    temp_r4 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) + 1);
    fn_8001F8D8(M2C_FIELD(arg0, void **, 4), temp_r4);
}

}
