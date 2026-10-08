#include "types.h"

extern "C" {

s32 run_lobby_load_tables__6TLobbyFv();
s32 handle_disconnect_cleanup();
s32 is_area_transfer_pending();
s32 apply_phase_keyboard_mode();
s32 load_area_gsl();
s32 TItemDrop__sub_800FDDF4();
s32 update_key_machine__6TLobbyFv();
void reset_and_invoke__6TLobbyFv(void);
int reset_keyboard_state__6TLobbyFv(void);
int clear_callback_and_reset_keyboard__6TLobbyFv(void);
int invoke_callback__6TLobbyFv(void);

s32 check_disconnect_conditions__6TLobbyFv(void) {
    apply_phase_keyboard_mode();
    if (run_lobby_load_tables__6TLobbyFv() == 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    load_area_gsl();
    if (update_key_machine__6TLobbyFv() == 0) {
        TItemDrop__sub_800FDDF4();
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    if (handle_disconnect_cleanup() == 0) {
        TItemDrop__sub_800FDDF4();
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    TItemDrop__sub_800FDDF4();
    if (is_area_transfer_pending() != 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    return 0;
}
void reset_and_invoke__6TLobbyFv(void) { reset_keyboard_state__6TLobbyFv(); invoke_callback__6TLobbyFv(); clear_callback_and_reset_keyboard__6TLobbyFv(); }

}
