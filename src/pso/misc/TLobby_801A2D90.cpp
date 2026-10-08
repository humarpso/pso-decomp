#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801A2E00 { u8 pad0[0x18]; };

struct Ctrl_801A2E00 : Base_801A2E00 { virtual void v0(int); };

extern "C" {
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
M2C_UNK create_player_object(s32, s32, u32);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 is_split_screen();
extern s32 lbl_805D53A0;
extern s32 lbl_805D53A8;
void apply_char_to_players__6TLobbyFv(void);
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK reset_floor_items__6TLobbyFv();
M2C_UNK reset_item_id_counters__6TLobbyFv();
int clear_counter__6TLobbyFv(void);
M2C_UNK clear_quest_state__6TLobbyFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK clear_enabled_main_warps();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK clear_switch_table();
M2C_UNK apply_all_players__9TTecLukerFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
M2C_UNK queue_destruction__7TObjectFv(u32);
extern u32 lbl_805D5EE8;
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
int TKeyBoardControl__sub_8000F9A4(void);
int reset__16TKeyBoardControlFv(void);
int clear_counter__6TLobbyFv(void);

void reset_keyboard_input__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void shutdown_keyboard_control__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); reset_quest_state__6TLobbyFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
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
            if (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) {
                temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
                if (temp_r3 != 0U) {
                    create_player_object(var_r31, lbl_805D53A8 + var_r31, temp_r3);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    temp_r3_2 = get_char_index__23TAdSinglePlyChrSelectGCFUi(lbl_805D53A0);
    if (temp_r3_2 != 0U) {
        create_player_object(0, lbl_805D53A8, temp_r3_2);
    }
}
void reset_quest_state__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    clear_switch_table();
    apply_all_players__9TTecLukerFv();
    reset_item_id_counters__6TLobbyFv();
    reset_floor_items__6TLobbyFv();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    clear_enabled_main_warps();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

}
