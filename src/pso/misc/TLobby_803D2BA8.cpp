#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803D2C04(u8 *arg0);
void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D2C2C(u8 *arg0);
void clear_entry__6TLobbyFPv(u8 *arg0);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();
M2C_UNK memset(void *, int, int);

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x2C), -3);
    }
    return 0;
}

void TLobby__sub_803D2C04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
}

s32 TLobby__sub_803D2C2C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void clear_entry__6TLobbyFPv(u8 *arg0) {
    lock_enter__6TLobbyFv();
    if (arg0 != NULL) {
        memset((void *) (arg0), (int) (0), (int) (0x30));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    restore_interrupts_nested__6TLobbyFv();
}

}
