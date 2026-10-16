#include "types.h"
#include "pso/TObject.h"
#include "pso/TAdBackTxtGC.h"
#include "pso/TAdBackTxtGC.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/TMainTask.h"

extern "C" {

void *__ct__12TAdBackTxtGCFv(void *arg0);
void render__12TAdBackTxtGCFv(void *arg0);
void run_task__12TAdBackTxtGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
s32 set_cached_blend_factor(s32, s32);
s32 restore_saved_depth_alpha_state();
s32 set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

void render__12TAdBackTxtGCFv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x24) == 0) {
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (TMainTask::get_state_flag() != 1) {
block_4:
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 0xA);
        ((TAdBackTxtGC *)arg0)->draw_character_background_frame((s32) *(s32 *)((s8 *)arg0 + 0x1C) / 3, -1);
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 6);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x24) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void run_task__12TAdBackTxtGCFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1C);
    if (temp_r4 >= 0xE) {
        *(s32 *)((s8 *)arg0 + 0x1C) = 0;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (temp_r4 + 1);
}

extern void *__vt__12TAdBackTxtGC[];
extern const f32 lbl_805DDD08;
extern void *TAdBackTxtGC__name;

}
TAdBackTxtGC::~TAdBackTxtGC() {

}
extern "C" {

void *__ct__12TAdBackTxtGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = __vt__12TAdBackTxtGC;
    *(void **)((s8 *)arg0 + 0x0) = TAdBackTxtGC__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = -1;
    *(f32 *)((s8 *)arg0 + 0x20) = lbl_805DDD08;
    *(u32 *)((s8 *)arg0 + 0x24) = 1;
    return arg0;
}

}

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80465490[];
    extern unsigned char lbl_80465430[], lbl_80465440[], lbl_80465450[], lbl_80465460[], lbl_80465470[];
    struct TexName_804DC098 { void *name; s32 a; s32 b; };
    struct TexList_804DC0D4 { TexName_804DC098 *list; s32 n; };
    TexName_804DC098 lbl_804DC098[5] = {
        { lbl_80465430, 0, 0 }, { lbl_80465440, 0, 0 }, { lbl_80465450, 0, 0 },
        { lbl_80465460, 0, 0 }, { lbl_80465470, 0, 0 },
    };
    __declspec(section ".data") TexList_804DC0D4 TAdBackTxtGC_backtext_tex_list = { lbl_804DC098, 5 };
extern u32 TAdBackTxtGC__backtext_texture_list;
void register_texture_f256_backtext(void);
}

extern "C" {

void TLobby__sub_803DA16C(void*);

extern u32 TAdBackTxtGC__backtext_texture_list;

void TAdSinglePlyChrSelectGC::free_singleton_805D65C0() {
    if ((u32) TAdBackTxtGC__backtext_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TAdBackTxtGC__backtext_texture_list);
        TAdBackTxtGC__backtext_texture_list = 0U;
    }
}
void register_texture_f256_backtext(void) { (*(int *)&TAdBackTxtGC__backtext_texture_list) = (int)&TAdBackTxtGC_backtext_tex_list; TLobby__sub_8023E4B4(lbl_80465490, &TAdBackTxtGC_backtext_tex_list); }

}

extern "C" {
extern void *__vt__12TAdBackTxtGC[];
}
