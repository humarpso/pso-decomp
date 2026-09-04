#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_80240B40(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

int TLobby__sub_80240E8C(void);
void TLobby__sub_80240F38(void);
void TLobby__sub_80241A0C(void);
void clamp_params__6TLobbyFPv(void *arg0);
void TLobby__sub_802409E4(void* p);
s32 get_field_308__6TLobbyFPv(s32);

s32 TLobby__sub_80240B40(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if (var_r5 <= 0) {
        var_r5 = 0x88888888;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = var_r5;
    M2C_FIELD(arg0, s32 *, 0x84) = var_r5;
    return 0;
}

int TLobby__sub_80240E8C(void) { return 0; }

void TLobby__sub_80240F38(void) {  }

void TLobby__sub_80241A0C(void) {  }

void clamp_params__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (((M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x40)) + M2C_FIELD(arg0, s32 *, 0x3C)) + M2C_FIELD(arg0, s32 *, 0x44)) + 0x7F;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0x40 - (M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(arg0, s32 *, 0x54)));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x58) + M2C_FIELD(arg0, s32 *, 0x60)) + 0x40);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x280));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) < 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x7F;
    }
}

}
