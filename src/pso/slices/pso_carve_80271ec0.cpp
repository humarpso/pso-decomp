#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK send_card_window_state__6TLobbyFv();

void TWindowSubComCard__sub_80271EC0(u8 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 1) {
        send_card_window_state__6TLobbyFv();
        M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (M2C_FIELD(arg0, s8 *, 0x1D) & ~1);
    }
}

}
