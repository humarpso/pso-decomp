#include "types.h"
#include "pso/unk/TUnk_804B8E18.h"
#include "pso/unk/TUnk_804B8E00.h"

struct Obj_8019978C;
struct Pair_80198F14;
struct RecoveredGlobal_80198DCC_lbl_8050E208;
struct Sys_80198A2C;
struct Vec_80198E84;
struct Vec_80199674;
struct Vec_8019978C;
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void*,void*);
s32 queue_destruction__7TObjectFv(void*);
s32 spawn_particle_effect_with_flags(void*,int,int);
extern Sys_80198A2C gogo_ball_configuration;
extern Vec_80198E84 gogo_ball_sync_state[];
void send_gogo_ball__12TWindowTimerFi(s32);
void TWindowTimer__sub_8019A6F8(void*);
extern RecoveredGlobal_80198DCC_lbl_8050E208 controller_input_state;
void throw_gogo_ball__12TWindowTimerFPvii(u8*,s32,s32);
u8* TWindowTimer__sub_80199410(u8*,u8*);
void __dl__7TObjectFPv(void*);
void* __nw__7TObjectFUl(s32);
extern s32 tl_03;
extern s32 gogo_ball_bml_resource;
extern void* language_lobby_texture_descriptor[];
extern Pair_80198F14 gogo_ball_team_scores[];
int set_timer_value__12TWindowTimerFii(int,int);
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32);
s32 rotate_matrix_y(int,s32);
void TObjPlayer__sub_801994DC(s32,void*,void*,s32,void*,f32);
int TWindowTimer__sub_8019A770(void*);
s16 get_timer_value__12TWindowTimerFi(s32);
f32 xyz_distance(Vec_80199674*,void*);
f32 vector_length(Vec_8019978C*);
void normalize_vector(Vec_8019978C*);
s32 reflect_velocity_off_collision(Obj_8019978C*,Vec_8019978C*,Vec_8019978C*);
void draw_shadow_on_ground(u8*);
extern void* lbl_804B8D94[];
extern void* lbl_804B8DA0[];
}
#define gogo_ball_sync_state (*(Pad_80198A2C *)&gogo_ball_sync_state)

#include "types.h"

struct Vec_80198A2C { f32 x, y, z; };

struct Obj_80198A2C {
    u8 pad0[0x1C];
    Vec_80198A2C pos;
    u8 pad28[0x34 - 0x28];
    s32 rot;
    u8 pad38[0x3C - 0x38];
    void *effect;
    s32 timer;
    s32 counter;
    s32 limit;
    s32 state;
    s32 f50;
    s32 f54;
};

struct Pad_80198A2C { u8 pad0[0x10]; s16 buttons; };

struct Sys_80198A2C { u8 pad0[0x48]; u16 mode; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
void *spawn_particle_effect_with_rotation(void *, void *, int, int);
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 spawn_particle_effect(void *, int);
s32 copy_pos__11TNowLoadingFPv(void *, void *);
s32 play_sound_effect(int, void *, int, int);
extern Vec_80198A2C boss3_volopt_init_vec;
extern Sys_80198A2C gogo_ball_configuration;
void TBoss3Volopt__sub_80198A2C(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_80198A2C(u8 *arg0) {
    Obj_80198A2C *self = (Obj_80198A2C *)arg0;
    s32 state;
    if (self->counter++ >= self->limit) {
        spawn_particle_effect_with_flags(&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags(&self->pos, 0x46, 0x40);
        queue_destruction__7TObjectFv(self);
        return;
    }
    state = self->state;
    if (state == 0) {
        if (self->f50 != 0) {
            if (gogo_ball_sync_state.buttons & (self->f54 != 0 ? 0x10 : 1)) {
                play_sound_effect(0x4002A605, &self->pos, 0, 0);
                play_sound_effect(0x40052D15, &self->pos, 0, 0);
                self->state = 1;
                return;
            }
        } else {
            if (gogo_ball_sync_state.buttons & (self->f54 != 0 ? 0x20 : 2)) {
                play_sound_effect(0x4002A605, &self->pos, 0, 0);
                play_sound_effect(0x40052D15, &self->pos, 0, 0);
                self->state = 1;
                return;
            }
        }
    }
    if (state != 0) {
        if (self->effect == NULL) {
            Vec_80198A2C init = boss3_volopt_init_vec;
            if (gogo_ball_configuration.mode != 6) {
                self->effect = spawn_particle_effect_with_rotation(&self->pos, &init, 0xC0, 2);
            }
        }
        if (self->timer++ >= 1000) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        self->rot += 0x16C;
        if (self->timer <= 0x14) {
            Vec_80198A2C v;
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            v.y += (18.0f);
            spawn_particle_effect(&v, 0x1DB);
        }
        self->pos.y = (0.001f) * (f32)(self->timer * self->timer) + self->pos.y;
        if (self->effect != NULL) {
            copy_pos__11TNowLoadingFPv(self->effect, &self->pos);
        }
    }
}
#pragma pop

}

#undef gogo_ball_sync_state
#define VecCopy__FP3VecPC3Vec ((void (*)(void*,void*))VecCopy__FP3VecPC3Vec)
#define queue_destruction__7TObjectFv ((void (*)(void*))queue_destruction__7TObjectFv)
#define send_gogo_ball__12TWindowTimerFi ((s32 (*)(void*))send_gogo_ball__12TWindowTimerFi)
#define TWindowTimer__sub_8019A6F8 ((s32 (*)(void*))TWindowTimer__sub_8019A6F8)
#define TWindowTimer__sub_80199410 ((s32 (*)(void*,s32))TWindowTimer__sub_80199410)

#include "types.h"

#include <stddef.h>
struct Stack_80198DCC {
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    s8 sp1C;
    u8 trailing_storage[0x3];
};

struct RecoveredGlobal_80198DCC_lbl_8050E208 { s32 value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_80198DCC_lbl_8050E208_size[sizeof(RecoveredGlobal_80198DCC_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_80198CF8_lbl_804B8DE8 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 is_on_current_screen__11TCameraCtrlFv(void *, int);
s32 play_sound_effect(int, void *, int, int);
extern RecoveredGlobal_80198DCC_lbl_8050E208 controller_input_state;
void throw_gogo_ball__12TWindowTimerFPvii(u8 *arg0, s32 arg1, s32 arg2);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804B8DE8[];
u8 *TWindowTimer__sub_80198CF8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5);
}

extern "C" {

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1);
void TWindowTimer__sub_80198D98(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void * __nw__7TObjectFUl(s32);

extern s32 lbl_804B8DE8[];

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B8DE8;
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_03;

typedef char RecoveredGlobal_80198CF8_lbl_804B8DE8_size[sizeof(RecoveredGlobal_80198CF8_lbl_804B8DE8) == 0x18 ? 1 : -1];
u8 *TWindowTimer__sub_80198CF8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    __ct__7TObjectFP7TObject(arg0, arg5);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80198CF8_lbl_804B8DE8 *)&lbl_804B8DE8).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg0 + 0x1C);
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) - (16.0f));
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = arg2;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = arg3;
    *(s32 *)((s8 *)arg0 + 0x54) = arg4;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    return arg0;
}

