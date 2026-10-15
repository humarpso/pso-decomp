#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_801BC504(void);
int init_action_provider__10TObjPlayerFv(void*);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801BEEAC(void*, void*);
int TObjPlayer__sub_801BEEE0(void*, void*);
int copy_player_record_header__10TObjPlayerFPUc(void*, void*);
int TObjPlayer__sub_801BEF30(void*, void*);
s32 get_instance__6TLobbyFv();
int copy_xyz__10TObjPlayerFPv(void*, void*);
int copy_header_struct__6TLobbyFPv(void*, void*);
int set_floor__10TObjPlayerFPvi(void*, void*);
int set_floor_index__10TObjPlayerFPvi(void*, void*);
int set_play_time__10TObjPlayerFl(void*, void*);
s32 get_difficulty_flag_bit__12TLevelSelectFll(s32, s32);

s32 TObjPlayer::has_active_camera_event() {
    if (get_instance__6TLobbyFv() == 0) {
        if ((check_camera_mode__10TObjPlayerFv() == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(0, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(1, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(2, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(3, 0xB) == 0)) {
            return 0;
        }
        goto block_14;
    }
    if ((get_instance__6TLobbyFv() == 1) && (check_camera_mode__10TObjPlayerFv() == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(0, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(1, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(2, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFll(3, 0x5B) == 0)) {
        return 0;
    }
block_14:
    return 1;
}
void TObjPlayer__sub_801BC504(void) {  }
void TObjPlayer::init_from_data(void* a1) { init_action_provider__10TObjPlayerFv(this); *(short*)((char*)this + 0x1c) = *(unsigned short*)(a1); *(short*)((char*)this + 0x2e) = *(short*)((char*)a1 + 0x2); *(void**)((char*)this + 0x30) = *(void**)((char*)a1 + 0x4); copy_xyz__10TObjPlayerFPv((char*)this + 0x5c, (char*)a1 + 0x14); *(short*)((char*)this + 0x326) = *(short*)((char*)a1 + 0x20); *(short*)((char*)this + 0x32c) = *(short*)((char*)a1 + 0x22); copy_header_struct__6TLobbyFPv((char*)this + 0xdac, (char*)a1 + 0x68); TObjPlayer__sub_801BEF30((char*)this + 0x828, (char*)a1 + 0x70); copy_player_record_header__10TObjPlayerFPUc((char*)this + 0x830, (char*)a1 + 0x78); TObjPlayer__sub_801BEEE0((char*)this + 0x858, (char*)a1 + 0x94); TObjPlayer__sub_801BEEAC((char*)this + 0x730, (char*)a1 + 0x98); set_floor_index__10TObjPlayerFPvi(this, *(void**)((char*)a1 + 0xac)); set_floor__10TObjPlayerFPvi(this, *(void**)((char*)a1 + 0x488)); *(void**)((char*)this + 0x334) = *(void**)((char*)a1 + 0xb0); set_play_time__10TObjPlayerFl(this, *(void**)((char*)a1 + 0x64)); }

}
