#include "types.h"
#include "pso/unk/text_802F0E24.h"
#include "pso/misc/TLobby.h"
#include "pso/TParticleCtrl.h"

struct Obj_802F0E94 { u8 pad[0x42C]; u8 *f42c; };

extern "C" {
void TLobby__sub_803DA16C(void *);
void TLobby__sub_8001FE7C(void *, int);
extern u32 boss7_dermt_slot_table[];
extern void *lbl_805D6950;
extern void *lbl_805D6954;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
extern u8 lbl_80474344[];
extern u8 boss7_common_resource_descriptor[];
void fn_802F0E24(void) {
    s32 i;
    TParticleCtrl::free_heap();
    for (i = 0; i < 7; i++) {
        boss7_dermt_slot_table[i] = 0;
    }
    if (lbl_805D6954 != 0) {
        TLobby__sub_803DA16C(lbl_805D6954);
        lbl_805D6954 = 0;
    }
    TLobby__sub_8001FE7C(lbl_805D6950, 1);
    lbl_805D6950 = 0;
}
}
void load_boss7_common_resources(void) {
    void *p;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 5, boss7_common_resource_descriptor, 0, 0, 0);
    }
    lbl_805D6950 = p;
    lbl_805D6954 = *(void **)(((struct Obj_802F0E94 *)p)->f42c + 0xC);
    TLobby::load_texture_pvm_file((const char *)lbl_80474344, (s32)lbl_805D6954);
    TParticleCtrl::init_heap((void *)0x50000);
}
