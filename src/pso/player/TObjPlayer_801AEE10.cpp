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
int TObjPlayer__sub_80019248(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

u8 is_final_phase__10TObjPlayerFv(void) {
    return (u8) (get_main_phase() == 0xF);
}
u8 is_camera_ready__10TObjPlayerFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 2)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 is_camera_mode_active__10TObjPlayerFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 is_single_screen__10TObjPlayerFv(void) {
    return (u8) (is_not_split_screen__13TRaderMapCoreFv() == 1);
}
s32 is_player_valid_target__10TObjPlayerFi(s32 arg0) {
    s32 temp_r31;

    if (TObjPlayer__sub_80354E3C() == 0) {
        return 0;
    }
    temp_r31 = get_player_by_client_id((u16) arg0);
    if ((TObjPlayer__sub_80354C7C(arg0) == 0) || (check_flag_100__10TObjPlayerFPv(temp_r31) != 0) || (reset_volopt_state__10TObjPlayerFv(temp_r31) == 0)) {
        return 0;
    }
    return 1;
}

}