void TWindowTimer__sub_80198D98(void) {
    void *obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TWindowTimer__sub_80199410(obj, tl_03);
    }
}
void throw_gogo_ball__12TWindowTimerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80198DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80198DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80198DCC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80198DCC, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80198DCC, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80198DCC, sp1C) == 0x14) ? 1 : -1];
    Stack_80198DCC stack;
    TWindowTimer__sub_8019A6F8((void *) (&stack.sp8));
    stack.spC = arg2;
    stack.sp10 = arg1;
    stack.sp14 = *(f32 *)((s8 *)arg0 + 0);
    stack.sp18 = *(f32 *)((s8 *)arg0 + 8);
    if (is_on_current_screen__11TCameraCtrlFv((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (4)) != 0) {
        play_sound_effect((int) (0x4001A311), (void *) (arg0), (int) (0), (int) (0));
        stack.sp1C = 1;
    } else {
        play_sound_effect((int) (0x4002A600), (void *) (arg0), (int) (0), (int) (0));
        stack.sp1C = 0;
    }
    send_gogo_ball__12TWindowTimerFi((void *) (&stack.sp8));
}

}

#undef VecCopy__FP3VecPC3Vec
#undef queue_destruction__7TObjectFv
#undef send_gogo_ball__12TWindowTimerFi
#undef TWindowTimer__sub_8019A6F8
#undef TWindowTimer__sub_80199410

#include "types.h"
struct Vec_80198E84 { f32 x; f32 y; f32 z; s32 w; u8 pad10[2]; s16 f12; };

extern "C" {
void TLobby__sub_8001FE7C(s32, int, void *, f32);
void free_if_valid__10TObjPlayerFl(int);
extern s32 lobby_gvm_texture_handles[];
extern Vec_80198E84 gogo_ball_sync_state[];
extern s32 gogo_ball_bml_resource;
void fn_80198E84(void);
}

extern "C" {

void fn_80198E84(void) {
    s32 off;
    s32 i;
    s32 z;
    gogo_ball_sync_state->f12 = 1;
    gogo_ball_sync_state->x = (63.0f);
    gogo_ball_sync_state->y = (0.0f);
    gogo_ball_sync_state->z = (63.0f);
    gogo_ball_sync_state->w = 0;
    TLobby__sub_8001FE7C(gogo_ball_bml_resource, 1, gogo_ball_sync_state, (63.0f));
    gogo_ball_bml_resource = 0;
    for (i = 0; i < 9; i++) {
        free_if_valid__10TObjPlayerFl(lobby_gvm_texture_handles[i]);
        lobby_gvm_texture_handles[i] = 0;
    }
}

}

#define gogo_ball_sync_state (*(Cfg_80198F14 *)&gogo_ball_sync_state)
#define gogo_ball_bml_resource (*(void* *)&gogo_ball_bml_resource)
#define language_lobby_texture_descriptor (*(u8 (*)[1])&language_lobby_texture_descriptor)

#include "types.h"
struct Cfg_80198F14 { f32 f0; f32 f4; f32 f8; s32 fC; u8 pad10[2]; s16 f12; u8 pad14[4]; s8 f18; };

struct Pair_80198F14 { s32 a; s32 b; };

extern "C" {
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
s32 load_gvm_texture_file(char *);
extern char lbl_80446088[];
extern char lbl_80446098[];
extern char lbl_804460A8[];
extern char lbl_804460B8[];
extern char lbl_804460C8[];
extern char lbl_804460E0[];
extern char lbl_804460FC[];
extern char lbl_8044610C[];
extern char lbl_80446124[];
extern s32 lobby_gvm_texture_handles[];
extern Pair_80198F14 gogo_ball_team_scores[];
void load_lobby_textures__9TLanguageFv(void);
}

extern "C" {

void load_lobby_textures__9TLanguageFv(void) {
    Pair_80198F14 *p = gogo_ball_team_scores;
    Cfg_80198F14 *c = &gogo_ball_sync_state;
    void *obj;
    c->f12 = 1;
    c->f0 = (63.0f);
    c->f4 = (0.0f);
    c->f8 = (63.0f);
    c->fC = 0;
    c->f18 = 0;
    p->a = 0;
    p->b = 0;
    obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (obj != 0) {
        obj = load_resource_from_descriptor(obj, 5, language_lobby_texture_descriptor, 0, 0, 0);
    }
    gogo_ball_bml_resource = obj;
    lobby_gvm_texture_handles[0] = load_gvm_texture_file(lbl_80446088);
    lobby_gvm_texture_handles[1] = load_gvm_texture_file(lbl_80446098);
    lobby_gvm_texture_handles[2] = load_gvm_texture_file(lbl_804460A8);
    lobby_gvm_texture_handles[3] = load_gvm_texture_file(lbl_804460B8);
    lobby_gvm_texture_handles[4] = load_gvm_texture_file(lbl_804460C8);
    lobby_gvm_texture_handles[5] = load_gvm_texture_file(lbl_804460E0);
    lobby_gvm_texture_handles[6] = load_gvm_texture_file(lbl_804460FC);
    lobby_gvm_texture_handles[7] = load_gvm_texture_file(lbl_8044610C);
    lobby_gvm_texture_handles[8] = load_gvm_texture_file(lbl_80446124);
}

}

#undef gogo_ball_sync_state
#undef gogo_ball_bml_resource
#undef language_lobby_texture_descriptor
#define gogo_ball_configuration (*(u8 (*)[1])&gogo_ball_configuration)
#define gogo_ball_sync_state (*(RecoveredGlobal_80199470_lbl_8050DDAC *)&gogo_ball_sync_state)
#define controller_input_state (*(s32 (*)[1])&controller_input_state)
#define __nw__7TObjectFUl ((void* (*)(int))__nw__7TObjectFUl)
#define tl_03 (*(void* *)&tl_03)
#define set_timer_value__12TWindowTimerFii ((void (*)(s32,s32))set_timer_value__12TWindowTimerFii)
#define bswap_6x79_gogo_ball__12TWindowTimerFi ((s32 (*)(void))bswap_6x79_gogo_ball__12TWindowTimerFi)
#define TWindowTimer__sub_8019A770 ((void (*)(void))TWindowTimer__sub_8019A770)
#define get_timer_value__12TWindowTimerFi ((s16 (*)(int))get_timer_value__12TWindowTimerFi)

#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_C { u8 bytes[0xc]; };

