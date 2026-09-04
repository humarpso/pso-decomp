#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_status_index__20TWindowSubStatusDispFi(int arg0);
s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0);
M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0);
s32 TLobby__sub_80071654(u16);
M2C_UNK *TWindowSubStatusDisp__sub_80071820(s32);
u32 get_card_window__17TWindowSubComCardFUi(u16);

s32 get_status_index__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 == 0U) {
        return -1;
    }
    return get_status_index_or_default__20TWindowSubStatusDispFPv((u16 *)(temp_r3 + 0x21C4));
}

s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return TLobby__sub_80071654(*arg0);
}

extern M2C_UNK lbl_805D285C;

M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 == 0U) {
        return &lbl_805D285C;
    }
    return TWindowSubStatusDisp__sub_80071820(temp_r3 + 0x21C4);
}

}
