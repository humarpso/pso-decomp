#include "types.h"
#include "pso/TProtocol.h"

extern "C" {

s32 handle_quest_ready__16TQuestListOnlineFv();

void TProtocol::handle_cmd_AC(packet &pkt) {
    void *arg1 = &pkt;
    if ((u8) *(u8 *)((s8 *)arg1 + 1) == 0) {
        handle_quest_ready__16TQuestListOnlineFv();
        return;
    }
    *(s8 *)((s8 *)this + 0x2A) = 1;
}

}
