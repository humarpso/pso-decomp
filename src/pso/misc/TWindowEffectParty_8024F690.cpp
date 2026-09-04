#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1);
void set_slot_position__18TWindowEffectPartyFiiPv(s32 arg0, s32 arg1, void *arg2);
void *TWindowCtrl__sub_8024FB80(s8);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
f32 get_scale__15TWindowCtrlMainFv(s32);

extern s32 lbl_805D53A0;
extern f32 lbl_805DCCC0;

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (lbl_805DCCC0 / get_scale__15TWindowCtrlMainFv(lbl_805D53A0));
}

extern const f32 lbl_805DCCC4;
extern const f32 lbl_805DCCC8;
extern const f32 lbl_805DCCCC;
extern const f32 lbl_805DCCD0;

void set_slot_position__18TWindowEffectPartyFiiPv(s32 arg0, s32 arg1, void *arg2) {
    void *temp_r3;
    (void)arg0;

    if (arg1 <= 0) {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg2, TWindowSubComCard__sub_8026CBB8(0x1C));
        M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + lbl_805DCCC4);
        M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + lbl_805DCCC8);
        return;
    }
    temp_r3 = TWindowCtrl__sub_8024FB80((s8) (arg1 - 1));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805DCCCC + M2C_FIELD(temp_r3, f32 *, 0x30));
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805DCCD0 + M2C_FIELD(temp_r3, f32 *, 0x34));
    }
}

}
