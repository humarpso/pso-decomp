#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_close_flag__17TWindowSubComCardFPv(void *arg0);
M2C_UNK send_status_packet__6TLobbyFv();

void handle_close_flag__17TWindowSubComCardFPv(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 2) {
        send_status_packet__6TLobbyFv();
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) & 0xFFFFFFFD);
    }
}

}