struct RecoveredGlobal_80199410_lbl_804B8E00 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80199410_lbl_804B8E00_size[sizeof(RecoveredGlobal_80199410_lbl_804B8E00) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80199470_lbl_8050DDAC {
    s32 value;
    u8 remaining[0x18];
};

struct G_80199078 { u8 pad[0x10]; s16 flags; };

struct Fx_801994DC {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;
    s32 f;
    u32 g;
    void *h;
};

struct Col_801994DC { f32 r, g, b, a; };

struct Ang_801994DC { s32 x, y, z; };

extern "C" {
void copy_state__12TWindowTimerFPvPv(u8 *arg0, u8 *arg1);
s32 get_internet_beat__6TLobbyFv(void);
void __ct__7TObjectFP7TObject(void *, void *);
void create_timer__11TWindowCtrlFv(void);
extern s32 lbl_804B8E00[];
u8 *TWindowTimer__sub_80199410(u8 *arg0, u8 *arg1);
void handle_6x79_gogo_ball(u8 *arg0);
void clear_status_flags__12TWindowTimerFv(void);
s32 direction_to_rotation_xz(void *, void *, void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 draw_shadow_quad__10TObjPlayerFll(void *, int, int);
s32 rotate_matrix_y(int, s32);
s32 rotate_matrix_z(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 set_chunk_material_color(void *);
extern const f32 chunk_material_color_half_alpha_f32[];
extern u32 blob_shadow_texture_list;
void TObjPlayer__sub_801994DC(s32 arg0, void *arg1, void *arg2, s32 arg3, void *arg4, f32 farg0);
}

extern "C" {

void *dt__13TUnk_804B8E00Fs(void *arg0, s16 arg1);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_804B8E00[];

void clear_status_flags__12TWindowTimerFv(void) {
    (*(G_80199078 *)&gogo_ball_sync_state).flags &= ~1;
    (*(G_80199078 *)&gogo_ball_sync_state).flags &= ~2;
    (*(G_80199078 *)&gogo_ball_sync_state).flags &= ~0x10;
    (*(G_80199078 *)&gogo_ball_sync_state).flags &= ~0x20;
}

}

extern "C" {

struct Tbl_801990B4 {
    struct { u8 e[10][0x54]; } s;
    u8 pad348[0x384 - 0x348];
    u8 f384[0xC];
    u8 f390[0xC];
};

f32 fabs_float(f32);
s32 get_internet_beat__6TLobbyFv(void);
u8 *TWindowTimer__sub_8019886C(void *, void *, s32, s32, s32, void *);
u8 *TWindowTimer__sub_801988E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void copy_state__12TWindowTimerFPvPv(u8 *arg0, u8 *arg1);
u8 *TWindowTimer__sub_8019A574(u8 *arg0);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 is_on_current_screen__11TCameraCtrlFv(void *, int);
extern void *tl_04;

extern "C" u8 lbl_80445FF0[];
extern "C" u8 lbl_80446000[];
extern "C" u8 lbl_80446018[];
extern "C" u8 lbl_80446028[];
extern "C" u8 lbl_80446038[];
extern "C" u8 lbl_80446050[];
extern "C" u8 biri_ball_motion_names[];
void *lbl_804B8A10[210] = {
    (void *)0xbf000000, (void *)0x3f600000, (void *)0x0, (void *)0x40600000,
    (void *)0x40200000, (void *)0x8d480ff, (void *)0x0, (void *)0x41a00000,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xc3770000,
    (void *)0x0, (void *)0x0, (void *)0x43770000, (void *)0x0,
    (void *)0x0, (void *)0x41f00000, (void *)0x60000, (void *)0x41000000,
    (void *)0x40400000, (void *)0xbf000000, (void *)0x3f600000, (void *)0x0,
    (void *)0x40600000, (void *)0x40200000, (void *)0x8d48000, (void *)0xff0000,
    (void *)0x41200000, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xc3770000, (void *)0x0, (void *)0x0, (void *)0x43770000,
    (void *)0x0, (void *)0x0, (void *)0x41f00000, (void *)0x20000,
    (void *)0x41000000, (void *)0x40400000, (void *)0xbdcccccd, (void *)0x3f000000,
    (void *)0x0, (void *)0x40133333, (void *)0x40133333, (void *)0x8d480ff,
    (void *)0x0, (void *)0x41200000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0xc3770000, (void *)0x0, (void *)0x0,
    (void *)0x43770000, (void *)0x0, (void *)0x0, (void *)0x41f00000,
    (void *)0x30000, (void *)0x40400000, (void *)0x40600000, (void *)0xbf000000,
    (void *)0x3f600000, (void *)0x0, (void *)0x40600000, (void *)0x40200000,
    (void *)0x8d48000, (void *)0xff0000, (void *)0x41200000, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xc3770000, (void *)0x0,
    (void *)0x0, (void *)0x43770000, (void *)0x0, (void *)0x0,
    (void *)0x41f00000, (void *)0x10000, (void *)0x41000000, (void *)0x40400000,
    (void *)0xbf000000, (void *)0x3f600000, (void *)0x0, (void *)0x40600000,
    (void *)0x40200000, (void *)0x8d480ff, (void *)0xff000000, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xc3770000,
    (void *)0x0, (void *)0x0, (void *)0x43770000, (void *)0x0,
    (void *)0x0, (void *)0x41f00000, (void *)0x60000, (void *)0x41000000,
    (void *)0x40400000, (void *)0xbf000000, (void *)0x3f600000, (void *)0x0,
    (void *)0x40600000, (void *)0x40200000, (void *)0x8d48000, (void *)0xff0000,
    (void *)0x41c80000, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xc3770000, (void *)0x0, (void *)0x0, (void *)0x43770000,
    (void *)0x0, (void *)0x0, (void *)0x41f00000, (void *)0x0,
    (void *)0x41000000, (void *)0x40400000, (void *)0xbf000000, (void *)0x3f600000,
    (void *)0x0, (void *)0x40600000, (void *)0x40200000, (void *)0x8d480ff,
    (void *)0xff000000, (void *)0x41200000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0xc3770000, (void *)0x0, (void *)0x0,
    (void *)0x43770000, (void *)0x0, (void *)0x0, (void *)0x41f00000,
    (void *)0x10000, (void *)0x41000000, (void *)0x40400000, (void *)0xbdcccccd,
    (void *)0x3f000000, (void *)0x0, (void *)0x40133333, (void *)0x40133333,
    (void *)0x8d480ff, (void *)0x0, (void *)0x41200000, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xc3770000, (void *)0x0,
    (void *)0x0, (void *)0x43770000, (void *)0x0, (void *)0x0,
    (void *)0x41f00000, (void *)0x30000, (void *)0x40400000, (void *)0x40600000,
    (void *)0xbf000000, (void *)0x3f600000, (void *)0x0, (void *)0x40600000,
    (void *)0x40200000, (void *)0x8d480ff, (void *)0xff000000, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xc3770000,
    (void *)0x0, (void *)0x0, (void *)0x43770000, (void *)0x0,
    (void *)0x0, (void *)0x41f00000, (void *)0x20000, (void *)0x41000000,
    (void *)0x40400000, (void *)0xbf000000, (void *)0x3f600000, (void *)0x0,
    (void *)0x40600000, (void *)0x40200000, (void *)0x8d480ff, (void *)0xff000000,
    (void *)0x41200000, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xc3770000, (void *)0x0, (void *)0x0, (void *)0x43770000,
    (void *)0x0, (void *)0x0, (void *)0x41f00000, (void *)0x0,
    (void *)0x41000000, (void *)0x40400000,
};
void *biri_ball_model_names[6] = {
    (void *)&lbl_80445FF0, (void *)&lbl_80446000, (void *)&lbl_80446018, (void *)&lbl_80446028,
    (void *)&lbl_80446038, (void *)0x0,
};
void *language_lobby_texture_descriptor[4] = {
    (void *)&lbl_80446050, (void *)&biri_ball_model_names, (void *)&biri_ball_motion_names, (void *)0x50000,
};
void *lbl_804B8D80[5] = {
    (void *)0x50005, (void *)0x0, (void *)0x0, (void *)0xff00ff,
    (void *)0x0,
};
void *lbl_804B8D94[3] = {
    (void *)0x43fa0000, (void *)0x41a00000, (void *)0x0,
};
void *lbl_804B8DA0[3] = {
    (void *)0xc3fa0000, (void *)0x41a00000, (void *)0x0,
};

struct E54_801990B4 { u8 b[0x54]; };

void TWindowTimer__sub_801990B4(u8 *arg0) {
    u8 *pad;
    s32 m;
    s32 r;
    s32 idx;
    void *o;

    pad = (u8 *)controller_input_state + 0x20;
    if (is_on_current_screen__11TCameraCtrlFv(pad, 0x10000) != 0 && TWindowShortListCtrl__check_controller_button(pad, 0x400) != 0) {
        set_timer_value__12TWindowTimerFii(1, 0);
        set_timer_value__12TWindowTimerFii(0, 0);
    }
    if (get_timer_value__12TWindowTimerFi(1) >= 999) {
        set_timer_value__12TWindowTimerFii(1, 0);
    } else if (get_timer_value__12TWindowTimerFi(0) >= 999) {
        set_timer_value__12TWindowTimerFii(0, 0);
    }
    m = get_internet_beat__6TLobbyFv();
    r = (s32)fabs_float((f32)(m - *(s32 *)((s8 *)arg0 + 0x1C)));
    if (r == 1 || r == 999) {
        *(s16 *)((s8 *)(&gogo_ball_sync_state.value) + 0x12) = 1;
        idx = m % 10;
        if (idx >= 10) {
            idx = 9;
        } else if (idx < 0) {
            idx = 0;
        }
        copy_state__12TWindowTimerFPvPv(gogo_ball_configuration, ((E54_801990B4 *)lbl_804B8A10)[idx].b);
        if ((o = __nw__7TObjectFUl(0x3A4)) != NULL) {
            ((u8 *(*)(void *, void *))TWindowTimer__sub_8019A574)(o, tl_03);
        }
        if ((o = __nw__7TObjectFUl(0x44)) != NULL) {
            TWindowTimer__sub_801988E8((u8 *)o, gogo_ball_configuration + 0x38, 1, *(s16 *)((s8 *)gogo_ball_configuration + 0x14), (u8 *)tl_04);
        }
        if ((o = __nw__7TObjectFUl(0x44)) != NULL) {
            TWindowTimer__sub_801988E8((u8 *)o, gogo_ball_configuration + 0x2C, 0, *(s16 *)((s8 *)gogo_ball_configuration + 0x14), (u8 *)tl_04);
        }
        if ((o = __nw__7TObjectFUl(0x44)) != NULL) {
            TWindowTimer__sub_8019886C(o, (void *)lbl_804B8D94, 1, 1, *(s16 *)((s8 *)gogo_ball_configuration + 0x14), tl_04);
        }
        if ((o = __nw__7TObjectFUl(0x44)) != NULL) {
            TWindowTimer__sub_8019886C(o, (void *)lbl_804B8DA0, 0, 1, *(s16 *)((s8 *)gogo_ball_configuration + 0x14), tl_04);
        }
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = m;
}

}

extern "C" {
void copy_state__12TWindowTimerFPvPv(u8 *arg0, u8 *arg1) {
    *(f32 *)((s8 *)arg0 + 0) = (f32) *(f32 *)((s8 *)arg1 + 0);
    *(f32 *)((s8 *)arg0 + 4) = (f32) *(f32 *)((s8 *)arg1 + 4);
    *(f32 *)((s8 *)arg0 + 8) = (f32) *(f32 *)((s8 *)arg1 + 8);
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) *(f32 *)((s8 *)arg1 + 0xC);
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) *(f32 *)((s8 *)arg1 + 0x10);
    *(s16 *)((s8 *)arg0 + 0x14) = (s16) *(s16 *)((s8 *)arg1 + 0x14);
    *(u8 *)((s8 *)arg0 + 0x16) = (u8) *(u8 *)((s8 *)arg1 + 0x16);
    *(u8 *)((s8 *)arg0 + 0x17) = (u8) *(u8 *)((s8 *)arg1 + 0x17);
    *(u8 *)((s8 *)arg0 + 0x18) = (u8) *(u8 *)((s8 *)arg1 + 0x18);
    *(u8 *)((s8 *)arg0 + 0x19) = (u8) *(u8 *)((s8 *)arg1 + 0x19);
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) *(f32 *)((s8 *)arg1 + 0x1C);
    *(ByteBlock_C *)((s32) arg0 + 0x20) = *(const ByteBlock_C *)((s32) arg1 + 0x20);
    *(ByteBlock_C *)((s32) arg0 + 0x2C) = *(const ByteBlock_C *)((s32) arg1 + 0x2C);
    *(ByteBlock_C *)((s32) arg0 + 0x38) = *(const ByteBlock_C *)((s32) arg1 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) *(f32 *)((s8 *)arg1 + 0x44);
    *(u16 *)((s8 *)arg0 + 0x48) = (u16) *(u16 *)((s8 *)arg1 + 0x48);
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) *(f32 *)((s8 *)arg1 + 0x4C);
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) *(f32 *)((s8 *)arg1 + 0x50);
}

