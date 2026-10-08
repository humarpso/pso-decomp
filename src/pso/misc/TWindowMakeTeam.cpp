#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80264B38 { u8 pad[0x24]; void *f24; };

struct Obj_80264B24 { u8 pad[0x28]; void *f28; };

extern "C" {
extern void *lbl_805D395C;
void *TWindowMakeTeam__sub_80264B38(Obj_80264B38 *o);
extern void *lbl_805D395C;
void *TWindowMakeTeam__sub_80264B24(Obj_80264B24 *o);
s32 draw_entry_0x110__15TWindowMakeTeamFc(s8 arg0);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
void align_menu_entry_positions(s32);
void calc_window_size__17TWindowSubComCardFPv(s32);
void forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, s32);
extern u8 lbl_8044F300[];
s32 create_entry_menu_window__15TWindowMakeTeamFPv(u8 *arg0);
void init_status_disp__15TWindowMakeTeamFc(s8 arg0);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
void align_menu_entry_positions(s32);
void calc_window_size__17TWindowSubComCardFPv(s32);
void forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, s32);
extern u8 lbl_8044F308[];
s32 create_status_menu_window__15TWindowMakeTeamFPv(u8 *arg0);
}

extern "C" {

void init_status_disp__15TWindowMakeTeamFc(s8 arg0);
u8 is_enabled__15TWindowMakeTeamFPv(void *arg0);
void send_state__15TWindowMakeTeamFPv(void *arg0);
void set_state__15TWindowMakeTeamFPvi(void *arg0, s32 arg1);
void update_ok_button__15TWindowMakeTeamFPv(void *arg0);
void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
M2C_UNK mark_entry_by_id__17TWindowSubComCardFPvi(s32, M2C_UNK);
M2C_UNK disable_entry_by_id__17TWindowSubComCardFPvi(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int test_keyboard_card_flag4(void* p);

void init_status_disp__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x113);
}
s32 draw_entry_0x110__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x110);
}
u8 is_enabled__15TWindowMakeTeamFPv(void *arg0) {
    if (get_mode__6TLobbyFPv() == 1) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1F);
}

void *TWindowMakeTeam__sub_80264B24(Obj_80264B24 *o) {
    if (o->f28) return o->f28;
    return lbl_805D395C;
}

void *TWindowMakeTeam__sub_80264B38(Obj_80264B38 *o) {
    if (o->f24) return o->f24;
    return lbl_805D395C;
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
        mark_entry_by_id__17TWindowSubComCardFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 3);
        return;
    }
    disable_entry_by_id__17TWindowSubComCardFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 3);
}

void update_ok_button__15TWindowMakeTeamFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x24);
    if ((temp_r4 != NULL) && ((s8) *temp_r4 != 0)) {
        mark_entry_by_id__17TWindowSubComCardFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 4);
        return;
    }
    disable_entry_by_id__17TWindowSubComCardFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 4);
}

#define STATUS(n) ((s32 (*)(s8)) init_status_disp__15TWindowMakeTeamFc)(n)
s32 create_status_menu_window__15TWindowMakeTeamFPv(u8 *arg0) {
    s32 r;
    s32 m;
    r = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_8044F308, 4);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, STATUS(0), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, STATUS(1), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, STATUS(2), 6, 2);
    m = *(s32 *)(arg0 + 0x20);
    if (m == 1 || m == 2) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(r, STATUS(3), 6, 3);
    }
    calc_window_size__17TWindowSubComCardFPv(r);
    align_menu_entry_positions(r);
    set_selected_index__17TWindowSubComCardFPvs(r, *(s8 *)(arg0 + 0x1F));
    return r;
}

s32 create_entry_menu_window__15TWindowMakeTeamFPv(u8 *arg0) {
    s32 r;
    r = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_8044F300, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, draw_entry_0x110__15TWindowMakeTeamFc(0), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, draw_entry_0x110__15TWindowMakeTeamFc(1), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(r, draw_entry_0x110__15TWindowMakeTeamFc(2), 6, 2);
    calc_window_size__17TWindowSubComCardFPv(r);
    align_menu_entry_positions(r);
    set_selected_index__17TWindowSubComCardFPvs(r, *(s8 *)(arg0 + 0x1E));
    return r;
}

}
