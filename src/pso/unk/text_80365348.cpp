#include "types.h"

typedef struct Ent_803653A4 { s32 id; s32 arg; } Ent_803653A4;

extern "C" {
void TLobby__sub_8001FE7C(void *, int);
extern u32 lbl_80543A48[];
void fn_80365348(void);
void *TLobby__sub_80020004(void *, s32, s32, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
extern Ent_803653A4 lbl_804F2C08[];
extern u32 lbl_80543A48[];
void fn_803653A4(void);
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
void fn_803653A4(void) {
    s32 i;
    Ent_803653A4 *e;
    void *p;
    for (i = 0; i < 6; i++) {
        lbl_80543A48[i] = 0;
    }
    e = lbl_804F2C08;
    if (e != NULL) {
        while (e->id != -1) {
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
            if (p != NULL) {
                p = TLobby__sub_80020004(p, 5, e->arg, 0, 0, 0);
            }
            lbl_80543A48[e->id] = (u32)p;
            e++;
        }
    }
}

}