void *TUnk_804B8E00::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B8E00;
        TWindowTimer__sub_8019A770();
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
u8 *TWindowTimer__sub_80199410(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80199410_lbl_804B8E00 *)&lbl_804B8E00).value;
    *(s32 *)((s8 *)arg0 + 0x1C) = get_internet_beat__6TLobbyFv();
    create_timer__11TWindowCtrlFv();
    set_timer_value__12TWindowTimerFii(1, 0);
    set_timer_value__12TWindowTimerFii(0, 0);
    return arg0;
}
typedef char RecoveredGlobal_80199470_lbl_8050DDAC_size[sizeof(RecoveredGlobal_80199470_lbl_8050DDAC) == 0x1C ? 1 : -1];
void handle_6x79_gogo_ball(u8 *arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi();
    *(s16 *)((s8 *)(&gogo_ball_sync_state.value) + 0x12) = 0;
    *(f32 *)((s8 *)(&gogo_ball_sync_state.value) + 0) = (f32) *(f32 *)((s8 *)arg0 + 0xC);
    *(f32 *)((s8 *)(&gogo_ball_sync_state.value) + 4) = (f32) (0.0f);
    *(f32 *)((s8 *)(&gogo_ball_sync_state.value) + 8) = (f32) *(f32 *)((s8 *)arg0 + 0x10);
    *(s32 *)((s8 *)(&gogo_ball_sync_state.value) + 0xC) = (s32) *(s32 *)((s8 *)arg0 + 8);
    *(u8 *)((s8 *)(&gogo_ball_sync_state.value) + 0x18) = (u8) *(u8 *)((s8 *)arg0 + 0x14);
    *(s32 *)((s8 *)(&gogo_ball_sync_state.value) + 0x14) = (s32) *(s32 *)((s8 *)arg0 + 4);
}
void TObjPlayer__sub_801994DC(s32 arg0, void *arg1, void *arg2, s32 arg3, void *arg4, f32 farg0) {
    Ang_801994DC ang;
    Col_801994DC col;
    Fx_801994DC fx;
    if (blob_shadow_texture_list == 0) {
        return;
    }
    direction_to_rotation_xz(arg2, &ang.x, &ang.z);
    push_matrix();
    post_translate_matrix(arg1);
    translate_matrix(0, 0.0f, 0.3f, 0.0f);
    rotate_matrix_z(0, ang.z);
    rotate_matrix_x(0, ang.x);
    rotate_matrix_y(0, arg3);
    if (arg4 != NULL) {
        scale_current_matrix(arg4);
    }
    rotate_matrix_x(0, -0x4000);
    fx.a = -5.0f;
    fx.b = 0.0f;
    fx.c = 0.0f;
    fx.d = 1.0f;
    fx.e = 1.0f;
    fx.f = 0;
    fx.g = blob_shadow_texture_list;
    fx.h = lbl_804B8D80;
    col.r = farg0;
    col.g = 1.0f;
    col.b = 1.0f;
    col.a = 1.0f;
    set_chunk_material_color(&col);
    begin_effect_render__13TParticleCtrlFv();
    draw_shadow_quad__10TObjPlayerFll(&fx, 0, 0x22);
    fx.a = 0.0f;
    fx.b = 0.0f;
    draw_shadow_quad__10TObjPlayerFll(&fx, 0, 0x26);
    fx.a = -5.0f;
    fx.b = -5.0f;
    draw_shadow_quad__10TObjPlayerFll(&fx, 0, 0x2A);
    fx.a = 0.0f;
    fx.b = -5.0f;
    draw_shadow_quad__10TObjPlayerFll(&fx, 0, 0x2E);
    end_effect_render__13TParticleCtrlFv();
    set_chunk_material_color((void *)chunk_material_color_half_alpha_f32);
    pop_matrix();
}

}

