#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0);
s32 is_target_valid__10TObjPlayerFPv(void *arg0);
void update_facing_vector__10TObjPlayerFPv(u8 *arg0);
void update_subsystems__10TObjPlayerFi(s32 arg0);
void update_target__10TObjPlayerFi(s32 arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
s32 TLobby__sub_800822E8(void *, M2C_UNK);
s32 TObjPlayer__sub_80019248();
M2C_UNK TObjPlayer__sub_801B21AC(s32);
M2C_UNK TObjPlayer__sub_801B6DF0(s32);
s32 TObjPlayer__sub_801BF560(s32);
s16 TObjPlayer__sub_801BF57C(s32);
M2C_UNK TObjPlayer__sub_801BF584(void *);
M2C_UNK TObjPlayer__sub_801C68EC(s32);
void *TPlayerBattleCtrl4P__sub_801BA74C(u32);
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
    if (TObjPlayer__sub_80019248() != 0) {
        TObjPlayer__sub_801B6DF0(arg0);
        TObjPlayer__sub_801B21AC(arg0);
        clear_action_flag__10TObjPlayerFPv(arg0);
        update_target__10TObjPlayerFi((s32)(arg0));
        if ((check_player_flag1__6TLobbyFPv(arg0) != 0) && (TObjPlayer__sub_801BF57C(arg0 + 0x730) >= 0) && (TObjPlayer__sub_801BF560(arg0 + 0x730) == 0)) {
            send_code_45_1__10TObjPlayerFi(arg0);
        }
        update_target_lock__10TObjPlayerFii(arg0 + 0x63C, arg0);
        if (check_state_flag_1__8TItemMagFPv(arg0 + 0x5B0) != 0) {
            TObjPlayer__sub_801C68EC(arg0 + 0x5B0);
        }
    }
}

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0) {
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
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
