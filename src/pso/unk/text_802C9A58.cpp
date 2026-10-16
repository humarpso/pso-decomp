#include "types.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"
#include "pso/misc/TOTrapChainSawDamage.h"

extern "C" {
s32 get_bml_model(void *, int);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
extern u8 bm_obj_jungle_nokogiri_resource_descriptor[];
extern s32 seabed_suiso_linked_switch_counts[5];
extern s32 seabed_suiso_switch_counts[5];
extern void *lbl_805D6808;
}

extern "C" {

void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void vfunc_26__14TOTrapChainSawFv(void);
void vfunc_27__14TOTrapChainSawFv(void);
void vfunc_28__14TOTrapChainSawFv(void);
void vfunc_29__14TOTrapChainSawFv(void);
void vfunc_25__14TOTrapChainSawFv(void);
void TOTrapChainSaw__vt14(void);

void TObjSeabedSuisoBrakable::load_shared_models() {
    void *p;
    s32 i;
    s32 h;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
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
            seabed_suiso_linked_switch_counts[1] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(3);
            seabed_suiso_linked_switch_counts[2] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(4);
            seabed_suiso_linked_switch_counts[3] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(5);
            seabed_suiso_linked_switch_counts[4] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(6);
        }
        h = get_bml_model(lbl_805D6808, 4);
        if (h != 0) {
            seabed_suiso_switch_counts[1] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(3);
            seabed_suiso_switch_counts[2] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(4);
            seabed_suiso_switch_counts[3] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(5);
            seabed_suiso_switch_counts[4] = ((TObjSeabedSuisoBrakable *)h)->count_linked_switches(6);
        }
    }
}

void TOTrapChainSawEdge__vt15(void) {  }

}
