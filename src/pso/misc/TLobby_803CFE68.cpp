#include "types.h"

extern "C" {

void call_callback__6TLobbyFv(void);
void TLobby__sub_803CFE9C(void);
extern s32 (*cvfs_completion_callback)(s32);

extern s32 lbl_805D75FC;

void call_callback__6TLobbyFv(void) {
    if (((s32 (*)(s32)) cvfs_completion_callback) != NULL) {
        cvfs_completion_callback(lbl_805D75FC);
    }
}

void TLobby__sub_803CFE9C(void) {

}

}
