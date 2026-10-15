#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void __dl__FPv(void*);
u32 alloc__23TAdSinglePlyChrSelectGCFv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 init_render_target__10TObjPlayerFv();
s32 reset_lobby_subobject__10TObjPlayerFv(void*);
extern u32 camera_render_target_singleton;
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 draw_screen_quad__10TObjPlayerFUllf(s32, s32, f32);
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

void TObjPlayer::free_singleton() {
    if ((u32) camera_render_target_singleton != 0U) {
        reset_lobby_subobject__10TObjPlayerFv((void*)camera_render_target_singleton);
    }
    if ((u32) camera_render_target_singleton != 0U) {
        __dl__FPv((void*)camera_render_target_singleton);
        camera_render_target_singleton = 0U;
    }
}
void TObjPlayer::init_render_target_singleton() {
    u32 temp_r3;
    camera_render_target_singleton = 0U;
    if (get_global_state__14TOKeyMachine01Fv() == 0x21) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv(0x28);
        camera_render_target_singleton = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFv();
        }
    }
}
void TObjPlayer::update_camera_effect() {
    if (!(TObjPlayer__sub_800847CC() & 4)) {
        if (*(s32 *)((s8 *)this + 0x1C) & 1) {
            if (TObjPlayer__sub_800847A8() == 1) {
                restore_full_screen_view__11TCameraCtrlFv();
                begin_effect_render__13TParticleCtrlFv();
                draw_screen_quad__10TObjPlayerFUllf(camera_capture_overlay_alpha << 0x18, 0, lbl_805D93D0);
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
