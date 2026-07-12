#include "types.h"

extern "C" {

s32 TLobby__sub_8007BA98();
s32 fn_800F7BA8();
s32 TLobby__sub_800F8AE8();
s32 TLobby__sub_800F8B20();
s32 TItemDrop__sub_800FD98C();
s32 TItemDrop__sub_800FDDF4();
s32 TLobby__sub_8020809C();
void TLobby__sub_8007BBC4(void);
int reset_keyboard_state__6TLobbyFv(void);
int TLobby__sub_800F8AF8(void);
int invoke_callback__6TLobbyFv(void);

s32 check_disconnect_conditions__6TLobbyFv(void) {
    TLobby__sub_800F8B20();
    if (TLobby__sub_8007BA98() == 0) {
        TLobby__sub_8007BBC4();
        return 1;
    }
    TItemDrop__sub_800FD98C();
    if (TLobby__sub_8020809C() == 0) {
        TItemDrop__sub_800FDDF4();
        TLobby__sub_8007BBC4();
        return 1;
    }
    if (fn_800F7BA8() == 0) {
        TItemDrop__sub_800FDDF4();
        TLobby__sub_8007BBC4();
        return 1;
    }
    TItemDrop__sub_800FDDF4();
    if (TLobby__sub_800F8AE8() != 0) {
        TLobby__sub_8007BBC4();
        return 1;
    }
    TLobby__sub_800F8AF8();
    return 0;
}
void TLobby__sub_8007BBC4(void) { reset_keyboard_state__6TLobbyFv(); invoke_callback__6TLobbyFv(); TLobby__sub_800F8AF8(); }

}
