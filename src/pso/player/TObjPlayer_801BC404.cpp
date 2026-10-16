#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TLevelSelect.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TObjPlayer__sub_801BC504(void);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801BEEAC(void*, void*);
int TObjPlayer__sub_801BEEE0(void*, void*);
int TObjPlayer__sub_801BEF30(void*, void*);
int set_floor_index__10TObjPlayerFl(void*, void*);

s32 TObjPlayer::has_active_camera_event() {
    if (TLobby::get_instance() == 0) {
        if ((check_camera_mode__10TObjPlayerFv() == 0) && (TLevelSelect::get_difficulty_flag_bit(0, 0xB) == 0) && (TLevelSelect::get_difficulty_flag_bit(1, 0xB) == 0) && (TLevelSelect::get_difficulty_flag_bit(2, 0xB) == 0) && (TLevelSelect::get_difficulty_flag_bit(3, 0xB) == 0)) {
            return 0;
        }
        goto block_14;
    }
    if ((TLobby::get_instance() == 1) && (check_camera_mode__10TObjPlayerFv() == 0) && (TLevelSelect::get_difficulty_flag_bit(0, 0x5B) == 0) && (TLevelSelect::get_difficulty_flag_bit(1, 0x5B) == 0) && (TLevelSelect::get_difficulty_flag_bit(2, 0x5B) == 0) && (TLevelSelect::get_difficulty_flag_bit(3, 0x5B) == 0)) {
        return 0;
    }
block_14:
    return 1;
}
void TObjPlayer__sub_801BC504(void) {  }
void TObjPlayer::init_from_data(void* a1) { init_action_provider(); *(short*)((char*)this + 0x1c) = *(unsigned short*)(a1); this->m_2e = *(short*)((char*)a1 + 0x2); *(void* *)&this->actor_flags = *(void**)((char*)a1 + 0x4); ((TObjPlayer *)((char*)this + 0x5c))->copy_xyz((char*)a1 + 0x14); *(short *)&this->m_326 = *(short*)((char*)a1 + 0x20); *(short *)&this->m_32c = *(short*)((char*)a1 + 0x22); ((TLobby *)((char*)this + 0xdac))->copy_header_struct((char*)a1 + 0x68); TObjPlayer__sub_801BEF30((char*)this + 0x828, (char*)a1 + 0x70); ((TObjPlayer *)((char*)this + 0x830))->copy_player_record_header((u8 *)((char*)a1 + 0x78)); TObjPlayer__sub_801BEEE0((char*)this + 0x858, (char*)a1 + 0x94); TObjPlayer__sub_801BEEAC((char*)this + 0x730, (char*)a1 + 0x98); set_floor_index__10TObjPlayerFl(this, *(void**)((char*)a1 + 0xac)); set_floor((s32)(*(void**)((char*)a1 + 0x488))); *(void* *)&this->m_334 = *(void**)((char*)a1 + 0xb0); set_play_time((s32)(*(void**)((char*)a1 + 0x64))); }

}
