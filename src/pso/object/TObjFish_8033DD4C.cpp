#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
struct O_8033E5A8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x70 - 0x1C];
    void *f70;
    u8 pad74[0x80 - 0x74];
    void *f80;
    u8 pad84[0x9C - 0x84];
    void *f9c;
    void *fa0[4];
};

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_8033E0F0 { f32 x, y, z; };

struct Rng_8033E0F0 { s32 start; s32 end; s32 id; };

struct Fish_8033E0F0 {
    u8 pad0[0x4C];
    f32 f4c;
    s32 timer;
    s32 f54;
    Vec_8033E0F0 pos;
    Vec_8033E0F0 f64;
    u8 pad70[0x74 - 0x70];
    Vec_8033E0F0 f74;
    u8 pad80[0x84 - 0x80];
    Vec_8033E0F0 f84;
    Vec_8033E0F0 f90;
    u8 pad9C[0xA0 - 0x9C];
    void *emit[4];
    void *fb0;
};

struct Pl_8033E0F0 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    Vec_8033E0F0 pos;
};

extern "C" {
void *__nw__7TObjectFUl(int);
void * fn_8033E8C0(void *arg0, void *arg1);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK restore_player_cameras();
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK refresh_players_equipment__14TBoss6PlotFalzFPv();
extern void *lbl_804EFA38[];
O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1);
void clear_render_callback__8TObjFishFv(int);
void set_draw_callback_list__8TObjFishFPv(int);
void reset_fish_globals__8TObjFishFv();
void set_fade_material_color__14TBoss6PlotFalzFf(f32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void draw_model_motion(int, int, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void clear_render_callback__8TObjFishFv(int);
void set_draw_callback_list__8TObjFishFPv(int);
void reset_fish_globals__8TObjFishFv();
void set_fade_material_color__14TBoss6PlotFalzFf(f32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void);
void draw_model_motion(int, int, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void draw_fade_in__8TObjFishFPv(void *p);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_motion(void *, int);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
void activate_camera_mode(int);
void set_scripted_camera_pose(void *, void *, void *);
void cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 TObjFish__sub_800E3124(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *get_fish_count__8TObjFishFv(void);
s32 create_zanzo__11TBoss6Type1FPvPvPv(void *, int, int);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
extern void *lbl_804EFA38[];
#define lbl_804EFA38 ((u8 *)lbl_804EFA38)
void *TObjFish__sub_8033E688(void *arg0p, void *arg1, void *arg2);
void request_destroy__11TBoss4Type2FUi(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
void *create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void set_effect_points__11TBoss6Type1FPvPvPv(void *, void *, void *);
s32 get_game_mode__6TLobbyFv();
Pl_8033E0F0 *get_player_data__10TObjPlayerFi(s32);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 is_state_1f__14TBoss6PlotFalzFUi(void *);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
s32 get_phase__8TObjFishFPv(int);
void queue_destruction__7TObjectFv(void *);
void TObjFish__sub_8033E0F0(Fish_8033E0F0 *arg0);
void clear_render_callback__8TObjFishFv(int);
void set_draw_callback_list__8TObjFishFPv(int);
void reset_fish_globals__8TObjFishFv();
void set_fade_material_color__14TBoss6PlotFalzFf(f32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void);
void draw_model_motion(int, int, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void TObjFish__sub_8033DFB4(u8 *arg0);
}

extern "C" {

void update__8TObjFishFPv(void* p);
void TObjFish__sub_8033DE60(void*);
int get_shared_capture_texture_list(void);
int load_list_texture(int, int, int, int);
void init_particle_effect__10TObjPlayerFv(void);
int render_effect__8TObjFishFPv(void*);
int set_global_param__8TObjFishFi(void);

}
extern "C" const char lbl_80478088[] = "TBoss6Demo21_TYPE2_DEAD";
extern "C" const u32 lbl_804780A0[3] = {0xc61c4000, 0x0, 0x0};
extern "C" const u32 lbl_804780AC[3] = {0x0, 0x0, 0xc30e0000};
extern "C" const u32 lbl_804780B8[3] = {0x0, 0xc0000000, 0x40cccccd};
extern "C" const u32 lbl_804780C4[8] = {0x24, 0x0, 0x0, 0x0, 0xffffffff, 0x0, 0x0, 0x0};
extern "C" const u32 lbl_804780E4[8] = {0x19, 0x0, 0x0, 0x0, 0xffffffff, 0x0, 0x0, 0x0};
extern "C" const u32 lbl_80478104[12] = {0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0xffffffff, 0x0, 0x0, 0x0};
extern "C" const u32 lbl_80478134[3] = {0x0, 0x0, 0x0};
extern "C" const u32 lbl_80478140[3] = {0x1010000, 0x0, 0x3f333333};
extern "C" const u32 lbl_8047814C[12] = {0x0, 0x8e, 0x228, 0xfa, 0x13a, 0x22a, 0x11d, 0x1ac, 0x22e, 0xf2, 0x13a, 0x179};
extern "C" const u32 lbl_8047817C[3] = {0xffff4000, 0xffffff60, 0xffff4000};
extern "C" const char *lbl_805D42B0 = lbl_80478088;
#define lbl_805D42B0 (*(s32 *)&lbl_805D42B0)
#define lbl_804780A0 ((u8 *)lbl_804780A0)
#define lbl_804780AC ((Vec_8033E0F0 *)lbl_804780AC)
#define lbl_804780B8 ((Vec_8033E0F0 *)lbl_804780B8)
#define lbl_804780C4 ((u8 *)lbl_804780C4)
#define lbl_804780E4 ((u8 *)lbl_804780E4)
#define lbl_80478104 ((u8 *)lbl_80478104)
#define lbl_80478134 ((u8 *)lbl_80478134)
#define lbl_80478140 ((u8 *)lbl_80478140)
#define lbl_8047814C ((Rng_8033E0F0 *)lbl_8047814C)
#define lbl_8047817C ((u8 *)lbl_8047817C)
#pragma pool_data off
extern "C" {
#define arg0 ((u8 *) p)

#undef arg0

#define arg0 ((u8 *) p)

#define arg0 ((u8 *) p)
void draw_fade_in__8TObjFishFPv(void *p) {
    f32 f;
    s32 t;
    f = 0.0f;
    t = *(s32 *)(arg0 + 0x50);
    if (t > 0x11D && t < 0x1AC) {
        if (t >= 0x12C && t <= 0x1AC) {
            f = 1.0f;
        } else if (t > 0x11D && t < 0x12C) {
            f = (f32) (t - 0x11D) / 15.0f;
        }
    }
    if (0.0f != f) {
        if (f < 1.0f) {
            set_fade_material_color__14TBoss6PlotFalzFf(f);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix(arg0 + 0x58);
        ((void (*)(int)) set_global_param__8TObjFishFi)(*(s32 *)(arg0 + 0x38));
        set_draw_callback_list__8TObjFishFPv(*(s32 *)(arg0 + 0x80));
        draw_model_motion(*(s32 *)(arg0 + 0x34), *(s32 *)(arg0 + 0x3C), *(f32 *)(arg0 + 0x4C));
        clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + 0x80));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (f < 1.0f) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void TObjFish__sub_8033DE60(void *p) {

    f32 f;
    s32 t;

    f = 0.0f;
    t = *(s32 *)(arg0 + 0x50);
    if (t > 0x101 && t < 0x12C) {
        if (t >= 0x10F && t <= 0x11D) {
            f = 1.0f;
        } else if (t > 0x101 && t < 0x10F) {
            f = (f32) (t - 0x101) / 14.0f;
        } else if (t > 0x11D && t < 0x12C) {
            f = (f32) (0x12C - t) / 15.0f;
        }
    }
    if (0.0f != f) {
        if (f < 1.0f) {
            set_fade_material_color__14TBoss6PlotFalzFf(f);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix(arg0 + 0x58);
        ((void (*)(int)) set_global_param__8TObjFishFi)(*(s32 *)(arg0 + 0x2C));
        set_draw_callback_list__8TObjFishFPv(*(s32 *)(arg0 + 0x70));
        draw_model_motion(*(s32 *)(arg0 + 0x28), *(s32 *)(arg0 + 0x30), *(f32 *)(arg0 + 0x4C));
        clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + 0x70));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (f < 1.0f) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}
#undef arg0

void TObjFish__sub_8033DFB4(u8 *arg0) {
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r0 < 0x101) {
        var_f31 = (1.0f);
    } else if (temp_r0 >= 0x10F) {
        var_f31 = (0.0f);
    } else {
        var_f31 = (f32) (0x10F - temp_r0) / (14.0f);
    }
    if ((0.0f) != var_f31) {
        if (var_f31 < (1.0f)) {
            set_fade_material_color__14TBoss6PlotFalzFf(var_f31);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix(arg0 + 0x58);
        ((int (*)(s32))set_global_param__8TObjFishFi)(M2C_FIELD(arg0, s32 *, 0x20));
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0x70));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x4C));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x70));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < (1.0f)) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4((u8 *)(p)); TObjFish__sub_8033DE60(p); draw_fade_in__8TObjFishFPv((void *)(p)); render_effect__8TObjFishFPv(p); }

#pragma push
#pragma pool_data off
void TObjFish__sub_8033E0F0(Fish_8033E0F0 *arg0) {
    Vec_8033E0F0 b;
    Vec_8033E0F0 mid;
    Vec_8033E0F0 a;
    if ((arg0->f4c += 0.7f) > 499.0f) {
        arg0->f4c = 499.0f;
    }
    switch (arg0->timer) {
    case 0x0:
        play_sound_effect(0x4003232C, 0, 0, 0);
        break;
    case 0xAE:
    case 0xCF:
        play_sound_effect(0x4003942D, 0, 0, 0);
        break;
    case 0x23B:
        play_sound_effect(0x40032830, 0, 0, 0);
        break;
    }
    if (arg0->timer >= 0x12C && arg0->timer <= 0x1AC) {
        play_persistent_sound(0x4003352E, arg0, 0, 0, 0);
    }
    if (arg0->timer >= 0x1D7 && arg0->timer <= 0x23A) {
        play_persistent_sound(0x32D2F, arg0, 0, 0, 0);
    }
    switch (arg0->timer) {
    case 0xAE:
    case 0xCF: {
        Vec_8033E0F0 p = arg0->pos;
        vec3_add_to(&p, lbl_804780AC);
        spawn_particle_effect_with_flags(&p, 0x221, 0x40);
        spawn_particle_effect_with_flags(&p, 0x22F, 0x40);
        break;
    }
    case 0x1AC:
        spawn_particle_effect_with_flags(&arg0->f74, 0x223, 0x40);
        break;
    case 0x23A: {
        Vec_8033E0F0 p = arg0->pos;
        vec3_add_to(&p, lbl_804780B8);
        spawn_particle_effect_with_flags(&p, 0xA4, 0x40);
        spawn_particle_effect_with_flags(&p, 0xE3, 0x40);
        break;
    }
    }
    if (arg0->timer >= 0x12C && arg0->timer < 0x1BA) {
        spawn_particle_effect_with_flags(&arg0->f74, 0x22E, 0x40);
    }
    {
        Vec_8033E0F0 *ptrs[4];
        s32 i;
        ptrs[0] = &arg0->pos;
        ptrs[1] = &arg0->f64;
        ptrs[2] = &arg0->f74;
        ptrs[3] = &arg0->f64;
        for (i = 0; i < 4; i++) {
            if (arg0->timer >= lbl_8047814C[i].start && arg0->timer < lbl_8047814C[i].end) {
                if (arg0->emit[i] == 0) {
                    arg0->emit[i] = create_particle_emitter(ptrs[i], lbl_8047814C[i].id);
                    if (arg0->emit[i] != 0) {
                        set_flags__11TBoss4Type2FPvUi(arg0->emit[i], 0x40);
                    }
                } else {
                    copy_pos__11TNowLoadingFPvPv(arg0->emit[i], ptrs[i]);
                }
            } else if (arg0->emit[i] != 0) {
                request_destroy__11TBoss4Type2FUi(arg0->emit[i]);
                arg0->emit[i] = 0;
            }
        }
    }
    if (arg0->timer >= 0x1AE) {
        s32 pb;
        s32 pm;
        VecCopy__FP3VecPC3Vec(&a, &arg0->f84);
        pb = (s32)&b;
        VecCopy__FP3VecPC3Vec((void *)pb, &arg0->f90);
        pm = (s32)&mid;
        VecCopy__FP3VecPC3Vec((void *)pm, &a);
        vec3_add_to((void *)pm, (void *)pb);
        mid.x *= (0.5f);
        mid.y *= (0.5f);
        mid.z *= (0.5f);
        set_effect_points__11TBoss6Type1FPvPvPv(arg0->fb0, &a, lbl_8047817C);
    }
    if (arg0->timer == 0x23A) {
        s32 n = get_game_mode__6TLobbyFv();
        Vec_8033E0F0 c;
        s32 i;
        VecCopy__FP3VecPC3Vec(&c, &arg0->pos);
        vec3_add_to(&c, lbl_804780B8);
        for (i = 0; i < n; i++) {
            Pl_8033E0F0 *p = get_player_data__10TObjPlayerFi(i);
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0 && is_state_1f__14TBoss6PlotFalzFUi(p) != 0) {
                Vec_8033E0F0 d;
                VecCopy__FP3VecPC3Vec(&d, &p->pos);
                subtract_vector(&d, &c);
                d.y = (0.0f);
                if (!(vector_length(&d) > (0.25f))) {
                    p->f30 |= 0x600;
                }
            }
        }
    }
    switch (arg0->timer) {
    case 0x5F:
    case 0x82:
    case 0xB1:
    case 0xCD:
    case 0xFA:
    case 0x10E:
    case 0x23C:
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    }
    arg0->timer++;
    if (arg0->timer >= 0x2CA || get_phase__8TObjFishFPv(arg0->f54) != 7) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 i;
        arg0->vt = lbl_804EFA38;
        for (i = 0; i < 4; i++) {
            if (arg0->fa0[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(arg0->fa0[i]);
                arg0->fa0[i] = NULL;
            }
        }
        restore_player_cameras();
        refresh_players_equipment__14TBoss6PlotFalzFPv();
        if (arg0->f70 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f70);
            arg0->f70 = NULL;
        }
        if (arg0->f80 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f80);
            arg0->f80 = NULL;
        }
        if (arg0->f9c != NULL) {
            init_state_1__8TObjFishFPv(arg0->f9c);
            arg0->f9c = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
typedef struct { f32 x, y, z; } Vec_8033E688;
typedef struct {
    u8 pad[0xA0];
    s32 arr[4];
} Fish_8033E688;
#define arg0 ((u8 *)arg0p)
void *TObjFish__sub_8033E688(void *arg0p, void *arg1, void *arg2) {
    Vec_8033E688 v;
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = lbl_804EFA38;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D42B0;
    M2C_FIELD(arg0, void **, 0x54) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x58, lbl_804780A0);
    VecCopy__FP3VecPC3Vec(&v, arg2);
    subtract_vector(&v, lbl_804780A0);
    v.y = (0.0f);
    if (vector_length(&v) > 60.0f) {
        normalize_vector(&v);
        v.x *= 60.0f;
        v.z *= 60.0f;
    }
    vec3_add_to(arg0 + 0x58, &v);
    void *count = get_fish_count__8TObjFishFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = get_bml_model(count, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = TObjFish__sub_8001EDB0(count, 4);
    M2C_FIELD(arg0, s32 *, 0x24) = get_bml_motion(count, 7);
    M2C_FIELD(arg0, s32 *, 0x28) = get_bml_model(count, 5);
    M2C_FIELD(arg0, s32 *, 0x2C) = TObjFish__sub_8001EDB0(count, 5);
    M2C_FIELD(arg0, s32 *, 0x30) = get_bml_motion(count, 7);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model(count, 8);
    M2C_FIELD(arg0, s32 *, 0x38) = TObjFish__sub_8001EDB0(count, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = get_bml_motion(count, 8);
    M2C_FIELD(arg0, s32 *, 0x40) = get_bml_model(count, 0xD);
    M2C_FIELD(arg0, s32 *, 0x44) = TObjFish__sub_8001EDB0(count, 0xD);
    M2C_FIELD(arg0, s32 *, 0x48) = get_bml_motion(count, 0x3D);
    M2C_FIELD(arg0, s32 *, 0x70) = TObjFish__sub_800E3124(lbl_804780C4, arg0 + 0x64);
    M2C_FIELD(arg0, s32 *, 0x80) = TObjFish__sub_800E3124(lbl_804780E4, arg0 + 0x74);
    M2C_FIELD(arg0, s32 *, 0x9C) = TObjFish__sub_800E3124(lbl_80478104, arg0 + 0x84);
    activate_camera_mode(5);
    set_scripted_camera_pose(arg0 + 0x58, arg0 + 0x58, lbl_80478134);
    cache_target_and_forward__11TCameraCtrlFii(lbl_80478140, 0x416C);
    for (i = 0; i < 4; i++) {
        ((Fish_8033E688 *)arg0)->arr[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = create_zanzo__11TBoss6Type1FPvPvPv(arg0, 3, 0xF);
    M2C_FIELD(arg0, f32 *, 0x4C) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}
#undef arg0
#pragma pop

void * fn_8033E8C0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TObjFish__sub_8033E688((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

void render_shadows__7TObjectFv();
}
#undef lbl_804EFA38
extern "C" void *lbl_804EFA38[6] = {
    0, 0, (void *)&TObjFish__sub_8033E5A8, (void *)&TObjFish__sub_8033E0F0,
    (void *)&update__8TObjFishFPv, (void *)&render_shadows__7TObjectFv,
};
