#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TWindowSubStatusDisp__sub_8014544C(void *arg0, void *arg1, s32 arg2);
void *TWindowSubStatusDisp__sub_801452DC();
M2C_UNK fn_803DF160(u8, s32);

extern M2C_UNK lbl_8043F3D0;
extern u8 lbl_805D56C0;
extern const f32 lbl_805DB194;

u8 TWindowSubStatusDisp__sub_8014544C(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_801452DC();
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) lbl_805D56C0;
    fn_803DF160(M2C_FIELD(temp_r3, u8 *, 4), arg2);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 5) * lbl_805DB194);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 6) * lbl_805DB194);
    return M2C_FIELD(temp_r3, u8 *, 2);
}

}
