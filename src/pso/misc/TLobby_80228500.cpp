#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80228500(void *arg0);
void set_area__6TLobbyFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_80207770(s32);
s32 TOKeyMachine01__sub_802034A8();

void TLobby__sub_80228500(void *arg0) {
    if (TOKeyMachine01__sub_802034A8() != 0xF) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
    }
}

void set_area__6TLobbyFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = TLobby__sub_80207770(M2C_FIELD(arg0, s32 *, 0xC));
}

}
