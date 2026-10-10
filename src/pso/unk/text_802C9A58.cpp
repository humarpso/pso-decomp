#include "types.h"

extern "C" {
s32 get_bml_model(void *, int);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, int);
extern u8 bm_obj_jungle_nokogiri_resource_descriptor[];
extern s32 seabed_suiso_linked_switch_counts[5];
extern s32 seabed_suiso_switch_counts[5];
extern void *lbl_805D6808;
void load_shared_models__23TObjSeabedSuisoBrakableFv(void);
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

void load_shared_models__23TObjSeabedSuisoBrakableFv(void) {
    void *p;
    s32 i;
    s32 h;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 5, bm_obj_jungle_nokogiri_resource_descriptor, 0, 0, 0);
    }
    lbl_805D6808 = p;
    for (i = 0; i < 5; i++) {
        seabed_suiso_linked_switch_counts[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        seabed_suiso_switch_counts[i] = 0;
    }
    if (p != NULL) {
        h = get_bml_model(p, 3);
        if (h != 0) {
            seabed_suiso_linked_switch_counts[1] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 3);
            seabed_suiso_linked_switch_counts[2] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 4);
            seabed_suiso_linked_switch_counts[3] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 5);
            seabed_suiso_linked_switch_counts[4] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 6);
        }
        h = get_bml_model(lbl_805D6808, 4);
        if (h != 0) {
            seabed_suiso_switch_counts[1] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 3);
            seabed_suiso_switch_counts[2] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 4);
            seabed_suiso_switch_counts[3] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 5);
            seabed_suiso_switch_counts[4] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(h, 6);
        }
    }
}

void TOTrapChainSawEdge__vt15(void) {  }

}
