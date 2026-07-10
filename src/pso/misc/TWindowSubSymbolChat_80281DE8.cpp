#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0);
M2C_UNK TWindowShortListCtrl__sub_80221828(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 fn_80076FE0(s32);
M2C_UNK fn_80248968(s32, M2C_UNK);
M2C_UNK fn_80248AA8(s32, s32, M2C_UNK);
s32 fn_80248C48(M2C_UNK, M2C_UNK *);
M2C_UNK fn_80267B90(s32, s32);
s32 fn_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_804D2B48[];

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_80248C48(fn_8026CBB8(0x79), lbl_804D2B48);
    fn_80267B90(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAC));
    fn_80248AA8(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBF), 1);
    fn_80248AA8(temp_r31, TWindowSubStatusDisp__sub_80077760(0xC0), 0);
    if (fn_80076FE0(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        fn_80248968(temp_r31, 0);
    } else {
        fn_80248968(temp_r31, 1);
    }
    TWindowShortListCtrl__sub_80221828(temp_r31);
    return temp_r31;
}

}
