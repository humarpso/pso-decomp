#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK TLobby__sub_802D2FF8();
extern u8 lbl_805D688B;

void TLobby__sub_802D2B64(s32 arg0) {
    if ((s8) lbl_805D688B != 0) {
        switch (arg0) {
        case 0:
            TWindowSubStatusDisp__sub_80077760(0xEC);
            TLobby__sub_802D2FF8();
            return;
        case 1:
            TWindowSubStatusDisp__sub_80077760(0xEB);
            TLobby__sub_802D2FF8();
            break;
        }
    }
}

}
