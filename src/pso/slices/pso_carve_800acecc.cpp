#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80011734(void *, M2C_UNK, f32);
M2C_UNK fn_80143504();
M2C_UNK fn_80156698(void *);
extern const f32 lbl_805D9BD8;
extern const s32 lbl_805D9BFC;

void fn_800ACECC(void *arg0) {
    s16 temp_r4;
    void *temp_r4_2;

    fn_80143504();
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        fn_80011734(arg0, 0, lbl_805D9BD8);
    }
    fn_80156698(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

}
