#include "types.h"

extern "C" {

void *TAdDialingGC__ct(void *arg0);
s32 __ct__7TObjectFP7TObject();
s32 is_state_active__6TLobbyFv();
s32 TLobby__sub_8014618C();

extern s32 __vt__12TAdDialingGC[];
extern s32 lbl_805D41B0;
extern void *TAdDialingGC__instance;

void *TAdDialingGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TAdDialingGC;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D41B0;
    TAdDialingGC__instance = arg0;
    if (is_state_active__6TLobbyFv() != 0) {
        *(s32 *)((s8 *)arg0 + 0x1C) = 1;
    } else if (TLobby__sub_8014618C() == 1) {
        *(s32 *)((s8 *)arg0 + 0x1C) = 2;
    } else {
        *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s16 *)((s8 *)arg0 + 0x30) = 0;
    *(s16 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0;
    return arg0;
}

}