#undef gogo_ball_configuration
#undef gogo_ball_sync_state
#undef controller_input_state
#undef __nw__7TObjectFUl
#undef tl_03
#undef set_timer_value__12TWindowTimerFii
#undef bswap_6x79_gogo_ball__12TWindowTimerFi
#undef TWindowTimer__sub_8019A770
#undef get_timer_value__12TWindowTimerFi
#define TObjPlayer__sub_801994DC ((void (*)(void*,Vec_80199674*,Vec_80199674*,s32,Vec_80199674*,f32))TObjPlayer__sub_801994DC)

extern "C" {

struct Vec_80199674 { f32 x, y, z; };
struct Seg_80199674 { Vec_80199674 a; Vec_80199674 b; };
struct Hit_80199674 { u32 f0; Seg_80199674 *seg; };

s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
Hit_80199674 *csnVectorUnder(void *, void *, s32);
f32 xyz_distance(Vec_80199674 *, void *);
extern u8 saved_model_draw_color[];
extern u8 model_material_color[];

#pragma push
#pragma fp_contract on
void draw_shadow_on_ground(u8 *arg0) {
    Hit_80199674 *hit;
    f32 t;
    f32 k;
    Vec_80199674 scale;

    hit = csnVectorUnder(arg0 + 0x38, arg0 + 0x120, 0x15);
    if (hit != 0) {
        Seg_80199674 *src = hit->seg;
        Seg_80199674 seg;
        seg.a.x = src->a.x;
        seg.a.y = src->a.y;
        seg.a.z = src->a.z;
        seg.b.x = src->b.x;
        seg.b.y = src->b.y;
        seg.b.z = src->b.z;
        t = 0.2f / (1.0f + xyz_distance(&seg.a, arg0 + 0x38));
        f32 s = 0.85f + t;
        scale.x = s;
        scale.y = s;
        scale.z = s;
        copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
        k = 2.0f * t + 0.5f;
        if (k >= 1.0f) {
            k = 1.0f;
        }
        TObjPlayer__sub_801994DC(arg0, &seg.a, &seg.b, 0, &scale, k);
        copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
    }
}
#pragma pop

}

#undef TObjPlayer__sub_801994DC
#define VecCopy__FP3VecPC3Vec ((void (*)(Vec_8019978C*,Vec_8019978C*))VecCopy__FP3VecPC3Vec)

#include "types.h"
struct Vec_8019978C { f32 x, y, z; };

struct Tri_8019978C {
    Vec_8019978C p;
    Vec_8019978C n;
};

struct Hit_8019978C {
    u8 pad0[4];
    Tri_8019978C *tri;
};

struct Obj_8019978C {
    u8 pad0[0x340];
    f32 f340;
    u8 pad344[0x394 - 0x344];
    f32 f394;
};

extern "C" {
Hit_8019978C *csnVector(Vec_8019978C *, Vec_8019978C *, s32);
f32 vec3_dot(Vec_8019978C *, Vec_8019978C *);
f32 vector_length(Vec_8019978C *);
void normalize_vector(Vec_8019978C *);
s32 reflect_velocity_off_collision(Obj_8019978C *o, Vec_8019978C *p, Vec_8019978C *v);
}

extern "C" {

#pragma push
#pragma fp_contract on
s32 reflect_velocity_off_collision(Obj_8019978C *o, Vec_8019978C *p, Vec_8019978C *v) {
    Vec_8019978C end;
    Vec_8019978C dir;
    Vec_8019978C a;
    Vec_8019978C r;
    Vec_8019978C q;
    Vec_8019978C s;
    Hit_8019978C *hit;
    Tri_8019978C *tri;
    f32 len;
    f32 d;
    f32 px, py, pz, nx, ny, nz;
    end.x = p->x + v->x;
    end.y = p->y + v->y;
    end.z = p->z + v->z;
    VecCopy__FP3VecPC3Vec(&dir, v);
    len = vector_length(&dir);
    if ((0.0f) != len) {
        normalize_vector(&dir);
        VecCopy__FP3VecPC3Vec(&a, p);
        a.x -= (3.0f) * (dir.x * len);
        a.y -= (3.0f) * (dir.y * len);
        a.z -= (3.0f) * (dir.z * len);
    } else {
        return 0;
    }
    hit = csnVector(&a, &end, 0x17EF);
    if (hit != NULL) {
    tri = hit->tri;
    px = tri->p.x;
    py = tri->p.y;
    pz = tri->p.z;
    nx = tri->n.x;
    ny = tri->n.y;
    nz = tri->n.z;
    r.x = v->x;
    r.y = v->y;
    r.z = v->z;
    d = (2.0f) * vec3_dot(&r, &tri->n);
    r.x -= d * nx;
    r.y -= d * ny;
    r.z -= d * nz;
    q.x = px - p->x;
    q.z = pz - p->z;
    q.y = (0.0f);
    vector_length(&q);
    v->x = r.x * o->f340;
    v->z = r.z * o->f340;
    normalize_vector(&r);
    o->f394 *= o->f340;
    v->y = r.y * o->f394;
    s.x = v->x;
    s.z = v->z;
    s.y = o->f394;
    if (vector_length(&s) < (1.0f) - o->f340) {
        v->x = (0.0f);
        v->y = (0.0f);
        v->z = (0.0f);
    }
    p->x += v->x;
    p->z += v->z;
    p->y = (0.001f) * r.y + py;
    return 1;
    }
    return 0;
}
#pragma pop

}

#undef VecCopy__FP3VecPC3Vec
#define VecCopy__FP3VecPC3Vec ((void (*)(void*,void*))VecCopy__FP3VecPC3Vec)
#define gogo_ball_configuration (*(Glob_80199A44 *)&gogo_ball_configuration)
#define gogo_ball_bml_resource (*(void* *)&gogo_ball_bml_resource)
#define rotate_matrix_y ((s32 (*)(int,int))rotate_matrix_y)
#define vector_length ((f32 (*)(void*))vector_length)
#define normalize_vector ((s32 (*)(void*))normalize_vector)
#define draw_shadow_on_ground ((s32 (*)(void*))draw_shadow_on_ground)

