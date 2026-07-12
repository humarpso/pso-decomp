#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_option_menu__17TWindowOptionCtrlFv(void);
s32 get_option_field_C__17TWindowOptionCtrlFv();
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80248968(s32, s32);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 fn_80248C48(M2C_UNK, M2C_UNK *);
s32 TWindowOptionCtrl__sub_8026CBA4(M2C_UNK);

extern M2C_UNK lbl_8044F49C[];

s32 create_option_menu__17TWindowOptionCtrlFv(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = TWindowOptionCtrl__sub_8026CBA4(0xD0);
    temp_r31 = fn_80248C48(temp_r3, lbl_8044F49C);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0x10), 0);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0x11), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0x12), 2);
    fn_80248968(temp_r31, (s16) get_option_field_C__17TWindowOptionCtrlFv());
    return temp_r31;
}

}
