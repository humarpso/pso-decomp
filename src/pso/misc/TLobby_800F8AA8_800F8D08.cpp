#include "types.h"

extern "C" {
void TLobby__sub_800F8D1C(s32 n);
}

extern "C" {

void reset_read_state__6TLobbyFv(void);

    extern int lbl_805D5340;
    extern int lbl_805D5344;
    extern int lbl_805D5348;
void reset_read_state__6TLobbyFv(void) { lbl_805D5340 = 0; lbl_805D5344 = 0; lbl_805D5348 = 0; }
s32 lbl_80499A00[4] = { 0, 0, 0, 0 };
s32 lbl_80499A10[4] = { 0, 0, 0, 0 };
s32 lbl_80499A20[4] = { 0, 0, 0, 0 };
s32 lbl_80499A30[4] = { 0, 0, 0, 0 };
void TLobby__sub_800F8D1C(s32 n) {
    s32 i;
    if (n == -1) {
        for (i = 0; i < 4; i++) {
            lbl_80499A00[i] = 0;
            lbl_80499A10[i] = 0;
            lbl_80499A20[i] = 0;
            lbl_80499A30[i] = 0;
        }
        return;
    }
    lbl_80499A00[n] = 0;
    lbl_80499A10[n] = 0;
    lbl_80499A20[n] = 0;
    lbl_80499A30[n] = 0;
}

}
