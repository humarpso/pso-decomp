#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_packet__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK fn_80077798(s32, M2C_UNK *);
M2C_UNK fn_801DB1B4(s32, M2C_UNK *);

extern s32 TLobby__data_805D5580;

void send_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[4];

    fn_80077798(arg1, sp8);
    fn_801DB1B4(TLobby__data_805D5580, sp8);
}

}
