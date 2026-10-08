#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();
int draw_fading_motion__10TObjPlayerFPv(void *p);
}

extern "C" {

void release_subobjects__10TObjPlayerFPv(u8 *arg0);
void update_both__10TObjPlayerFPv(void* p);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();

void release_subobjects__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) >= 0xB4) {
        TObjPlayer__sub_80052390(0.99f);
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix(arg0 + 0xD4);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xE0));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xCC));
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0x108));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x108));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        sync_player_globals__10TObjPlayerFv();
    }
}

int draw_fading_motion__10TObjPlayerFPv(void *p) {
    u8 *arg0 = (u8 *)p;
    f32 alpha;
    f32 frac;
    s32 t;
    alpha = 1.0f;
    t = M2C_FIELD(arg0, s32 *, 0xE4);
    if (t >= 0xF0) {
        return;
    }
    if (t > 0xA0) {
        alpha = (f32)(0xF0 - t) / 80.0f;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix(arg0 + 0xD4);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xE0));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xA8));
    set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0xEC));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xE8));
    clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0xEC));
    frac = (s32)M2C_FIELD(arg0, f32 *, 0xE8) % 30;
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB4));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xB0), M2C_FIELD(arg0, s32 *, 0xB8), frac);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC0));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC4), frac);
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void update_both__10TObjPlayerFPv(void* p) { draw_fading_motion__10TObjPlayerFPv((void *)(p)); release_subobjects__10TObjPlayerFPv((u8 *)(p)); }

}

typedef struct Obj_8004FD50 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x90 - 0x1C];
    void *items[5];
    u8 pada4[0xEC - 0xA4];
    void *fec;
    u8 padf0[0x108 - 0xF0];
    void *f108;
} Obj_8004FD50;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void update_particle_emitters__11TBoss4Type2FPv(void *);
void play_cue_stream_file(s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
void darkfalz_death_update(u8 *arg0);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void restore_player_cameras();
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
extern u8 lbl_804857F4[];
Obj_8004FD50 *fn_8004FD50(Obj_8004FD50 *arg0, s16 arg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma readonly_strings on
void darkfalz_death_update(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    update_particle_emitters__11TBoss4Type2FPv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) == 0x8C) {
        play_cue_stream_file((s32) "dfdeath.adx");
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    { f32 k = 0.5f; temp_f1 = M2C_FIELD(arg0, f32 *, 0xE8) + k; }
    M2C_FIELD(arg0, f32 *, 0xE8) = temp_f1;
    if (temp_f1 > 149.0f) {
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) 149.0f;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE4) + 1;
    M2C_FIELD(arg0, s32 *, 0xE4) = temp_r0;
    if (temp_r0 >= 0x12C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

Obj_8004FD50 *fn_8004FD50(Obj_8004FD50 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804857F4;
        if (arg0->fec != NULL) {
            init_state_1__8TObjFishFPv(arg0->fec);
            arg0->fec = NULL;
        }
        if (arg0->f108 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f108);
            arg0->f108 = NULL;
        }
        for (i = 0; i < 5; i++) {
            if (arg0->items[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(arg0->items[i]);
                arg0->items[i] = NULL;
            }
        }
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            restore_player_cameras();
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" { extern const f32 lbl_805D8A1C = -0.5f; }
