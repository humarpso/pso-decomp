#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_80224404_lbl_80513F20 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802243D4_lbl_80513F10 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
void TLobby__sub_80224404(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_802243D4_lbl_80513F10 lbl_80513F10;
void TLobby__sub_802243D4(void);
}

extern "C" {

s32 fn_80223B98(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 4;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 5;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 5;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 7;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 fn_80223C28(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 2;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 2;
    }
    if (arg0 >= 0x65) {
        return 2;
    }
    return -1;
}

s32 fn_80223CB8(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x63)) {
        return 4;
    }
    if (arg0 >= 0x64) {
        return 5;
    }
    return -1;
}

s32 TLobby__sub_80223D48(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 4;
    }
    if (arg0 >= 0x65) {
        return 4;
    }
    return -1;
}
typedef char RecoveredGlobal_80224404_lbl_80513F20_size[sizeof(RecoveredGlobal_80224404_lbl_80513F20) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802243D4_lbl_80513F10_size[sizeof(RecoveredGlobal_802243D4_lbl_80513F10) == 0x10 ? 1 : -1];
void TLobby__sub_802243D4(void) {
    memset((void *) (&lbl_80513F10.value), (int) (0), (int) (0x10));
}

void TLobby__sub_80224404(s32 arg0, s32 arg1, s32 arg2) {
    *(M2CCopy_14 *)(arg0) = *(const M2CCopy_14 *)(M2C_FIELD(&lbl_80513F20.value, M2C_UNK *, (arg2 * 4)) + (arg1 * 0x14));
}

}
