#include "types.h"

extern "C" {

s32 has_active_camera_event__10TObjPlayerFv(void);
void TObjPlayer__sub_801BC504(void);
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1);
int init_action_provider__10TObjPlayerFPv(void*);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801BEEAC(void*, void*);
int TObjPlayer__sub_801BEEE0(void*, void*);
int copy_player_record_header__10TObjPlayerFPvPv(void*, void*);
int TObjPlayer__sub_801BEF30(void*, void*);
s32 get_instance__6TLobbyFv();
int copy_xyz__10TObjPlayerFPvPv(void*, void*);
int copy_header_struct__6TLobbyFPvPv(void*, void*);
int set_floor__10TObjPlayerFPvi(void*, void*);
int set_floor_index__10TObjPlayerFPvi(void*, void*);
int set_play_time__10TObjPlayerFPvi(void*, void*);
s32 get_difficulty_flag_bit__12TLevelSelectFii(s32, s32);

s32 has_active_camera_event__10TObjPlayerFv(void) {
    if (get_instance__6TLobbyFv() == 0) {
        if ((check_camera_mode__10TObjPlayerFv() == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(0, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(1, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(2, 0xB) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(3, 0xB) == 0)) {
            return 0;
        }
        goto block_14;
    }
    if ((get_instance__6TLobbyFv() == 1) && (check_camera_mode__10TObjPlayerFv() == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(0, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(1, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(2, 0x5B) == 0) && (get_difficulty_flag_bit__12TLevelSelectFii(3, 0x5B) == 0)) {
        return 0;
    }
block_14:
    return 1;
}
void TObjPlayer__sub_801BC504(void) {  }
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1) { init_action_provider__10TObjPlayerFPv(p); *(short*)((char*)p + 0x1c) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2e) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x30) = *(void**)((char*)a1 + 0x4); copy_xyz__10TObjPlayerFPvPv((char*)p + 0x5c, (char*)a1 + 0x14); *(short*)((char*)p + 0x326) = *(short*)((char*)a1 + 0x20); *(short*)((char*)p + 0x32c) = *(short*)((char*)a1 + 0x22); copy_header_struct__6TLobbyFPvPv((char*)p + 0xdac, (char*)a1 + 0x68); TObjPlayer__sub_801BEF30((char*)p + 0x828, (char*)a1 + 0x70); copy_player_record_header__10TObjPlayerFPvPv((char*)p + 0x830, (char*)a1 + 0x78); TObjPlayer__sub_801BEEE0((char*)p + 0x858, (char*)a1 + 0x94); TObjPlayer__sub_801BEEAC((char*)p + 0x730, (char*)a1 + 0x98); set_floor_index__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0xac)); set_floor__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0x488)); *(void**)((char*)p + 0x334) = *(void**)((char*)a1 + 0xb0); set_play_time__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0x64)); }

}
