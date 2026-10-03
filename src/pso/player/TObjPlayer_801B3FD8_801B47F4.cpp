#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Cursor_801B4A18 { u8 pad[0x124]; };

struct Menu_801B4A18 { u8 pad[0x5c]; Cursor_801B4A18 cursors[4]; };

struct Owner_801B4A18 { u8 pad[0x424]; Menu_801B4A18 *menu; };

struct Slot_801B4AC8 { u8 pad[0x124]; };

struct Cursor_801B4AC8 { u8 pad[0x5C]; Slot_801B4AC8 slots[4]; u8 pad4ec[0x510 - 0x4EC]; u8 f510; };

struct Player_801B4AC8 { u8 pad[0x424]; Cursor_801B4AC8 *cursor; };

extern "C" {
s32 get_selected_entry__11TMainCursorFPv(void *c);
void TMainCursor__sub_8013C288(void *c, void *self, void *owner, void *p);
extern Owner_801B4A18 *lbl_8050EA10[];
void submit_cursor_candidate(void *self);
void TMainCursor__sub_8013C288(void *c, void *self, void *owner, void *p);
s32 get_selected_entry__11TMainCursorFPv(void *c);
void *get_player_by_client_id(u32);
void submit_target_to_player_cursor(void *target, s32 id);
}

extern "C" {

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0);
s32 is_target_valid__10TObjPlayerFPv(void *arg0);
void update_facing_vector__10TObjPlayerFPv(u8 *arg0);
void update_subsystems__10TObjPlayerFi(s32 arg0);
void update_target__10TObjPlayerFi(s32 arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
s32 TLobby__sub_800822E8(void *, M2C_UNK);
s32 is_locally_controlled__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801B21AC(s32);
M2C_UNK check_level_up__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF560(s32);
s16 TObjPlayer__sub_801BF57C(s32);
M2C_UNK TObjPlayer__sub_801BF584(void *);
M2C_UNK update_player_scale_camera(s32);
void *get_player_by_client_id(u32);
s32 can_use_action__10TObjPlayerFi(s32);
s32 check_flag_0x40000000__10TObjPlayerFPv(void *);
s32 check_flag_100__10TObjPlayerFPv();
s32 check_player_flag1__6TLobbyFPv(s32);
s32 check_state_flag_1__8TItemMagFPv(s32);
M2C_UNK clear_action_flag__10TObjPlayerFPv(s32);
M2C_UNK draw_party_label__15TFontSmallLobbyFiUis(s32, s32, s32);
M2C_UNK fn_801C1F1C(s32);
s32 get_current_target_id__10TObjPlayerFv();
s32 get_id__11TMainCursorFPv(s32);
s32 is_cursor_clear__11TMainCursorFPv(u32);
u16 obj_getField1c(s32);
M2C_UNK reset_slots__11TMainCursorFi(void *);
M2C_UNK reset_targets__15TFontSmallLobbyFi(s32);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
M2C_UNK update_ground_contact__10TObjPlayerFi(void *);
M2C_UNK update_target_lock__10TObjPlayerFii(s32, s32);

void update_target__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_current_target_id__10TObjPlayerFv();
    if (((u16)temp_r3 == 0xFFFF) || ((u16)temp_r3 == obj_getField1c(arg0))) {
        reset_targets__15TFontSmallLobbyFi(arg0 + 0x4AC);
        return;
    }
    fn_801C1F1C(arg0 + 0x4AC);
    if (can_use_action__10TObjPlayerFi(arg0) != 0) {
        draw_party_label__15TFontSmallLobbyFiUis(arg0 + 0x4AC, arg0, temp_r3);
    }
}

s32 is_target_valid__10TObjPlayerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
        return 0;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF) || (check_flag_100__10TObjPlayerFPv() != 0) || (is_cursor_clear__11TMainCursorFPv(M2C_FIELD(arg0, u32 *, 0x424)) == 0) || (check_flag_0x40000000__10TObjPlayerFPv(arg0) != 0) || (TLobby__sub_800822E8(arg0, 0x1E) == 0)) {
        return 0;
    }
    return 1;
}

void update_subsystems__10TObjPlayerFi(s32 arg0) {
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        check_level_up__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801B21AC(arg0);
        clear_action_flag__10TObjPlayerFPv(arg0);
        update_target__10TObjPlayerFi((s32)(arg0));
        if ((check_player_flag1__6TLobbyFPv(arg0) != 0) && (TObjPlayer__sub_801BF57C(arg0 + 0x730) >= 0) && (TObjPlayer__sub_801BF560(arg0 + 0x730) == 0)) {
            send_code_45_1__10TObjPlayerFi(arg0);
        }
        update_target_lock__10TObjPlayerFii(arg0 + 0x63C, arg0);
        if (check_state_flag_1__8TItemMagFPv(arg0 + 0x5B0) != 0) {
            update_player_scale_camera(arg0 + 0x5B0);
        }
    }
}

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0) {
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = get_player_by_client_id(arg0);
    if (temp_r3_2 == NULL) {
        return 0xFFFF;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0xFFFF;
    }
    return get_id__11TMainCursorFPv(temp_r3 + 0x4F8);
}

extern const f32 TObjPlayer__data_805DC278;

void submit_cursor_candidate(void *self) {
    s32 j;
    s32 i;
    Owner_801B4A18 *o;
    Owner_801B4A18 **pp;
    if (self != 0) {
        pp = lbl_8050EA10;
        for (i = 0; i < 4; i++) {
            o = *pp++;
            if (o != 0 && o->menu != 0) {
                for (j = 0; j < 4; j++) {
                    Cursor_801B4A18 *c = &o->menu->cursors[j];
                    if (get_selected_entry__11TMainCursorFPv(c) != 0) {
                        TMainCursor__sub_8013C288(c, self, o, (u8 *)o->menu + 0x510);
                    }
                }
            }
        }
    }
}

void submit_target_to_player_cursor(void *target, s32 id) {
    s32 i;
    Player_801B4AC8 *player;
    Slot_801B4AC8 *entry;
    if (target == NULL || (u16)id == 0xFFFF || (u16)id >= 0x1000) {
        return;
    }
    player = ((Player_801B4AC8 *)get_player_by_client_id((u16)id));
    if (player != NULL && player->cursor != NULL) {
        for (i = 0; i < 4; i++) {
            entry = &player->cursor->slots[i];
            if (get_selected_entry__11TMainCursorFPv(entry) != 0) {
                TMainCursor__sub_8013C288(entry, target, player, &player->cursor->f510);
            }
        }
    }
}

void update_facing_vector__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x404) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x40C) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    update_ground_contact__10TObjPlayerFi(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) != 0U) {
        reset_slots__11TMainCursorFi(M2C_FIELD(arg0, void **, 0x424));
    }
    TObjPlayer__sub_801BF584(arg0 + 0x360);
}

}
