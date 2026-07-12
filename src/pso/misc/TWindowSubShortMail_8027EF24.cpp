#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80267B90(s32, s32);
s32 fn_80267F38(M2C_UNK, M2C_UNK *, M2C_UNK, s16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8044FAC4[];

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0x9B);
    temp_r31 = fn_80267F38(temp_r3, lbl_8044FAC4, 8, (s16) M2C_FIELD(arg0, s32 *, 0x20));
    TWindowSubStatusDisp__sub_80267B90(temp_r31, TWindowSubStatusDisp__sub_80077760(0x2E));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}
