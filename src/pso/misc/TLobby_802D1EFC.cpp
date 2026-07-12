#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D1EFC(s32 arg0, s32 arg1);
void *TLobby__sub_802D2304(s32);

void TLobby__sub_802D1EFC(s32 arg0, s32 arg1) {
    M2C_FIELD(TLobby__sub_802D2304(arg0 + 0xF8), s32 *, 4) = arg1;
}

}
