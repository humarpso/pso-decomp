#include "types.h"

extern "C" {

void release_handle__6TLobbyFPv(u8 *arg0);
extern s32 (*mfci_error_callback)(s32, s32 *, s32);
s32 TLobby__sub_803D3988();
s32 TLobby__sub_803D39C0();

extern s32 lbl_8047E0C8[];
extern s32 mfci_error_callback_context;

void release_handle__6TLobbyFPv(u8 *arg0) {
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) mfci_error_callback) != NULL) {
            mfci_error_callback(mfci_error_callback_context, lbl_8047E0C8, 0);
        }
    } else {
        TLobby__sub_803D39C0();
        *(s8 *)((s8 *)arg0 + 1) = 0;
        TLobby__sub_803D3988();
    }
}

}
