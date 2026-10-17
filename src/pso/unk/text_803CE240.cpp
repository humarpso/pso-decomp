#include "types.h"
struct Ent_803CE240 { u8 state; u8 pad[0x1BF]; };

extern "C" {
void TLobby__sub_803CD99C();
void TLobby__sub_803CE2A0(void *);
extern Ent_803CE240 lbl_80581330[];
void TLobby__sub_803CE240(void);
void TLobby__sub_803CE240(void) {
    s32 i;
    TLobby__sub_803CD99C();
    for (i = 0; i < 4; i++) {
        if ((s32)lbl_80581330[i].state == 1) {
            TLobby__sub_803CE2A0(&lbl_80581330[i]);
        }
    }
}

}
