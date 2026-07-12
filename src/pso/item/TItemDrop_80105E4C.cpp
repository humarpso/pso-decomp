#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_drop_offset__9TItemDropFi(s32 arg0);
s32 TLobby__sub_8001E5C8();
s32 TLobby__sub_8030A7B0();

extern s32 lbl_805D5550;

s32 calc_drop_offset__9TItemDropFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0 + (lbl_805D5550 * 0xA);
    if (TLobby__sub_8030A7B0() == 1) {
        var_r31 += 0x50;
    } else if (TLobby__sub_8001E5C8() == 1) {
        var_r31 += 0x28;
    }
    return var_r31;
}

}
