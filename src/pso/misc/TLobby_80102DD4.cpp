#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_80102DD4(s32 arg0, u16 arg1);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5E50;

u8 TLobby__sub_80102DD4(s32 arg0, u16 arg1) {
    int var_r5;

    var_r5 = 0;
    if (((s32) lbl_805D5E50 == 0) && ((s32) arg1 == (s32) lbl_805D53A0)) {
        var_r5 = 1;
    }
    return (u8) var_r5;
}

}
