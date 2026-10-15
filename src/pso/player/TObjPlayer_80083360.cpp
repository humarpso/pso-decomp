#include "types.h"

extern "C" {
void free_singleton__10TObjPlayerFv(void);
void init_render_target_singleton__10TObjPlayerFv(void);
void __dl__FPv(void*);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 init_render_target__10TObjPlayerFPv();
s32 reset_lobby_subobject__10TObjPlayerFPv(void*);
extern u32 camera_render_target_singleton;
void update_camera_effect__10TObjPlayerFPv(void *arg0);
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 draw_screen_quad__10TObjPlayerFUiif(s32, s32, f32);
s32 capture_viewport_texture();
s32 TObjPlayer__sub_80084764();
s32 get_camera_flag__10TObjPlayerFv();
s32 TObjPlayer__sub_80084780();
s32 disable_camera_capture_overlay();
s32 TObjPlayer__sub_800847A8();
s32 TObjPlayer__sub_800847CC();
s32 setup_tev_swap__10TObjPlayerFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
extern u8 camera_capture_overlay_alpha;
extern f32 lbl_805D93D0;
void TObjPlayer__sub_80083480(void* p);
void TObjPlayer__sub_800834B0(void);
void *TObjPlayer__sub_800834B4(void *arg0, s16 arg1);
int set_tev_swap_mode__10TObjPlayerFUc(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 get_camera_flag__10TObjPlayerFv(void);
extern s32 lbl_8048E5F4[];

void free_singleton__10TObjPlayerFv(void) {
    if ((u32) camera_render_target_singleton != 0U) {
        reset_lobby_subobject__10TObjPlayerFPv((void*)camera_render_target_singleton);
    }
    if ((u32) camera_render_target_singleton != 0U) {
        __dl__FPv((void*)camera_render_target_singleton);
        camera_render_target_singleton = 0U;
    }
}
void init_render_target_singleton__10TObjPlayerFv(void) {
    u32 temp_r3;
    camera_render_target_singleton = 0U;
    if (get_global_state__14TOKeyMachine01Fv() == 0x21) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        camera_render_target_singleton = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
        }
    }
}
void update_camera_effect__10TObjPlayerFPv(void *arg0) {
    if (!(TObjPlayer__sub_800847CC() & 4)) {
        if (*(s32 *)((s8 *)arg0 + 0x1C) & 1) {
            if (TObjPlayer__sub_800847A8() == 1) {
                restore_full_screen_view__11TCameraCtrlFv();
                begin_effect_render__13TParticleCtrlFv();
                draw_screen_quad__10TObjPlayerFUiif(camera_capture_overlay_alpha << 0x18, 0, lbl_805D93D0);
                end_effect_render__13TParticleCtrlFv();
                TCameraCtrl__sub_80068EF0();
                disable_camera_capture_overlay();
            }
        } else {
            TObjPlayer__sub_80084780();
            capture_viewport_texture();
        }
        if (get_camera_flag__10TObjPlayerFv() != 0) {
            TObjPlayer__sub_80084764();
            setup_tev_swap__10TObjPlayerFv();
        }
    }
}
void TObjPlayer__sub_80083480(void* p) { if (get_camera_flag__10TObjPlayerFv() != 0) { set_tev_swap_mode__10TObjPlayerFUc((void*)0); } }
void TObjPlayer__sub_800834B0(void) {  }
void *TObjPlayer__sub_800834B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048E5F4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}
