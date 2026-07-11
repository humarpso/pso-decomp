#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_reset_choice__6TLobbyFi(s32 arg0);
M2C_UNK reset__6TLobbyFi();
M2C_UNK TWindowSubStatusDisp__sub_80077760(M2C_UNK);

extern u8 TLobby__data_805D688B;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__data_805D688B != 0) {
        switch (arg0) {
        case 0:
            TWindowSubStatusDisp__sub_80077760(0xEC);
            reset__6TLobbyFi();
            return;
        case 1:
            TWindowSubStatusDisp__sub_80077760(0xEB);
            reset__6TLobbyFi();
            break;
        }
    }
}

}
