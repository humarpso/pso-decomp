#include "types.h"
#include "pso/misc/TOBind.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TOBind__sub_80158608(void *);
s32 get_register__12TQuestThreadFPvi(s32, s32);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);

extern s32 quest_mission_manager;

void TOBind::sub_8015860C() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;
    f32 temp_f1;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (*(f32 *)((s8 *)arg0 + 0xB8) + *(f32 *)((s8 *)arg0 + 0xC0));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xBC);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0xB8);
    if (temp_f1 < temp_f0) {
        *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (temp_f0 - temp_f1);
    }
}

void TOBind::run_task() {
    if (TObjPlayer::check_demo_mode() == 1) {
        TOBind__sub_80158608((void *)(this));
        return;
    }
    if ((s32) *(s32 *)&this->m_b0 != 1) {
        if (get_register__12TQuestThreadFPvi(quest_mission_manager, *(s32 *)&this->m_b4) != 0) {
            *(s32 *)&this->m_b0 = 1;
            clear_player_status_flag__10TObjPlayerFlUl(this, 0, 1);
        }
        sub_8015860C();
    }
}

}
