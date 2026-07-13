#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_sound_mode_menu__17TWindowOptionCtrlFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, M2C_UNK);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(s32, M2C_UNK *);
M2C_UNK TWindowOptionCtrl__sub_8026CBA4(M2C_UNK);

extern M2C_UNK lbl_8044F494[];

s32 create_sound_mode_menu__17TWindowOptionCtrlFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    s32 temp_r3_after_cba4 = TWindowOptionCtrl__sub_8026CBA4(0xCF);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(temp_r3_after_cba4, lbl_8044F494);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0xE), 0);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0xD), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0xF), 2);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x20);
    switch (temp_r0) {
    case 0:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 0);
        break;
    case 1:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 1);
        break;
    case 2:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 2);
        break;
    }
    return temp_r31;
}

}
