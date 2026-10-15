#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjPlayer__sub_801BE9A8(s32);
s32 set_flag_20000__10TObjPlayerFi(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);

void TObjPlayer::update_recobox(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_801BE9A8(arg0);
        return;
    }
    set_flag_20000__10TObjPlayerFi(arg0);
}
void TObjPlayer::destroy_child() { void* m = *(void**)((char*)this + 0xd00); if (m) queue_destruction__7TObjectFv(m); }

}
