#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803CEFC8(void *);
void TLobby__sub_803C89C4(u8 *arg0);
s32 TLobby__sub_803CF1A8(int);
s32 TLobby__sub_803C8A98(u8 *arg0);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803CEFC8(void *);
void TLobby__sub_803CF250(void *);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C8B38(u8 *arg0);
}

extern "C" {

void TLobby__sub_803C5D00(u8 *arg0);
void TLobby__sub_803C5E58(void);
void TLobby__sub_803C5E68(void);
void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803C610C(u8 *arg0);
void TLobby__sub_803C6118(u8 *arg0);
void TLobby__sub_803C8514(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2);
s32 ar_alloc__6TLobbyFv(void);
s32 get_field_14__6TLobbyFPv(u8 *arg0);
s32 get_state_zero__6TLobbyFv(void);
void on_set_mode__6TLobbyFv(void);
s32 process_connection_state__6TLobbyFv(void);
void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1);
void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1);
void si_get_type_async__6TLobbyFv(void);
M2C_UNK ARAlloc();
M2C_UNK SIGetTypeAsync();
M2C_UNK TLobby__sub_803C9608();
s32 TLobby__sub_803CB844();
M2C_UNK TLobby__sub_803CBA38();
M2C_UNK TLobby__sub_803CE240();
M2C_UNK TLobby__sub_803CF100(int, int, int);
s32 TLobby__sub_803CF1A8(int);
M2C_UNK TLobby__sub_803D13C0(int);
M2C_UNK TLobby__sub_803D1444();
M2C_UNK set_global_805D7520__6TLobbyFi();

s32 ar_alloc__6TLobbyFv(void) {
    ARAlloc();
    return 0;
}

s32 get_state_zero__6TLobbyFv(void) {
    TLobby__sub_803C9608();
    return 0;
}

s32 process_connection_state__6TLobbyFv(void) {
    if (TLobby__sub_803CB844() == 1) {
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    } else {
        TLobby__sub_803CBA38();
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    }
    return 0;
}

void TLobby__sub_803C5D00(u8 *arg0) {
    TLobby__sub_803D13C0((int) (M2C_FIELD(arg0, s32 *, 0x94)));
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5E58(void) {
    lbl_805D7548 -= 1;
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5E68(void) {
    lbl_805D7548 += 1;
}

void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x11C;
}

void TLobby__sub_803C610C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 1;
}

void TLobby__sub_803C6118(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (0));
    TLobby__sub_803CF1A8((int)((int) (M2C_FIELD(arg0, s32 *, 8))));
}

void TLobby__sub_803C8514(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1 << 0xB);
}

void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1) {
    s32 temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void ***, 4) = arg1;
    temp_r5 = (unsigned char *) (*arg1);
    temp_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(arg1, 0, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
}

s32 get_field_14__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 1;
}

s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    return 1;
}

s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x18);
    return 1;
}

void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) + 0x7FF) / 2048);
}

void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
}

void TLobby__sub_803C89C4(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, s8 *, 1) = 1;
    init_once__6TLobbyFv();
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        TLobby__sub_803CEFC8(temp_r3);
        M2C_FIELD(arg0, s8 *, 2) = 0;
    }
    release_ref__6TLobbyFv();
}

s32 TLobby__sub_803C8A98(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        return TLobby__sub_803CF1A8((int)(temp_r3)) - M2C_FIELD(arg0, s32 *, 0x10);
    }
    return 0;
}

s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10) + arg1), (int) (0));
    return TLobby__sub_803CF1A8((int)((int) (M2C_FIELD(arg0, s32 *, 8)))) - M2C_FIELD(arg0, s32 *, 0x10);
}

void TLobby__sub_803C8B38(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 1) = 1;
        init_once__6TLobbyFv();
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3 != NULL) {
            TLobby__sub_803CEFC8(temp_r3);
            M2C_FIELD(arg0, s8 *, 2) = 0;
        }
        release_ref__6TLobbyFv();
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3_2 != NULL) {
            TLobby__sub_803CF250(temp_r3_2);
        }
        memset((void *) (arg0), (int) (0), (int) (0x40));
    }
}

void si_get_type_async__6TLobbyFv(void) {
    SIGetTypeAsync();
}

void on_set_mode__6TLobbyFv(void) {
    set_global_805D7520__6TLobbyFi();
}

}
