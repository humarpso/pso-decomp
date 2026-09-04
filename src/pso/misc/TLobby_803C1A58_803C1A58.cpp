#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C3984(u8 *arg0);
void TLobby__sub_803C39CC(u8 *arg0);
void TLobby__sub_803C3A04(u8 *arg0);
s32 TLobby__sub_803C3ABC(u8 *arg0);
s32 TLobby__sub_803C3AC4(u8 *arg0);
s32 TLobby__sub_803C3B44(u8 *arg0);
void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2);
void clear_record__6TLobbyFPv(u8 *arg0);
void dispatch_by_state__6TLobbyFPv(u8 *arg0);
void dispatch_network_state__6TLobbyFPv(u8 *arg0);
s32 get_entry_id__6TLobbyFPv(u8 *arg0);
s32 get_field30__6TLobbyFPv(u8 *arg0);
s32 get_field_0x3c__6TLobbyFPv(u8 *arg0);
s32 get_field_0xa4__6TLobbyFPv(u8 *arg0);
s32 get_field_28__6TLobbyFPv(u8 *arg0);
s32 get_field_2c__6TLobbyFPv(u8 *arg0);
s32 get_field_34__6TLobbyFPv(u8 *arg0);
s32 get_field_a0__6TLobbyFPv(u8 *arg0);
s16 get_field_a8__6TLobbyFPv(u8 *arg0);
s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
s16 get_slot__6TLobbyFPv(u8 *arg0);
void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_803C1A8C();
M2C_UNK TLobby__sub_803C1DC4();
M2C_UNK TLobby__sub_803C263C();
M2C_UNK TLobby__sub_803C2A00();
M2C_UNK TLobby__sub_803C2D38();
M2C_UNK clear_record_data__6TLobbyFPv(int);
M2C_UNK memset(void *, int, int);
M2C_UNK reset_client_state__6TLobbyFPv(int);
M2C_UNK reset_field_0C__6TLobbyFPv(int);

void dispatch_network_state__6TLobbyFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xAA) == 1) {
        TLobby__sub_803C1A8C();
        return;
    }
    TLobby__sub_803C1DC4();
}

void dispatch_by_state__6TLobbyFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xAA);
    if (temp_r0 == 2) {
        TLobby__sub_803C263C();
        return;
    }
    if (temp_r0 == 1) {
        TLobby__sub_803C2A00();
        return;
    }
    TLobby__sub_803C2D38();
}

s32 get_field_a0__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0);
}

s32 get_field_0xa4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void TLobby__sub_803C3984(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 3) {
        reset_field_0C__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

void TLobby__sub_803C39CC(u8 *arg0) {
    reset_client_state__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TLobby__sub_803C3A04(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
}

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = arg1;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s8) M2C_FIELD(arg0, u8 *, 0xF));
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s32) (((s8) M2C_FIELD(arg0, u8 *, 0xD) / 8) * (s8) M2C_FIELD(arg0, u8 *, 0xE)));
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}

s32 get_entry_id__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 get_field_34__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_field30__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 get_field_2c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 get_field_28__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s16 get_slot__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x24);
}

s32 TLobby__sub_803C3ABC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 TLobby__sub_803C3AC4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 TLobby__sub_803C3B44(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 get_field_a8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA8);
}

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg2;
}

void clear_record__6TLobbyFPv(u8 *arg0) {
    if (arg0 != NULL) {
        clear_record_data__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        memset((void *) (arg0), (int) (0), (int) (0xB8));
        M2C_FIELD(arg0, s16 *, 0) = 0;
    }
}

s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x9C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x40) - M2C_FIELD(arg0, s32 *, 0x9C);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x98);
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

}
