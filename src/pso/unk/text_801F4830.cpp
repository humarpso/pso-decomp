#include "types.h"
#include "pso/boss/TBoss4DarkFalz.h"

extern "C" {

s32 send_6x75_quest_flag_cur_difficulty__6TLobbyFss(int, s32);
s32 set_story_flag(u16);
s32 get_main_phase();

void TBoss4DarkFalz::dispatch_by_main_phase(u16 arg0) {
    if (get_main_phase() == 0xF) {
        send_6x75_quest_flag_cur_difficulty__6TLobbyFss(arg0, 0);
        return;
    }
    set_story_flag(arg0);
}

}
