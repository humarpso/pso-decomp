#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801381F0(s32 arg0);
s32 TWindowMakeTeam__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 lbl_805D5594;
extern s32 lbl_805D55EC;
extern s32 lbl_805D5604;

void TLobby__sub_801381F0(s32 arg0) {
    s32 var_r4;

    var_r4 = __nw__7TObjectFUl(0x38);
    if (var_r4 != 0) {
        var_r4 = TWindowMakeTeam__ct(var_r4, lbl_805D5604, arg0);
    }
    lbl_805D55EC = var_r4;
    lbl_805D5594 = 0xA;
}

}
