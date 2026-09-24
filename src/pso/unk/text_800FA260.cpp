#include "types.h"
struct N_800FA260 { u32 flags; u8 pad[0x34]; N_800FA260 *next; };

extern "C" {
void pump_frames__6TLobbyFv(void);
extern N_800FA260 *lbl_805D5360;
void TLobby__sub_800FA260(void);
}

extern "C" {

void TLobby__sub_800FA260(void) {
    N_800FA260 *p;
    pump_frames__6TLobbyFv();
    for (p = lbl_805D5360; p != 0; p = p->next) {
        p->flags |= 0x200;
    }
}

}
