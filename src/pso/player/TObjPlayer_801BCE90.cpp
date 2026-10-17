#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/player/TObjPlayer_801BE778.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 reset_key_machine_state__10TObjPlayerFv();

void TObjPlayer::update_recobox(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_801BE9A8(arg0);
        return;
    }
    set_flag_20000__10TObjPlayerFi(arg0);
}
void TObjPlayer::destroy_child() { void* m = this->inventory_objects; if (m) queue_destruction__7TObjectFv(m); }

}
