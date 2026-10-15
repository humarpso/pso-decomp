#include "types.h"

extern "C" {

void TLobby__sub_803CBE20(void);
void TLobby__sub_803CBE40(u8 *arg0);
void TLobby__sub_803CBE64(u8 *arg0);
void flush_input__16TKeyBoardControlFv(void);
void wait_for_vi_retrace(void);
s32 TLobby__sub_803CBEC8(int);
s32 run_worker_callbacks_slot4__6TLobbyFv();
s32 apply_field__6TLobbyFv(int);
s32 VIWaitForRetrace();
s32 run_step_60c8__6TLobbyFv();

void flush_input__16TKeyBoardControlFv(void) {
    run_worker_callbacks_slot4__6TLobbyFv();
}

void wait_for_vi_retrace(void) {
    VIWaitForRetrace();
}

void TLobby__sub_803CBE20(void) {
    run_step_60c8__6TLobbyFv();
}

void TLobby__sub_803CBE40(u8 *arg0) {
    apply_field__6TLobbyFv((int) (*(s32 *)((s8 *)arg0 + 0xC)));
}

void TLobby__sub_803CBE64(u8 *arg0) {
    TLobby__sub_803CBEC8((int) (*(s32 *)((s8 *)arg0 + 0xC)));
}

}
