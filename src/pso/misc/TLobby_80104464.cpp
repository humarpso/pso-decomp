#include "types.h"

extern "C" {

void TLobby__sub_80104464(void);
void TLobby__sub_80104468(void);
u32 TAdSinglePlyChrSelectGC__sub_802029E8(s32);
s32 TLobby__sub_801043F8();
s32 fn_80077788();
s32 fn_80077790();
s32 fn_801058E8();

void TLobby__sub_80104464(void) {  }
void TLobby__sub_80104468(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        TLobby__sub_801043F8();
        if (TAdSinglePlyChrSelectGC__sub_802029E8(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}

}