extern "C" {

struct Vec_80199A44 { f32 x, y, z; };
struct Color_80199A44 { f32 a, r, g, b; };
struct Glob_80199A44 { u8 pad[0x1C]; f32 scale; u8 pad20[0x28]; u16 kind; };

s32 get_bml_model(void *, s32);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 set_cull_none__8TObjFishFv();
s32 set_cull_mode_front__8TObjFishFv();
s32 set_cull_back__8TObjFishFv();
void direction_to_rotation_yx(void *, void *, void *);
s32 approach_angle_limited(int, int, int);
s32 matrix_mult_vec(int, void *, void *);
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_about_axis(int, void *, int);
s32 translate_matrix_vec3(int, void *);
f32 vec_squared_length(void *);
s32 push_matrix_from(void *);
void pop_matrices(s32);
s32 set_global_param__8TObjFishFl(s32);
void set_chunk_material_override_pair(s32, s32);
s32 set_chunk_material_color(void *);
s32 draw_chunk_object(s32);
extern Color_80199A44 fish_draw_color[];
extern const f32 chunk_material_color_half_alpha_f32[];
extern s32 lobby_gvm_texture_handles[];
extern u8 saved_model_draw_color[];
extern u8 identity_matrix[];
extern u8 model_material_color[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;

#define F(t, o) (*(t *)((s8 *)(arg0) + (o)))
extern const f32 lbl_805DBF40;
void draw_model__8TObjFishFPv(u8 *arg0) {
    Vec_80199A44 dir;
    Color_80199A44 color = fish_draw_color[0];
    Vec_80199A44 pos;
    f32 len;
    f32 rate;
    s32 step;

    VecCopy__FP3VecPC3Vec(&pos, arg0 + 0x38);
    pos.y += gogo_ball_configuration.scale - (2.0f * gogo_ball_configuration.scale) / 10.0f;
    color.a = (F(s32, 0x358) != 0) ? 0.0f : -0.75f;
    VecCopy__FP3VecPC3Vec(&dir, arg0 + 0x344);
    dir.y = 0.0f;
    len = vector_length(&dir);
    direction_to_rotation_yx(&dir, arg0 + 0x60, arg0 + 0x64);
    F(s32, 0x334) = (u16)F(s32, 0x334);
    F(s32, 0x60) = (u16)F(s32, 0x60);
    if (0.0f != len) {
        normalize_vector(&dir);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, &dir);
    } else {
        VecCopy__FP3VecPC3Vec(&dir, arg0 + 0x44);
    }
    push_matrix_from(identity_matrix);
    rotate_matrix_y(0, 0x4000);
    matrix_mult_vec(0, &dir, &dir);
    pop_matrices(1);
    lbl_805D5660 = model_render_flags;
    copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
    lbl_805D5664 = chunk_polygon_flags_and_mask;
    lbl_805D5668 = chunk_polygon_flags_or_mask;
    model_render_flags |= 0x821;
    set_chunk_material_override_pair(-1, 0x800);
    rate = (s32)(182.04445f * (4096.0f * len));
    if (0.0f != rate) {
        step = rate;
        F(s32, 0x334) = approach_angle_limited(F(s32, 0x334), F(s32, 0x60), step);
        F(s32, 0x338) = approach_angle_limited(F(s32, 0x338), F(s32, 0x5C), step);
    }
    F(s32, 0x5C) += (s32)(182.04445f * (lbl_805DBF40 * len));
    push_matrix_from(0);
    translate_matrix_vec3(0, &pos);
    rate = 0.15f * gogo_ball_configuration.scale;
    scale_matrix(0, rate, rate, rate);
    set_chunk_material_color(&color);
    if (vec_squared_length(&dir)) {
        rotate_matrix_about_axis(0, &dir, F(s32, 0x338));
    }
    rotate_matrix_y(0, F(s32, 0x334));
    if (lobby_gvm_texture_handles != 0 && gogo_ball_bml_resource != 0) {
        switch (gogo_ball_configuration.kind) {
        case 0:
            set_global_param__8TObjFishFl(lobby_gvm_texture_handles[0]);
            set_cull_back__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 3));
            set_cull_mode_front__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 3));
            set_cull_none__8TObjFishFv();
            break;
        case 1:
            set_global_param__8TObjFishFl(lobby_gvm_texture_handles[1]);
            set_cull_back__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_mode_front__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_none__8TObjFishFv();
            break;
        case 2:
            set_global_param__8TObjFishFl(lobby_gvm_texture_handles[2]);
            set_cull_back__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_mode_front__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_none__8TObjFishFv();
            break;
        case 3:
            set_global_param__8TObjFishFl(lobby_gvm_texture_handles[3]);
            set_cull_back__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_mode_front__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 0));
            set_cull_none__8TObjFishFv();
            break;
        case 6:
            set_global_param__8TObjFishFl(lobby_gvm_texture_handles[6]);
            set_cull_back__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 2));
            set_cull_mode_front__8TObjFishFv();
            draw_chunk_object(get_bml_model(gogo_ball_bml_resource, 2));
            set_cull_none__8TObjFishFv();
            break;
        }
    }
    set_chunk_material_color((void *)chunk_material_color_half_alpha_f32);
    pop_matrices(1);
    chunk_polygon_flags_and_mask = lbl_805D5664;
    chunk_polygon_flags_or_mask = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
    model_render_flags = lbl_805D5660;
    draw_shadow_on_ground(arg0);
}

}

#undef VecCopy__FP3VecPC3Vec
#undef gogo_ball_configuration
#undef gogo_ball_bml_resource
#undef rotate_matrix_y
#undef vector_length
#undef normalize_vector
#undef draw_shadow_on_ground
#define VecCopy__FP3VecPC3Vec ((void (*)(void*,void*))VecCopy__FP3VecPC3Vec)
#define queue_destruction__7TObjectFv ((void (*)(void*))queue_destruction__7TObjectFv)
#define spawn_particle_effect_with_flags ((void (*)(void*,int,int))spawn_particle_effect_with_flags)
#define gogo_ball_configuration (*(RecoveredGlobal_8019A574_lbl_8050DD58 *)&gogo_ball_configuration)
#define gogo_ball_sync_state (*(s32 (*)[1])&gogo_ball_sync_state)
#define throw_gogo_ball__12TWindowTimerFPvii ((void (*)(void*,s32,s32))throw_gogo_ball__12TWindowTimerFPvii)
#define __dl__7TObjectFPv ((s32 (*)(void*))__dl__7TObjectFPv)
#define gogo_ball_team_scores (*(int (*)[1])&gogo_ball_team_scores)
#define xyz_distance ((f32 (*)(void*,void*))xyz_distance)
#define vector_length ((f32 (*)(void*,f32))vector_length)
#define reflect_velocity_off_collision ((s32 (*)(void*,void*,void*))reflect_velocity_off_collision)
#define lbl_804B8D94 (*(Vec_8019A104 *)&lbl_804B8D94)
#define lbl_804B8DA0 (*(Vec_8019A104 *)&lbl_804B8DA0)

#include "types.h"

