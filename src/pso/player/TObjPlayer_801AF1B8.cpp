#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int is_locally_controlled__10TObjPlayerFPv(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

void update_movement_effects__10TObjPlayerFi(s32 arg0) {
    if ((is_technique_ready__8TTecCtrlFv() != 0) && (TObjPlayer__sub_801AF868(arg0) == 0) && (update_movement_by_screen__10TObjPlayerFv(arg0) != 0) && (TLobby__sub_800822E8(arg0, 0x408000) == 0) && (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (check_flag_800000__10TObjPlayerFPv(arg0) == 0)) {
        TObjPlayer__sub_801BF1DC(arg0 + 0x384);
    }
    if ((test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (TLobby__sub_800822E8(arg0, 2) != 0) && (TObjPlayer__sub_801BF3E8(arg0 + 0x360) != 0)) {
        TObjPlayer__sub_801BF19C(arg0 + 0x384);
    }
}
int get_max_level__10TObjPlayerFv(void) { return 199; }

}
