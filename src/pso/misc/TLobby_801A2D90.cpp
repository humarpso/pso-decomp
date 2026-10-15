#include "types.h"

struct Base_801A2E00 { u8 pad0[0x18]; };

struct Ctrl_801A2E00 : Base_801A2E00 { virtual void v0(int); };

extern "C" {
s32 is_multiplayer_character_slot_selected(s32);
s32 create_player_object(s32, s32, u32);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 is_split_screen();
extern s32 local_client_id;
extern s32 lbl_805D53A8;
void apply_char_to_players__6TLobbyFv(void);
s32 reset_quest_result_callbacks__22THunterGuildSeqOfflineFPv();
s32 reset_floor_items__6TLobbyFv();
s32 reset_item_id_counters__6TLobbyFv();
int clear_counter__6TLobbyFv(void);
s32 clear_quest_state__6TLobbyFv();
s32 reset_quest_counter__6TLobbyFv();
s32 set_cleanup_flag__6TLobbyFv();
s32 reset_door_state__6TLobbyFv();
s32 clear_enabled_main_warps();
s32 reset_instance__8TObjDoorFv();
s32 free_map_data__13TRaderMapCoreFv();
s32 clear_switch_table();
s32 apply_all_players__9TTecLukerFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
s32 queue_destruction__7TObjectFv(u32);
extern u32 quest_mission_manager;
void reset_quest_state__6TLobbyFv(void);
void apply_char_to_players__6TLobbyFv(void);
Ctrl_801A2E00 *get_player_by_client_id(s32);
s32 get_game_play_mode();
s32 is_not_split_screen__13TRaderMapCoreFv();
void TLobby__sub_801A2E00(void);
}

extern "C" {

void TLobby__sub_801A2DF4(void);
void TLobby__sub_801A2DF8(void);
void TLobby__sub_801A2DFC(void);
void reset_keyboard_input__6TLobbyFv(void);
void shutdown_keyboard_control__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F92C(void);
int TKeyBoardControl__sub_8000F95C(void);
int clear_keyboard_key_state(void);
int reset__16TKeyBoardControlFv(void);
int clear_counter__6TLobbyFv(void);

void reset_keyboard_input__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); clear_keyboard_key_state(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void shutdown_keyboard_control__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); reset_quest_state__6TLobbyFv(); TKeyBoardControl__sub_8000F92C(); clear_keyboard_key_state(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void TLobby__sub_801A2DF4(void) {  }
void TLobby__sub_801A2DF8(void) {  }
void TLobby__sub_801A2DFC(void) {  }

void TLobby__sub_801A2E00(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (get_game_play_mode()) {
        case 1:
        case 2: {
            s32 i;
            for (i = 0; i < 4; i++) {
                Ctrl_801A2E00 *c = get_player_by_client_id(i);
                if (c != NULL && c != NULL) {
                    c->v0(1);
                }
            }
            apply_char_to_players__6TLobbyFv();
            break;
        }
        }
    }
}

void apply_char_to_players__6TLobbyFv(void) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;
    if (is_split_screen() != 0) {
        var_r31 = 0;
        do {
            if (is_multiplayer_character_slot_selected(var_r31) != 0) {
                temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
                if (temp_r3 != 0U) {
                    create_player_object(var_r31, lbl_805D53A8 + var_r31, temp_r3);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    temp_r3_2 = get_char_index__23TAdSinglePlyChrSelectGCFUi(local_client_id);
    if (temp_r3_2 != 0U) {
        create_player_object(0, lbl_805D53A8, temp_r3_2);
    }
}
void reset_quest_state__6TLobbyFv(void) {
    free_map_data__13TRaderMapCoreFv();
    clear_switch_table();
    apply_all_players__9TTecLukerFv();
    reset_item_id_counters__6TLobbyFv();
    reset_floor_items__6TLobbyFv();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) quest_mission_manager != 0U) {
        queue_destruction__7TObjectFv(quest_mission_manager);
    }
    clear_enabled_main_warps();
    reset_quest_result_callbacks__22THunterGuildSeqOfflineFPv();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

}
