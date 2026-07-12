#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8021F0A4(void);
M2C_UNK TLobby__sub_8020ECA8();
M2C_UNK TLobby__sub_8022559C();
s32 TFontSmallTask__sub_800FD5FC(M2C_UNK *);
M2C_UNK TLobby__sub_802243D4();

extern M2C_UNK TLobby__data_805011D8[];
extern s32 lbl_805D5550;
extern s32 lbl_805D6238;
extern s32 lbl_805D6240;
extern s32 lbl_805D6244;

void TLobby__sub_8021F0A4(void) {
    s32 temp_r3;

    TLobby__sub_8022559C();
    TLobby__sub_8020ECA8();
    TLobby__sub_802243D4();
    lbl_805D6244 = 0;
    temp_r3 = TFontSmallTask__sub_800FD5FC(TLobby__data_805011D8);
    lbl_805D6238 = temp_r3;
    if (temp_r3 < 0) {
        lbl_805D6238 = 0;
    }
    if ((s32) lbl_805D6238 > 9) {
        lbl_805D6238 = 9;
    }
    lbl_805D6240 = lbl_805D5550;
    if ((s32) lbl_805D5550 < 0) {
        lbl_805D6240 = 0;
    }
    if ((s32) lbl_805D6240 > 3) {
        lbl_805D6240 = 3;
    }
}

}
