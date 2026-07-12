#include "types.h"

extern "C" {

s32 TLobby__sub_8007BA98();
s32 handle_disconnect_cleanup();
s32 TLobby__sub_800F8AE8();
s32 TLobby__sub_800F8B20();
s32 TItemDrop__sub_800FD98C();
s32 TItemDrop__sub_800FDDF4();
s32 update_key_machine__6TLobbyFv();
void reset_and_invoke__6TLobbyFv(void);
int reset_keyboard_state__6TLobbyFv(void);
int TLobby__sub_800F8AF8(void);
int invoke_callback__6TLobbyFv(void);

s32 check_disconnect_conditions__6TLobbyFv(void) {
    TLobby__sub_800F8B20();
    if (TLobby__sub_8007BA98() == 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    TItemDrop__sub_800FD98C();
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
    if (TLobby__sub_800F8AE8() != 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    TLobby__sub_800F8AF8();
    return 0;
}
void reset_and_invoke__6TLobbyFv(void) { reset_keyboard_state__6TLobbyFv(); invoke_callback__6TLobbyFv(); TLobby__sub_800F8AF8(); }

}
