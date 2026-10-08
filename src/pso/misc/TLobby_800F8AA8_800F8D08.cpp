#include "types.h"

extern "C" {
void clear_player_slot_tables__6TLobbyFi(s32 n);
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
void clear_player_slot_tables__6TLobbyFi(s32 n) {
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

void set_entry_params__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    lbl_80499A00[arg1] = arg0;
    lbl_80499A10[arg1] = arg2;
    lbl_80499A20[arg1] = arg3;
}

}