struct RecoveredGlobal_8019A574_lbl_804B8E18 {
    s32 value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_8019A574_lbl_8050DD58 {
    s32 value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_8019A574_lbl_8050DDAC {
    s32 value;
    u8 remaining[0x18];
};

struct Pkt_8019A098 { u8 cmd; u8 size; u16 id; f32 x; f32 z; s32 flag; };

struct Player_8019A098 { u8 pad[0x60]; s32 area; };

struct Win_8019A44C { u8 pad0[0x50]; f32 f50[3]; u8 pad5C[0x2D8]; s32 f334; u8 pad338[0xC]; f32 f344; f32 f348; f32 f34C; u8 pad350[0x40]; f32 f390; f32 f394; f32 f398; f32 f39C; f32 f3A0; };

struct Vec_80199F14 { f32 x, y, z; };

struct Tbl_80199F14 { u8 pad[0x14]; s16 limit; u8 pad16[6]; f32 yofs; };

struct Timer_80199F14 {
    u8 pad0[0x38];
    Vec_80199F14 pos;
    u8 pad44[0x2f8];
    f32 f33c;
    u8 pad340[4];
    Vec_80199F14 vel;
    s32 time;
};

struct Vec_8019A104 { f32 x, y, z; };

struct Cfg_8019A104 { u8 pad0[0x1C]; f32 range; u8 pad20[0xC]; Vec_8019A104 p2C; Vec_8019A104 p38; f32 f44; u8 pad48[0xC]; };

struct State_8019A104 { u8 pad0[0x10]; s16 flags; u8 pad12[0xA]; };

struct Player_8019A104 { u8 pad0[0x38]; Vec_8019A104 pos; };

struct Timer_8019A104 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[4];
    Vec_8019A104 pos;
    u8 pad44[0x300];
    Vec_8019A104 vel;
    s32 time;
    u8 pad354[4];
    s32 f358;
    s32 f35C;
    s32 f360;
};

extern "C" {
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFv();
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0);
void TWindowTimer__sub_8019A6F8(void* p);
int set_timer_value__12TWindowTimerFii(int a0, int a1);
int close_timer_window__11TWindowCtrlFv(void*);
int TWindowTimer__sub_8019A770(void* p);
u8 * construct_actor_base__10TObjPlayerFPvPv(void *);
s32 initialize_linked_object_reference__13TUnk_804AF8A0FPv(void *, s32);
extern s32 lbl_804B8E18[];
u8 *TWindowTimer__sub_8019A574(u8 *arg0);
s16 get_timer_value__12TWindowTimerFi(s32 i);
void add_gogo_ball_three_point_score(s32 i);
void add_gogo_ball_one_point_score(s32 i);
void init_6x40_walk_packet(void *cmd);
Player_8019A098 *get_player_by_client_id(s32);
void calc_movement_target__10TObjPlayerFlPfPf(void *arg0, s32 arg1, f32 *arg2, f32 *arg3);
void sync_from_lobby__10TNpcPlayerFv(void *p);
extern s32 local_client_id;
void TWindowTimer__sub_8019A098(void);
void rotate_vec_xz(void *, void *, s32);
void sub_8019A44C__13TUnk_804B8E18Fl(Win_8019A44C *arg0, s32 arg1);
s32 obj_getField1c(void *);
s32 get_clock_frames__6TLobbyFv();
void update_best_time__13TUnk_804B8E18Fv(void *arg0);
void open__11TWindowCtrlFlll(s32, void *, int);
void vec3_add_to(void *, void *);
extern u8 lbl_8044613C[];
extern s32 local_client_id;
void update_motion__12TWindowTimerFPv(Timer_80199F14 *self);
s32 obj_getField1c(void *);
void TWindowTimer__sub_8019A098(void);
void add_gogo_ball_three_point_score(s32 i);
void add_gogo_ball_one_point_score(s32 i);
Player_8019A098 *get_player_by_client_id(s32);
void open__11TWindowCtrlFlll(s32, void *, int);
f32 atan2_float(f32, f32);
extern u8 lbl_80446148[];
extern const f64 lbl_80446150[];
void update_goal_checks__13TUnk_804B8E18FUs(void *arg0, u16 id);
}

