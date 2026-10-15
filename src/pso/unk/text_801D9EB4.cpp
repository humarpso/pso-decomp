#include "types.h"

extern "C" {

s32 handle_quest_ready__16TQuestListOnlineFv();

void handle_cmd_AC__9TProtocolFR6packet(void *arg0, void *arg1) {
    if ((u8) *(u8 *)((s8 *)arg1 + 1) == 0) {
        handle_quest_ready__16TQuestListOnlineFv();
        return;
    }
    *(s8 *)((s8 *)arg0 + 0x2A) = 1;
}

}
