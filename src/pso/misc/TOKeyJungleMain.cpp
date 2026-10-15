#include "types.h"

extern "C" {

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1);

s32 get_main_phase();
s32 send_6x75_quest_flag__6TLobbyFsss(int, s32, s32);
s32 set_story_flag_in_bank(s32, u16);

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1) {
    if (get_main_phase() == 0xF) {
        send_6x75_quest_flag__6TLobbyFsss(arg1, 0, arg0);
        return;
    }
    set_story_flag_in_bank(arg0, arg1);
}

}
