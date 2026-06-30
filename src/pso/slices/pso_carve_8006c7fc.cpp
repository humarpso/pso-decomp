#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__sub_8006A03C(u32);
void *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9038;

void TCameraCtrl__sub_8006C7FC(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r31 = TCameraCtrl__sub_8006A03C(lbl_805D4DF0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(0);
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_805D9038 + M2C_FIELD(temp_r3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r31, f32 *, 0x1C);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r31, f32 *, 0x20);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r31, f32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
        }
    }
}

}
