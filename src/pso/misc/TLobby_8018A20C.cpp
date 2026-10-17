#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

int get_bml_model(void*, void*);

    extern u32 container_breakup_model_archive;
void TLobby::dispatch_fish_event(void* a0) { get_bml_model((void*)(container_breakup_model_archive), a0); }

void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
u32 load_gvm_texture_file(void *);
extern u8 seabed_rare_console_texture_filename[];
extern u8 lbl_80444F48[];
extern u8 fe_obj_con_hahen1_resource_descriptor[];
extern u8 bm_obj_seabed_con_rare_resource_descriptor[];
extern u32 lbl_805D5B8C;
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);

void TLobby::free_chr_select_slot() {
    if ((u32) lbl_805D5B8C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B8C);
        TAdSinglePlyChrSelectGC::safe_free(lbl_805D5B8C);
        lbl_805D5B8C = 0U;
    }
    if ((u32) container_breakup_model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)container_breakup_model_archive, 1);
        container_breakup_model_archive = 0U;
    }
}
void TLobby::load_console_resources() {
    void *p;
    container_breakup_model_archive = 0;
    switch (TOKeyMachine01::get_global_state()) {
    case 28:
    case 29:
    case 31:
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, bm_obj_seabed_con_rare_resource_descriptor, 0, 0, 0);
        }
        container_breakup_model_archive = (u32)p;
        lbl_805D5B8C = load_gvm_texture_file(seabed_rare_console_texture_filename);
        break;
    case 30:
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, fe_obj_con_hahen1_resource_descriptor, 0, 0, 0);
        }
        container_breakup_model_archive = (u32)p;
        lbl_805D5B8C = load_gvm_texture_file(lbl_80444F48);
        break;
    }
}

    extern u32 lbl_805D5B78;
void get_container_param(void* a0) { get_bml_model((void*)(lbl_805D5B78), a0); }

extern u32 lbl_805D5B7C;

void TLobby::free_char_select_resources() {
    if ((u32) lbl_805D5B7C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B7C);
        TAdSinglePlyChrSelectGC::safe_free(lbl_805D5B7C);
        lbl_805D5B7C = 0U;
    }
    if ((u32) lbl_805D5B78 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B78, 1);
        lbl_805D5B78 = 0U;
    }
}

}
