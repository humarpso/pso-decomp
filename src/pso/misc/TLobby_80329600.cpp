#include "types.h"

extern "C" {

void apply_state_6c84__6TLobbyFv(void);
void apply_player_flag_2__6TLobbyFv(void);
void init_object_flag__6TLobbyFv(void);
void set_flag_1_at_6c84__6TLobbyFv(void);
void clear_flag_at_6c84__6TLobbyFv(void);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 test_flags_any(s32 *, s32);
s32 clear_id__10TObjPlayerFPv(s32 *);

extern s32 lbl_805D6C84;

void apply_state_6c84__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 2);
}

extern s32 lbl_805D6C84;

void apply_player_flag_2__6TLobbyFv(void) {
    test_flags_any(&lbl_805D6C84, 2);
}

extern s32 lbl_805D6C84;

void init_object_flag__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 1);
}

extern s32 lbl_805D6C84;

void set_flag_1_at_6c84__6TLobbyFv(void) {
    test_flags_any(&lbl_805D6C84, 1);
}

extern s32 lbl_805D6C84;

void clear_flag_at_6c84__6TLobbyFv(void) {
    clear_id__10TObjPlayerFPv(&lbl_805D6C84);
}

}