extern "C" {

void *destroy_player_obj__13TUnk_804B8E18Fs(void *arg0, s16 arg1);
void send_gogo_ball__12TWindowTimerFi(s32 arg0);
void update_best_time__13TUnk_804B8E18Fv(void *arg0);
s32 TLobby__send_and_handle_60(void *);
s32 unregister_object_by_id__13TUnk_804AF8A0Fv(s32 *);
s32 bswap_32__FPUl(s32);
s32 clear_obj_links__13TUnk_804AF8A0Fv(void *);
s32 destroy_motion_object__13TUnk_804806E8Fs(void *, s32);
s32 read_be16_field2__10TObjPlayerFv();

void TUnk_804B8E18::update_best_time() {
    if ((*(s16 *)((s8 *)gogo_ball_sync_state + 0x12) == 0) && ((s32) *(s32 *)((s8 *)this + 0x354) <= (s32) *(s32 *)((s8 *)gogo_ball_sync_state + 0x14))) {
        *(s32 *)((s8 *)this + 0x354) = (s32) *(s32 *)((s8 *)gogo_ball_sync_state + 0x14);
        *(f32 *)((s8 *)this + 0x38) = (f32) *(f32 *)((s8 *)gogo_ball_sync_state + 0);
        *(f32 *)((s8 *)this + 0x3C) = (f32) *(f32 *)((s8 *)gogo_ball_sync_state + 4);
        *(f32 *)((s8 *)this + 0x40) = (f32) *(f32 *)((s8 *)gogo_ball_sync_state + 8);
        sub_8019A44C__13TUnk_804B8E18Fl((Win_8019A44C *)(this), (s32)(*(s32 *)((s8 *)gogo_ball_sync_state + 0xC)));
    }
    *(s16 *)((s8 *)gogo_ball_sync_state + 0x12) = 1;
}

extern s32 lbl_804B8E18[];

void update_motion__12TWindowTimerFPv(Timer_80199F14 *self) {
    s32 i;
    Vec_80199F14 q;
    Vec_80199F14 p;
    i = 0;
    self->time = get_clock_frames__6TLobbyFv() % 2592;
    if (self->time >= ((Tbl_80199F14 *)&gogo_ball_configuration)->limit) {
        VecCopy__FP3VecPC3Vec(&p, &self->pos);
        p.y += ((Tbl_80199F14 *)&gogo_ball_configuration)->yofs;
        spawn_particle_effect_with_flags(&p, 0x45, 0x40);
        spawn_particle_effect_with_flags(&p, 0x46, 0x40);
        open__11TWindowCtrlFlll(obj_getField1c(self), lbl_8044613C, 0x1B);
        queue_destruction__7TObjectFv(self);
        return;
    }
    update_goal_checks__13TUnk_804B8E18FUs((void *)(self), (u16)(local_client_id));
    update_best_time__13TUnk_804B8E18Fv(self);
    if (self->pos.y <= (-5e+02f)) {
        queue_destruction__7TObjectFv(self);
    }
    VecCopy__FP3VecPC3Vec(&q, &self->pos);
    self->vel.y += self->f33c;
    vec3_add_to(&self->pos, &self->vel);
    for (;;) {
        if (i++ >= 3 || reflect_velocity_off_collision(self, &q, &self->vel) == 0) {
            break;
        }
        VecCopy__FP3VecPC3Vec(&self->pos, &q);
        q.x += self->vel.x;
        q.y += self->vel.y;
        q.z += self->vel.z;
    }
}

void TWindowTimer__sub_8019A098(void) {
    Pkt_8019A098 pkt;
    f32 x;
    f32 z;
    Player_8019A098 *p;
    init_6x40_walk_packet(&pkt);
    p = get_player_by_client_id(local_client_id);
    if (p != 0) {
        pkt.id = local_client_id;
        calc_movement_target__10TObjPlayerFlPfPf(p, p->area, &x, &z);
        pkt.x = x;
        pkt.z = z;
        pkt.flag = 0;
        sync_from_lobby__10TNpcPlayerFv(&pkt);
    }
}

#define CFG (*(Cfg_8019A104 *)&gogo_ball_configuration)
#define ST (*(State_8019A104 *)gogo_ball_sync_state)
extern const char lbl_805DBF94[] = "Go!";
void TUnk_804B8E18::update_goal_checks(u16 id) {
    Timer_8019A104 *self;
    Player_8019A104 *p;
    f32 len;
    s32 ang;
    p = (Player_8019A104 *)get_player_by_client_id(id);
    self = (Timer_8019A104 *)this;
    if (p == NULL) {
        return;
    }
    if (xyz_distance(&CFG.p2C, &self->pos) <= CFG.f44 && (0.0f) == ((f32 (*)(void *))vector_length)(&self->vel)) {
        ST.flags |= 2;
        if (self->f360 == 0) {
            add_gogo_ball_one_point_score(1);
            self->f360 = 1;
        }
    }
    if (xyz_distance(&CFG.p38, &self->pos) <= CFG.f44 && (0.0f) == ((f32 (*)(void *))vector_length)(&self->vel)) {
        ST.flags |= 1;
        if (self->f360 == 0) {
            add_gogo_ball_one_point_score(0);
            self->f360 = 1;
        }
    }
    if (xyz_distance(&lbl_804B8D94, &self->pos) <= CFG.f44 && (0.0f) == ((f32 (*)(void *))vector_length)(&self->vel)) {
        ST.flags |= 0x10;
        if (self->f360 == 0) {
            add_gogo_ball_three_point_score(0);
            self->f360 = 1;
        }
    }
    if (xyz_distance(&lbl_804B8DA0, &self->pos) <= CFG.f44 && (0.0f) == ((f32 (*)(void *))vector_length)(&self->vel)) {
        ST.flags |= 0x20;
        if (self->f360 == 0) {
            add_gogo_ball_three_point_score(1);
            self->f360 = 1;
        }
    }
    if ((ST.flags & 2 || ST.flags & 1 || ST.flags & 0x20 || ST.flags & 0x10) && !(ST.flags & 8) && !(ST.flags & 4)) {
        open__11TWindowCtrlFlll(obj_getField1c(self), lbl_80446148, 0x1B);
    }
    if (!(ST.flags & 0x33) && self->f360 != 0) {
        self->f360 = 0;
    }
    len = ((f32 (*)(void *))vector_length)(&self->vel);
    if ((0.0f) == len) {
        if (self->f358 == 0) {
            open__11TWindowCtrlFlll(((s32 (*)(void *, s32))obj_getField1c)(self, self->f35C++), (void *)&lbl_805DBF94, 0x1B);
        }
        self->f358 = 1;
    } else {
        self->f358 = 0;
    }
    if (xyz_distance(&self->pos, &p->pos) > CFG.range) {
        self->f30 = 0;
        return;
    }
    if (self->f30 != 1) {
        self->f30 = 1;
        ang = lbl_80446150[0] * atan2_float(self->pos.x - p->pos.x, self->pos.z - p->pos.z);
        if ((0.0f) == len) {
            throw_gogo_ball__12TWindowTimerFPvii(&self->pos, ang, self->time);
            ((void (*)(void *))TWindowTimer__sub_8019A098)(self);
        }
    }
}

void TUnk_804B8E18::sub_8019A44C(s32 arg1) {
    Win_8019A44C *arg0 = (Win_8019A44C *)this;
    arg0->f390 = ((f32 *)&gogo_ball_configuration)[3];
    arg0->f394 = ((f32 *)&gogo_ball_configuration)[4];
    if ((s32)((u8 *)&gogo_ball_sync_state)[0x18] == 1) {
        arg0->f390 = ((f32 *)&gogo_ball_configuration)[0x13];
        arg0->f394 = ((f32 *)&gogo_ball_configuration)[0x14];
    }
    arg0->f398 = (0.1f);
    arg0->f39C = (0.1f);
    arg0->f344 = (0.0f);
    arg0->f348 = arg0->f394;
    arg0->f34C = arg0->f390;
    arg0->f3A0 = vector_length(&arg0->f344, (0.1f));
    rotate_vec_xz(&arg0->f344, &arg0->f344, arg1);
    arg0->f334 = arg1;
    VecCopy__FP3VecPC3Vec(arg0->f50, &arg0->f344);
    arg0->f50[1] = (0.0f);
}

void *TUnk_804B8E18::destroy_player_obj(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B8E18;
        unregister_object_by_id__13TUnk_804AF8A0Fv((s32 *)this);
        clear_obj_links__13TUnk_804AF8A0Fv(this);
        destroy_motion_object__13TUnk_804806E8Fs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

typedef char RecoveredGlobal_8019A574_lbl_804B8E18_size[sizeof(RecoveredGlobal_8019A574_lbl_804B8E18) == 0x140 ? 1 : -1];
typedef char RecoveredGlobal_8019A574_lbl_8050DD58_size[sizeof(RecoveredGlobal_8019A574_lbl_8050DD58) == 0x54 ? 1 : -1];
typedef char RecoveredGlobal_8019A574_lbl_8050DDAC_size[sizeof(RecoveredGlobal_8019A574_lbl_8050DDAC) == 0x1C ? 1 : -1];
u8 *TWindowTimer__sub_8019A574(u8 *arg0) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019A574_lbl_804B8E18 *)&lbl_804B8E18).value;
    *(f32 *)((s8 *)arg0 + 0x390) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x394) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x344) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x348) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x34C) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) *(f32 *)((s8 *)(&gogo_ball_configuration.value) + 0x20);
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) *(f32 *)((s8 *)(&gogo_ball_configuration.value) + 0x24);
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) *(f32 *)((s8 *)(&gogo_ball_configuration.value) + 0x28);
    *(s32 *)((s8 *)arg0 + 0x350) = 0;
    *(s32 *)((s8 *)arg0 + 0x354) = 0;
    *(s32 *)((s8 *)arg0 + 0x334) = 0;
    *(s32 *)((s8 *)arg0 + 0x338) = 0;
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) *(f32 *)((s8 *)(&gogo_ball_configuration.value) + 0);
    *(f32 *)((s8 *)arg0 + 0x340) = (f32) *(f32 *)((s8 *)(&gogo_ball_configuration.value) + 4);
    *(s32 *)((s8 *)arg0 + 0x358) = 0;
    *(f32 *)((s8 *)arg0 + 0x364) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x368) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x36C) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0x370) = (f32) (2.0f);
    *(f32 *)((s8 *)arg0 + 0x374) = (f32) (1.0f);
    *(s32 *)((s8 *)arg0 + 0x378) = 1;
    *(s32 *)((s8 *)arg0 + 0x37C) = 0x40107;
    initialize_linked_object_reference__13TUnk_804AF8A0FPv(arg0, (s32) (arg0 + 0x364));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0x35C) = 0;
    *(s16 *)((s8 *)(&(*(RecoveredGlobal_8019A574_lbl_8050DDAC *)&gogo_ball_sync_state).value) + 0x10) = 0;
    *(s8 *)((s8 *)(&(*(RecoveredGlobal_8019A574_lbl_8050DDAC *)&gogo_ball_sync_state).value) + 0x18) = 0;
    *(s32 *)((s8 *)arg0 + 0x360) = 0;
    return arg0;
}

void send_gogo_ball__12TWindowTimerFi(s32 arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi((s32)(arg0));
    TLobby__send_and_handle_60((void *) (arg0));
}
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

s16 get_timer_value__12TWindowTimerFi(s32 i) {
    return ((s32 *)&gogo_ball_team_scores)[i];
}

int set_timer_value__12TWindowTimerFii(int a0, int a1) { gogo_ball_team_scores[a0] = a1; return (int)gogo_ball_team_scores; }

void add_gogo_ball_three_point_score(s32 i) {
    ((s32 *)&gogo_ball_team_scores)[i] += 3;
}

void add_gogo_ball_one_point_score(s32 i) {
    ((s32 *)&gogo_ball_team_scores)[i] += 1;
}

int TWindowTimer__sub_8019A770(void* p) { return close_timer_window__11TWindowCtrlFv(p); }

}

}

#undef VecCopy__FP3VecPC3Vec
#undef queue_destruction__7TObjectFv
#undef spawn_particle_effect_with_flags
#undef gogo_ball_configuration
#undef gogo_ball_sync_state
#undef throw_gogo_ball__12TWindowTimerFPvii
#undef __dl__7TObjectFPv
#undef gogo_ball_team_scores
#undef xyz_distance
#undef vector_length
#undef reflect_velocity_off_collision
#undef lbl_804B8D94
#undef lbl_804B8DA0
