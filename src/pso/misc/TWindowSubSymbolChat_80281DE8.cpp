#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 TWindowSubSymbolChat__sub_80076FE0(s32);
M2C_UNK fn_80248968(s32, M2C_UNK);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 fn_80248C48(M2C_UNK, M2C_UNK *);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_804D2B48[];

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_80248C48(TWindowSubComCard__sub_8026CBB8(0x79), lbl_804D2B48);
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAC));
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBF), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, TWindowSubStatusDisp__sub_80077760(0xC0), 0);
    if (TWindowSubSymbolChat__sub_80076FE0(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        fn_80248968(temp_r31, 0);
    } else {
        fn_80248968(temp_r31, 1);
    }
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}
