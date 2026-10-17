#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 test_flags_any(s32 *arg0, s32 arg1);

extern s32 lbl_805D6C84;

void TLobby::apply_state_6c84() {
    ((TObjPlayer *)(&lbl_805D6C84))->set_flags(2);
}

void TLobby::apply_player_flag_2() {
    test_flags_any(&lbl_805D6C84, 2);
}

void TLobby::init_object_flag() {
    ((TObjPlayer *)(&lbl_805D6C84))->set_flags(1);
}

void TLobby::set_flag_1_at_6c84() {
    test_flags_any(&lbl_805D6C84, 1);
}

void TLobby::clear_flag_at_6c84() {
    ((TObjPlayer *)(&lbl_805D6C84))->clear_id();
}

}
