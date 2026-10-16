#include "types.h"
#include "pso/misc/TOKeyMachine01.h"

struct Vec_8029EA4C { f32 x, y, z; };

#include <stddef.h>
struct Stack_8029E960 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
void restore_render_scissor(s32 arg0);
s32 GXSetScissor(s32, s32, s32, s32);
void project_world_to_screen(s32, void *, void *);
extern u16 scene_sora_reflect_active;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD94;
s32 TObjEneRecon__sub_8029EA4C(void *arg0, s32 _w1);
s32 TObjEneRecon__sub_8029EA4C(void *arg0, s32 _w1);
s32 reflect_matrix_in_plane(s32, s32 *);
s32 push_matrix();
extern u16 scene_sora_reflect_active;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;
s32 push_reflect_matrix__12TObjEneReconFPv(u8 *arg0);
}

extern "C" {

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1);
void restore_render_scissor(s32 arg0);
void update_particle_if_active__12TObjEneReconFv(void);
s32 GXSetScissor(s32, s32, s32, s32);
s32 reflect_matrix_in_plane(s32, s32 *);
s32 push_matrix();
s32 pop_matrix();
u32 get_player_by_client_id(u32);
s32 fn_8029E7BC(s32, s32 *);
u32 get_state__10TSceneSoraFPv(void*);
s32 reset_ind_tev_stages__13TParticleCtrlFPv();

extern u16 scene_sora_reflect_active;

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1) {
    s32 sp8[8];
    s32 var_r3;
    u32 temp_r3;

    if (TOKeyMachine01::is_state_active() == 0) {
        return 0;
    }
    if ((u16) scene_sora_reflect_active == 0) {
        return 1;
    }
    temp_r3 = get_player_by_client_id(arg0);
    if (temp_r3 == 0U) {
        return 0;
    }
    if (fn_8029E7BC(temp_r3 + 0x2FC, sp8) == 0) {
        return 0;
    }
    if (arg1 != 0) {
        var_r3 = TObjEneRecon__sub_8029EA4C((void *)(sp8), (s32)(1));
    } else {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        push_matrix();
        reflect_matrix_in_plane(0, sp8);
    }
    return var_r3;
}

extern u16 scene_sora_reflect_active;

s32 push_reflect_matrix__12TObjEneReconFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8029E960, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8029E960, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8029E960, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8029E960, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8029E960, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8029E960, sp1C) == 0x14) ? 1 : -1];
    Stack_8029E960 stack;
    s32 temp_r3;
    if ((u16) scene_sora_reflect_active == 0) {
        return 1;
    }
    if (arg0 == NULL) {
        return 0;
    }
    stack.sp8 = *(f32 *)((s8 *)arg0 + 0);
    stack.spC = *(f32 *)((s8 *)arg0 + 4);
    stack.sp10 = *(f32 *)((s8 *)arg0 + 8);
    stack.sp14 = lbl_805DDD8C;
    stack.sp18 = lbl_805DDD90;
    stack.sp1C = stack.sp14;
    temp_r3 = TObjEneRecon__sub_8029EA4C(arg0, 1);
    if (temp_r3 != 0) {
        push_matrix();
        reflect_matrix_in_plane(0, (s32 *)&stack.sp8);
    }
    return temp_r3;
}

void restore_render_scissor(s32 arg0) {
    if ((u16) scene_sora_reflect_active != 0) {
        pop_matrix();
        if (arg0 != 0) {
            GXSetScissor(0, 0, 0x280, 0x1E0);
        }
    }
}

extern u32 scene_sora_instance;

s32 TObjEneRecon__sub_8029EA4C(void *arg0, s32 _w1) {
    Vec_8029EA4C v;
    if (scene_sora_reflect_active == 0) {
        return 1;
    }
    restore_render_scissor(1);
    project_world_to_screen(0, arg0, &v);
    if (v.y >= lbl_805DDD8C && v.y <= lbl_805DDD94) {
        GXSetScissor((s32)(0), (s32)((u32)v.y), (s32)(0x280), (s32)((u32)(lbl_805DDD94 - v.y)));
        return 1;
    }
    return 0;
}

void update_particle_if_active__12TObjEneReconFv(void) {
    if (((u32) scene_sora_instance != 0U) && (get_state__10TSceneSoraFPv((void*)scene_sora_instance) != 0U)) {
        reset_ind_tev_stages__13TParticleCtrlFPv();
    }
}

}

#include "types.h"

extern "C" {

void notify_scene__12TObjEneReconFi(s32 arg0);
s32 play_particle__13TParticleCtrlFls(u32, s32, s32);

extern u32 scene_sora_instance;

void notify_scene__12TObjEneReconFi(s32 arg0) {
    u32 temp_r31;
    if ((u32) scene_sora_instance != 0U) {
        temp_r31 = get_state__10TSceneSoraFPv((void*)scene_sora_instance);
        if (temp_r31 != 0U) {
            play_particle__13TParticleCtrlFls(temp_r31, 0, arg0);
        }
    }
}

}

#include "types.h"
#include "pso/enemy/TObjEneRecon.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void __dl__FPv(void*);
s32 init_render_target__10TObjPlayerFv();

extern u32 scene_sora_instance;
extern u32 scene_sora_recon_object;

void TObjEneRecon::destroy_instance() {
    scene_sora_instance = 0;
    if (TOKeyMachine01::is_state_active() != 0) {
        if ((u32) scene_sora_recon_object != 0U) {
            ((TObjPlayer *)scene_sora_recon_object)->reset_lobby_subobject();
        }
        if ((u32) scene_sora_recon_object != 0U) {
            __dl__FPv((void*)scene_sora_recon_object);
            scene_sora_recon_object = 0U;
        }
    }
}

extern s32 lbl_805D65F0;
extern u32 scene_sora_instance;
extern u32 scene_sora_recon_object;

void TObjEneRecon::alloc_if_valid_state() {
    u32 temp_r3;

    if (TOKeyMachine01::is_state_active() != 0) {
        scene_sora_instance = 0;
        temp_r3 = ((TAdSinglePlyChrSelectGC *)0x28)->alloc();
        scene_sora_recon_object = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFv();
            lbl_805D65F0 = scene_sora_recon_object + 0x1C;
        }
    }
}

}
