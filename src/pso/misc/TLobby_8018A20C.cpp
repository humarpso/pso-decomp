#include "types.h"

extern "C" {

void dispatch_fish_event__6TLobbyFPv(void* a0);
int get_bml_model(void*, void*);

    extern u32 container_breakup_model_archive;
void dispatch_fish_event__6TLobbyFPv(void* a0) { get_bml_model((void*)(container_breakup_model_archive), a0); }

}

#include "types.h"

extern "C" {
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv();
extern u8 seabed_rare_console_texture_filename[];
extern u8 lbl_80444F48[];
extern u8 fe_obj_con_hahen1_resource_descriptor[];
extern u8 bm_obj_seabed_con_rare_resource_descriptor[];
extern u32 container_breakup_model_archive;
extern u32 lbl_805D5B8C;
void load_console_resources__6TLobbyFv(void);
}

extern "C" {

void free_chr_select_slot__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 container_breakup_model_archive;
extern u32 lbl_805D5B8C;

void free_chr_select_slot__6TLobbyFv(void) {
    if ((u32) lbl_805D5B8C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B8C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B8C);
        lbl_805D5B8C = 0U;
    }
    if ((u32) container_breakup_model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)container_breakup_model_archive, 1);
        container_breakup_model_archive = 0U;
    }
}
void load_console_resources__6TLobbyFv(void) {
    void *p;
    container_breakup_model_archive = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 28:
    case 29:
    case 31:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, bm_obj_seabed_con_rare_resource_descriptor, 0, 0, 0);
        }
        container_breakup_model_archive = (u32)p;
        lbl_805D5B8C = load_gvm_texture_file(seabed_rare_console_texture_filename);
        break;
    case 30:
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, fe_obj_con_hahen1_resource_descriptor, 0, 0, 0);
        }
        container_breakup_model_archive = (u32)p;
        lbl_805D5B8C = load_gvm_texture_file(lbl_80444F48);
        break;
    }
}

}

extern "C" {
    int get_bml_model(void*, void*);
    extern u32 lbl_805D5B78;
void get_container_param(void* a0) { get_bml_model((void*)(lbl_805D5B78), a0); }
}

#include "types.h"

extern "C" {

void free_char_select_resources__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5B78;
extern u32 lbl_805D5B7C;

void free_char_select_resources__6TLobbyFv(void) {
    if ((u32) lbl_805D5B7C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B7C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B7C);
        lbl_805D5B7C = 0U;
    }
    if ((u32) lbl_805D5B78 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B78, 1);
        lbl_805D5B78 = 0U;
    }
}

}
