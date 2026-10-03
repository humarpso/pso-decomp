#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase();
s32 TCameraCtrl__sub_8006B368();
u8 *get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_short_mail_ctrl__6TLobbyFv();
s32 TWindowSubTradeMain__sub_802D3924(s32);
extern s32 lbl_805D53A0;
s32 filter_menu_entry__15TWindowMainMenuFPvPvPv(u8 *arg0, s16 *arg1, s32 *arg2);
}

extern "C" {

void TWindowMainMenu__sub_80263FE0(void *arg0);
void close_child_window__15TWindowMainMenuFPv(void* p);
void destroy_submenu__15TWindowMainMenuFPv(void* p);
void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);
u32 TLobby__sub_80269CC0(u32, M2C_UNK *, M2C_UNK, s32);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
u32 get_window_layout_position(M2C_UNK);
int TWindow__close(void*);
M2C_UNK call_if_split_screen(u32, s32);
M2C_UNK fn_80263A20(s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 select_main_menu_item_10(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
s32 test_keyboard_card_flag4(s32);

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0) {
    if (test_keyboard_card_flag4(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x52) = 0;
        return;
    }
    TWindowMainMenu__sub_80263DBC(arg0);
}

s32 filter_menu_entry__15TWindowMainMenuFPvPvPv(u8 *arg0, s16 *arg1, s32 *arg2) {
    u8 *base;
    u8 *p;
    s32 st;
    base = get_player_by_client_id(M2C_FIELD(arg0, s32 *, 0x54));
    if (base == NULL) {
        return 0;
    }
    p = base + 0x85C;
    if (p == NULL) {
        return 0;
    }
    *arg2 = 1;
    st = get_global_state__14TOKeyMachine01Fv();
    switch (*arg1) {
    case 0:
    case 9:
    case 23:
        if (st == 0xF) {
            *arg2 = 0;
        }
        break;
    case 26:
        if (get_main_phase() != 0xF) {
            *arg1 += 1;
            *arg2 = 0;
        } else if (TWindowSubTradeMain__sub_802D3924(lbl_805D53A0) == 0) {
            *arg2 = 0;
        }
        break;
    case 15:
        if (TCameraCtrl__sub_8006B368() != 1) {
            *arg2 = 0;
        }
        break;
    case 3:
        if (M2C_FIELD(p, s32 *, 0x34) & 0x10) {
            return 0;
        }
        if (st == 0xF || st == 0 || st == 0x12) {
            *arg1 = 4;
        }
        break;
    case 12:
        if (st == 0xF || st == 0 || st == 0x12) {
            *arg2 = 0;
        }
        break;
    case 19:
        if (get_main_phase() != 0xF && get_short_mail_ctrl__6TLobbyFv() <= 0) {
            *arg2 = 0;
        }
        break;
    case 7:
        if (get_main_phase() == 0xF) {
            *arg1 = 8;
        }
        break;
    }
    if (*arg2 == 0) {
        *arg1 += 1;
    }
    return 1;
}

void TWindowMainMenu__sub_80263FE0(void *arg0) {
    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
}

void close_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

extern M2C_UNK lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            u32 tmp = get_window_layout_position(0x1B);
            M2C_FIELD(arg0, u32 *, 0x24) = TLobby__sub_80269CC0(tmp, lbl_8044F2E0, 1, M2C_FIELD(arg0, s32 *, 0x54));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x24), lbl_805DD13C);
            call_if_split_screen(M2C_FIELD(arg0, u32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x24), select_main_menu_item_10(arg1), 0x80);
    }
}

void destroy_submenu__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}
