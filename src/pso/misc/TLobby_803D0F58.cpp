#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D0F58(void);
extern M2C_UNK (*lbl_805D7620)(s32, s32);

extern s32 lbl_805D7624;
extern s32 lbl_805D7628;

void TLobby__sub_803D0F58(void) {
    if (((M2C_UNK (*)(s32, s32)) lbl_805D7620) != NULL) {
        lbl_805D7620(lbl_805D7624, lbl_805D7628);
    }
}

}
