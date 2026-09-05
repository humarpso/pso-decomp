#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(int, void *);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(int, int, int);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(int, void *);
int get_option_entry__17TWindowOptionCtrlFi(int);
extern M2C_UNK lbl_8044F48C[];
extern s32 lbl_805D5544;
s32 TWindowOptionCtrl__sub_8026BA88(void);
}

extern "C" {

s32 TWindowOptionCtrl__sub_8026BA88(void) {
    s32 temp_r31;
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(get_option_entry__17TWindowOptionCtrlFi((int) (0xCF)), (void *) (lbl_8044F48C));
    add_menu_item__17TWindowOptionCtrlFiii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (8))), (int) (0));
    add_menu_item__17TWindowOptionCtrlFiii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (9))), (int) (1));
    add_menu_item__17TWindowOptionCtrlFiii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0xA))), (int) (2));
    add_menu_item__17TWindowOptionCtrlFiii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0xB))), (int) (3));
    add_menu_item__17TWindowOptionCtrlFiii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0xC))), (int) (4));
    set_selected_index__20TWindowSubStatusDispFPvs((int) (temp_r31), (void *) ((s16) lbl_805D5544));
    return temp_r31;
}

}
