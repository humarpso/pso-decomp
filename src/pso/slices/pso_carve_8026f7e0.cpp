#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 obj_getS16_2BA(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C();
void *get_array_entry__20TWindowSubStatusDispFPvi(s32, M2C_UNK);
M2C_UNK TWindowCtrl__sub_8024C818();
M2C_UNK fn_802575C0(void *, M2C_UNK, f32);
M2C_UNK fn_8026F6DC(s32);
extern M2C_UNK lbl_8044F608;
extern const f32 lbl_805DD390;
extern const f32 lbl_805DD394;

s32 fn_8026F7E0(s32 arg0) {
    M2C_UNK var_r4;
    s32 var_r31;
    void *temp_r30;
    void *temp_r3;

    TWindowCtrl__sub_8024C818();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 == NULL) {
        fn_8026F6DC(arg0);
        return 0xFF008CFC;
    }
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
    M2C_FIELD(temp_r30, f32 *, 0x20) = (f32) obj_getS16_2BA(temp_r3);
    M2C_FIELD(temp_r30, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32E);
    if (M2C_FIELD(temp_r30, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r30, f32 *, 0x20))) {
        var_r31 = -1;
        var_r4 = 0xFF008CFC;
    } else {
        var_r4 = -0x3EEC;
        var_r31 = -0x3EEC;
    }
    fn_802575C0(temp_r30, var_r4, lbl_805DD394);
    return var_r31;
}

}
