#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 set_flags__10TObjPlayerFUl(s32 *, s32);
s32 test_flags_any(s32 *, s32);
s32 clear_id__10TObjPlayerFv(s32 *);

extern s32 lbl_805D6C84;

void TLobby::apply_state_6c84() {
    set_flags__10TObjPlayerFUl(&lbl_805D6C84, 2);
}

extern s32 lbl_805D6C84;

void TLobby::apply_player_flag_2() {
    test_flags_any(&lbl_805D6C84, 2);
}

extern s32 lbl_805D6C84;

void TLobby::init_object_flag() {
    set_flags__10TObjPlayerFUl(&lbl_805D6C84, 1);
}

extern s32 lbl_805D6C84;

void TLobby::set_flag_1_at_6c84() {
    test_flags_any(&lbl_805D6C84, 1);
}

extern s32 lbl_805D6C84;

void TLobby::clear_flag_at_6c84() {
    clear_id__10TObjPlayerFv(&lbl_805D6C84);
}

}
