#include "types.h"
extern "C" {
void free_heap__13TParticleCtrlFv(void);
void TLobby__sub_803DA16C(void *);
void TLobby__sub_8001FE7C(void *, int);
extern u32 lbl_80541928[];
extern void *lbl_805D6950;
extern void *lbl_805D6954;
void fn_802F0E24(void);
}

extern "C" {

void fn_802F0E24(void) {
    s32 i;
    free_heap__13TParticleCtrlFv();
    for (i = 0; i < 7; i++) {
        lbl_80541928[i] = 0;
    }
    if (lbl_805D6954 != 0) {
        TLobby__sub_803DA16C(lbl_805D6954);
        lbl_805D6954 = 0;
    }
    TLobby__sub_8001FE7C(lbl_805D6950, 1);
    lbl_805D6950 = 0;
}

}
