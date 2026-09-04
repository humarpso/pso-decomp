#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_entry_0x110__15TWindowMakeTeamFc(s8 arg0);
void init_status_disp__15TWindowMakeTeamFc(s8 arg0);
u8 is_enabled__15TWindowMakeTeamFPv(void *arg0);
void send_state__15TWindowMakeTeamFPv(void *arg0);
void set_state__15TWindowMakeTeamFPvi(void *arg0, s32 arg1);
void update_ok_button__15TWindowMakeTeamFPv(void *arg0);
void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
M2C_UNK TWindowSubComCard__sub_8026853C(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802685C4(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int test_keyboard_card_flag4(void* p);

void init_status_disp__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x113);
}
void draw_entry_0x110__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x110);
}
u8 is_enabled__15TWindowMakeTeamFPv(void *arg0) {
    if (get_mode__6TLobbyFPv() == 1) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1F);
}

void set_state__15TWindowMakeTeamFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1C) = 3;
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x1C) = 7;
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0x1C) = 9;
        return;
    case 4:
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 1);
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xB;
        return;
    }
}

void send_state__15TWindowMakeTeamFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1E) != 1) {
        TWindowSubComCard__sub_8026853C(M2C_FIELD(arg0, s32 *, 0x2C), 3);
        return;
    }
    TWindowSubComCard__sub_802685C4(M2C_FIELD(arg0, s32 *, 0x2C), 3);
}

void update_ok_button__15TWindowMakeTeamFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x24);
    if ((temp_r4 != NULL) && ((s8) *temp_r4 != 0)) {
        TWindowSubComCard__sub_8026853C(M2C_FIELD(arg0, s32 *, 0x2C), 4);
        return;
    }
    TWindowSubComCard__sub_802685C4(M2C_FIELD(arg0, s32 *, 0x2C), 4);
}

}
