#include "types.h"

extern "C" {
s32 load_resource_from_descriptor(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_80466118[];
extern s32 lbl_80466138[];
extern s32 lbl_80466150[];
extern s32 lbl_80466170[];
extern s32 bm_o_door_seabed01_resource_descriptor[];
extern u32 door_labo_bml_resource;
extern u32 lbl_805D6604;
extern u32 lbl_805D6608;
void TLanguage__sub_802A0204(void);
}

extern "C" {

void clamp_light_index__19TODoorFourLightBaseFPv(void *arg0);
void free_chr_select_slots__6TLobbyFv(void);
s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 door_labo_bml_resource;
extern u32 lbl_805D6604;
extern u32 lbl_805D6608;

void free_chr_select_slots__6TLobbyFv(void) {
    if ((u32) lbl_805D6608 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6608);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6608);
        lbl_805D6608 = 0U;
    }
    if ((u32) lbl_805D6604 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6604);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6604);
        lbl_805D6604 = 0U;
    }
    if ((u32) door_labo_bml_resource != 0U) {
        TLobby__sub_8001FE7C(door_labo_bml_resource, 1);
        door_labo_bml_resource = 0U;
    }
}

void TLanguage__sub_802A0204(void) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 28:
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0 != 0) {
            var_r0 = load_resource_from_descriptor(var_r0, (int) (5), (void *) (bm_o_door_seabed01_resource_descriptor), (int) (0), (int) (0), (int) (0));
        }
        door_labo_bml_resource = var_r0;
        lbl_805D6604 = load_gvm_texture_file((void *) (lbl_80466118));
        lbl_805D6608 = load_gvm_texture_file((void *) (lbl_80466138));
        return;
    case 29:
        var_r0_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0_2 != 0) {
            var_r0_2 = load_resource_from_descriptor(var_r0_2, (int) (5), (void *) (bm_o_door_seabed01_resource_descriptor), (int) (0), (int) (0), (int) (0));
        }
        door_labo_bml_resource = var_r0_2;
        lbl_805D6604 = load_gvm_texture_file((void *) (lbl_80466150));
        lbl_805D6608 = load_gvm_texture_file((void *) (lbl_80466170));
        return;
    }
}

void clamp_light_index__19TODoorFourLightBaseFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
        *(s32 *)((s8 *)arg0 + 0x88) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) > 4) {
        *(s32 *)((s8 *)arg0 + 0x88) = 4;
    }
    *(s32 *)((s8 *)arg0 + 0xF8) = (s32) *(s32 *)((s8 *)arg0 + 0x88);
}

}
