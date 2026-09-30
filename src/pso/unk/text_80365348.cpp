#include "types.h"
extern "C" {
void TLobby__sub_8001FE7C(void *, int);
extern u32 lbl_80543A48[];
void fn_80365348(void);
}

extern "C" {

void fn_80365348(void) {
    s32 i;
    for (i = 5; i >= 0; i--) {
        if (lbl_80543A48[i] != 0) {
            TLobby__sub_8001FE7C((void *)lbl_80543A48[i], 1);
            lbl_80543A48[i] = 0;
        }
    }
}

}
