#include "types.h"

extern "C" {
s32 get_bml_model(void *, int);
void *TLobby__sub_80020004(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, int);
extern u8 lbl_804E0C00[];
extern s32 lbl_80540B30[5];
extern s32 lbl_80540B44[5];
extern void *lbl_805D6808;
void TObjSeabedSuisoBrakable__sub_802C9A58(void);
}

extern "C" {

void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void TOTrapChainSaw__sub_802C9BE8(void);
void TOTrapChainSaw__sub_802C9BEC(void);
void TOTrapChainSaw__sub_802C9BF0(void);
void TOTrapChainSaw__sub_802C9BF4(void);
void set_damage__20TOTrapChainSawDamageFPvi(void* p, s32 v);
void TOTrapChainSaw__vt23(void);
void TOTrapChainSaw__vt14(void);

void TObjSeabedSuisoBrakable__sub_802C9A58(void) {
    void *p;
    s32 i;
    s32 h;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = TLobby__sub_80020004(p, 5, lbl_804E0C00, 0, 0, 0);
    }
    lbl_805D6808 = p;
    for (i = 0; i < 5; i++) {
        lbl_80540B30[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        lbl_80540B44[i] = 0;
    }
    if (p != NULL) {
        h = get_bml_model(p, 3);
        if (h != 0) {
            lbl_80540B30[1] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 3);
            lbl_80540B30[2] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 4);
            lbl_80540B30[3] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 5);
            lbl_80540B30[4] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 6);
        }
        h = get_bml_model(lbl_805D6808, 4);
        if (h != 0) {
            lbl_80540B44[1] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 3);
            lbl_80540B44[2] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 4);
            lbl_80540B44[3] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 5);
            lbl_80540B44[4] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 6);
        }
    }
}

void TOTrapChainSawEdge__vt15(void) {  }

}
