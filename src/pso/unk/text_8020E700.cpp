#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_8020ECD8_lbl_80513D78 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8020ECA8_lbl_80513D58 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_8020ECD8_lbl_80513D78 lbl_80513D78;
void TLobby__sub_8020ECD8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8020ECA8_lbl_80513D58 lbl_80513D58;
void TLobby__sub_8020ECA8(void);
}

extern "C" {

typedef char RecoveredGlobal_8020ECD8_lbl_80513D78_size[sizeof(RecoveredGlobal_8020ECD8_lbl_80513D78) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_8020ECA8_lbl_80513D58_size[sizeof(RecoveredGlobal_8020ECA8_lbl_80513D58) == 0x10 ? 1 : -1];
void TLobby__sub_8020ECA8(void) {
    memset((void *) (&lbl_80513D58.value), (int) (0), (int) (0x10));
}

void TLobby__sub_8020ECD8(s32 arg0, s32 arg1, s32 arg2) {
    *(M2CCopy_14 *)(arg0) = *(const M2CCopy_14 *)(M2C_FIELD(&lbl_80513D78.value, M2C_UNK *, (arg2 * 4)) + (arg1 * 0x14));
}

}
