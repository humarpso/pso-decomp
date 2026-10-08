#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void free_singleton__10TObjPlayerFv(void);
void init_render_target_singleton__10TObjPlayerFv(void);
void __dl__FPv(void*);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_render_target__10TObjPlayerFPv();
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);
extern u32 lbl_805D4EE8;
void update_camera_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK draw_screen_quad__10TObjPlayerFUiif(s32, M2C_UNK, f32);
M2C_UNK capture_viewport_texture();
M2C_UNK TObjPlayer__sub_80084764();
s32 get_camera_flag__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80084780();
M2C_UNK TObjPlayer__sub_80084790();
s32 TObjPlayer__sub_800847A8();
s32 TObjPlayer__sub_800847CC();
M2C_UNK setup_tev_swap__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern u8 lbl_805D2910;
extern f32 lbl_805D93D0;
void TObjPlayer__sub_80083480(void* p);
void TObjPlayer__sub_800834B0(void);
void *TObjPlayer__sub_800834B4(void *arg0, s16 arg1);
int set_tev_swap_mode__10TObjPlayerFUc(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 get_camera_flag__10TObjPlayerFv(void);
extern M2C_UNK lbl_8048E5F4[];

void free_singleton__10TObjPlayerFv(void) {
    if ((u32) lbl_805D4EE8 != 0U) {
        reset_lobby_subobject__10TObjPlayerFPv((void*)lbl_805D4EE8);
    }
    if ((u32) lbl_805D4EE8 != 0U) {
        __dl__FPv((void*)lbl_805D4EE8);
        lbl_805D4EE8 = 0U;
    }
}
void init_render_target_singleton__10TObjPlayerFv(void) {
    u32 temp_r3;
    lbl_805D4EE8 = 0U;
    if (get_global_state__14TOKeyMachine01Fv() == 0x21) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        lbl_805D4EE8 = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
        }
    }
}
void update_camera_effect__10TObjPlayerFPv(void *arg0) {
    if (!(TObjPlayer__sub_800847CC() & 4)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) & 1) {
            if (TObjPlayer__sub_800847A8() == 1) {
                restore_full_screen_view__11TCameraCtrlFv();
                begin_effect_render__13TParticleCtrlFv();
                draw_screen_quad__10TObjPlayerFUiif(lbl_805D2910 << 0x18, 0, lbl_805D93D0);
                end_effect_render__13TParticleCtrlFv();
                TCameraCtrl__sub_80068EF0();
                TObjPlayer__sub_80084790();
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5F4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}
