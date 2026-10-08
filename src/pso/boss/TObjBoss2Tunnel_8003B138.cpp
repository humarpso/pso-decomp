#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003B138 { char pad[0x18]; };
struct VObj_8003B138 : Base_8003B138 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0);
struct Obj_8003B250;
void release_children__15TObjBoss2TunnelFPvf(Obj_8003B250 *arg0, f32 farg0);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
s32 get_particle_by_index__13TParticleCtrlFi(s32);

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
#define release_children__15TObjBoss2TunnelFPvf ((M2C_UNK (*)(void *, f32))release_children__15TObjBoss2TunnelFPvf)
    if (var_r31 != NULL) {
        ((VObj_8003B138 *)var_r31)->m1();
        release_children__15TObjBoss2TunnelFPvf(var_r31, farg0);
    }
}

}

#undef release_children__15TObjBoss2TunnelFPvf

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Child_8003B250 { u8 pad0[0x44]; f32 f44; };
struct Obj_8003B250 { u8 pad0[0x14]; Child_8003B250 *child; };
struct Obj_8003B1FC { u8 pad[0x14]; Obj_8003B1FC *child; u8 pad2[0x3c - 0x18]; u8 xf[0xC]; };

extern "C" {
s32 vec3_add_to(void *, void *);
s32 set_parent__7TObjectFP7TObject(void *, void *);
extern void *TObjBoss2Tunnel_parent_object;
void detach_children__15TObjBoss2TunnelFPvPv(Obj_8003B1FC *self, void *arg);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003B1D8(void);

extern const f32 lbl_805D85D8;

void TObjBoss2Tunnel__sub_8003B1D8(void) {
    ((void (*)(f32))release_children__15TObjBoss2TunnelFPvf)(lbl_805D85D8);
}
void detach_children__15TObjBoss2TunnelFPvPv(Obj_8003B1FC *self, void *arg) {
    Obj_8003B1FC *c;
    while ((c = self->child) != 0) {
        vec3_add_to(c->xf, arg);
        set_parent__7TObjectFP7TObject(c, TObjBoss2Tunnel_parent_object);
    }
}
void release_children__15TObjBoss2TunnelFPvf(Obj_8003B250 *arg0, f32 farg0) {
    Child_8003B250 *c;
    while ((c = arg0->child) != NULL) {
        c->f44 = c->f44 + farg0;
        set_parent__7TObjectFP7TObject(c, TObjBoss2Tunnel_parent_object);
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct S_8003C108 {
    u8 pad0[0x20];
    f32 f20;
    u8 pad24[0xC8 - 0x24];
    u32 ptr[4];
};

struct Rec_8003C108 { s32 a, b, c; };

typedef s32 M2C_UNK;
struct Vec_8003B2EC { f32 x, y, z; };

struct Model_8003B2EC { s32 a; s32 b; s32 obj; s32 c; };

struct Models_8003B2EC { u8 pad[0x42C]; Model_8003B2EC *models; };

struct Fog_8003B2EC { s32 a; s32 b; s32 c; };

struct Tunnel_8003B2EC {
    u8 pad0[0x1C];
    f32 f1c;
    u8 pad20[0x4];
    s32 f24;
    u8 pad28[0x4];
    s32 f2c[6];
    u8 pad44[0x1C];
    f32 f60;
    u8 pad64[0x34];
    f32 f98;
    u8 pad9c[0x4];
    s32 fa0;
    u8 pada4[0x4];
    s32 fa8;
    f32 fac;
};

typedef struct Tunnel_8003B6E8 {
    u8 pad0[0x1C];
    f32 f1c;
    f32 f20;
    s32 f24;
    s32 f28;
    u8 pad2c[0x34 - 0x2C];
    s32 f34;
    s32 f38;
    u8 pad3c[0x44 - 0x3C];
    s32 f44;
    s32 f48;
    f32 f4c;
    f32 f50;
    f32 f54;
    s32 f58;
    s32 f5c;
    f32 f60;
    s32 f64;
    u8 f68[0x94 - 0x68];
    f32 f94;
    f32 f98;
    s32 f9c;
    s32 fa0;
    s32 fa4;
    s32 fa8;
    f32 fac;
    s32 fb0;
    s32 fb4;
    s32 fb8;
    s32 fbc;
    u8 padc0[0xD8 - 0xC0];
    s32 fd8;
} Tunnel_8003B6E8;

typedef struct Col_8003B6E8 {
    s32 a;
    f32 r;
    f32 g;
    f32 b;
} Col_8003B6E8;

typedef struct Vec_8003B6E8 {
    f32 x, y, z;
} Vec_8003B6E8;

extern "C" {
s32 create_particle__20TAdLoadQuestPrtTxtGCFPvii(void *, s32, s32);
void enable__13TParticleCtrlFPv(void *);
extern Rec_8003C108 lbl_80483590[];
extern const f32 lbl_805D85B0;
void update_particles__15TObjBoss2TunnelFPv(S_8003C108 *o);
s32 get_state_flag__9TMainTaskFv();
struct O_8003C21C;
u8 * TObjBoss2Tunnel__sub_8003C21C(O_8003C21C *self);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_ginja_object(s32);
extern Vec_8003B2EC lbl_80435EB8[];
extern s32 lbl_804833B8[];
extern s32 lbl_804833D0[];
extern Models_8003B2EC *boss2_tunnel_instance;
extern Fog_8003B2EC **lbl_805D4BEC;
void render__15TObjBoss2TunnelFv(u8 *arg0);
f32 sin_table_lookup(s32);
s32 check_flag_or_state__15TObjBoss2TunnelFi(s32 arg0);
s32 is_flag_set__15TObjBoss2TunnelFv(s32 _w0);
void TObjBoss2Tunnel__sub_8007DEE4(void *, f32, f32, f32, f32, f32);
f32 get_random_float__8TObjFishFv(f32);
f32 update_position__15TObjBoss2TunnelFPv(void *);
s32 advance_phase__15TObjBoss2TunnelFPv(void *, f32 *);
void set_global_flag_100__15TObjBoss2TunnelFv(void);
struct S_8003C2E4;
void copy_ring_buffer_window__15TObjBoss2TunnelFPv(S_8003C2E4 *o);
struct Obj_8003C374;
void init_queue_from_start__15TObjBoss2TunnelFPv(Obj_8003C374 *self);
struct Obj_8003C2A0;
void shift_queue_push_next__15TObjBoss2TunnelFPv(Obj_8003C2A0 *self);
s32 update_first_active_fog__8TFogCtrlFv(void);
void * init__15TObjBoss2TunnelFPv(void *arg0);
f32 rand_signed_unit(void);
int rand(void);
void *__ct__13TObjBoss2DustFv(void *, void *, Vec_8003B6E8 *);
void play_sound_effect(int, void *, int, int);
void play_persistent_sound(int, void *, int, int, int);
void enable_fog__15TObjBoss2TunnelFv(void);
void enable_fog__15TObjBoss2TunnelFPv(void *arg0);
s32 is_active__15TObjBoss2TunnelFv(void);
void TObjBoss2Tunnel__sub_801339EC(f32, f32, f32);
extern u32 TObjBoss2Tunnel__global_flags;
extern void *tl_05;
extern const f32 lbl_805D85B0;
void run_task__15TObjBoss2TunnelFv(Tunnel_8003B6E8 *o);
}
#define release_children__15TObjBoss2TunnelFPvf ((void (*)(u32, f32))release_children__15TObjBoss2TunnelFPvf)
#define TObjBoss2Tunnel__sub_8003C21C ((s32 (*)(void *, void *))TObjBoss2Tunnel__sub_8003C21C)
#define check_flag_or_state__15TObjBoss2TunnelFi ((s32 (*)(void *))check_flag_or_state__15TObjBoss2TunnelFi)
#define is_flag_set__15TObjBoss2TunnelFv ((s32 (*)(void *))is_flag_set__15TObjBoss2TunnelFv)
#define copy_ring_buffer_window__15TObjBoss2TunnelFPv ((void (*)(void *))copy_ring_buffer_window__15TObjBoss2TunnelFPv)
#define init_queue_from_start__15TObjBoss2TunnelFPv ((void (*)(void *))init_queue_from_start__15TObjBoss2TunnelFPv)
#define shift_queue_push_next__15TObjBoss2TunnelFPv ((void (*)(void *))shift_queue_push_next__15TObjBoss2TunnelFPv)
#define __nw__7TObjectFUl ((void * (*)(int))__nw__7TObjectFUl)
#define init__15TObjBoss2TunnelFPv ((void (*)(void *, void *))init__15TObjBoss2TunnelFPv)
#define enable_fog__15TObjBoss2TunnelFv ((void (*)(void *))enable_fog__15TObjBoss2TunnelFv)
#define enable_fog__15TObjBoss2TunnelFPv ((void (*)(void *))enable_fog__15TObjBoss2TunnelFPv)

extern "C" {

void TObjBoss2Tunnel__sub_8003B2B0(void);
void *__ct__7TObjectFP7TObject(void *, void *);

extern void *tl_07;
extern void *TObjBoss2Tunnel_parent_object;

void TObjBoss2Tunnel__sub_8003B2B0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    TObjBoss2Tunnel_parent_object = o;
}

void render__15TObjBoss2TunnelFv(u8 *arg0) {
    s32 saved;
    s32 i;
    Tunnel_8003B2EC *o = (Tunnel_8003B2EC *)arg0;
    Vec_8003B2EC v = lbl_80435EB8[0];
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0 && get_state_flag__9TMainTaskFv() == 0) {
    push_matrix();
    {
        Fog_8003B2EC *f = *lbl_805D4BEC;
        saved = f->c;
        f->c = f[TObjBoss2Tunnel__sub_8003C21C(o, lbl_805D4BEC)].c;
    }
    set_global_param__8TObjFishFi(lbl_805D4BEC);
    if (o->f24 == 0 || o->f24 == 1) {
        push_matrix();
        translate_matrix(0, (0.0f), (0.0f), -o->f60);
        draw_ginja_object(boss2_tunnel_instance->models[13].obj);
        pop_matrix();
    }
    if (o->f24 == 3) {
        v.z = -o->f1c;
        if (o->f2c[0] == 6) {
            v.z -= (4e+02f);
        } else {
            v.z -= (3e+02f);
        }
        if (o->f2c[1] == 6) {
            v.z -= (8e+02f);
        } else {
            v.z -= (6e+02f);
        }
        if (o->f2c[2] == 6) {
            v.z -= (4e+02f);
        } else {
            v.z -= (3e+02f);
        }
    } else {
        v.z = -((1.2e+03f) + o->f1c);
    }
    post_translate_matrix(&v);
    v.z = (6e+02f);
    for (i = 0; i < 6; i++) {
        s32 t = o->f2c[i];
        if (t == 6) {
            if (i != 0) {
                translate_matrix(0, (0.0f), (0.0f), (1e+02f));
            }
            translate_matrix(0, (0.0f), (0.0f), (-3e+02f));
            push_matrix();
            translate_matrix(0, (0.0f), o->fac, (0.0f));
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[18].obj);
            draw_ginja_object(boss2_tunnel_instance->models[21].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[10].obj);
            pop_matrix();
            translate_matrix(0, (0.0f), (0.0f), (4e+02f));
            push_matrix();
            translate_matrix(0, (0.0f), o->fac, (0.0f));
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[19].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[11].obj);
            pop_matrix();
            post_translate_matrix(&v);
        } else {
            push_matrix();
            translate_matrix(0, (0.0f), o->fac, (0.0f));
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[lbl_804833B8[t]].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, (0.0f), (0.0f));
            draw_ginja_object(boss2_tunnel_instance->models[lbl_804833D0[t]].obj);
            pop_matrix();
            post_translate_matrix(&v);
        }
    }
    (*lbl_805D4BEC)->c = saved;
    pop_matrix();
    }
}

#pragma push
#pragma fp_contract on
struct S_8003C108;
s32 lbl_804833B8[6] = {
    0x14, 0xe, 0xf, 0x10,
    0x11, 0x13,
};
s32 lbl_804833D0[12] = {
    0xc, 0x6, 0x7, 0x8,
    0x9, 0xb, 0x5, 0x0,
    0x1, 0x2, 0x3, 0x4,
};
void *lbl_80483400[28] = {
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f000000,
    (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f19999a, (void *)0x3e99999a,
    (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3f800000, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
};
void *lbl_80483470[4] = {
    (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f4ccccd, (void *)0x3f4ccccd,
};
void *lbl_80483480[15] = {
    (void *)0x1, (void *)0xa, (void *)0x1, (void *)0x5,
    (void *)0x1, (void *)0x2, (void *)0x2, (void *)0x14,
    (void *)0x2, (void *)0x14, (void *)0x4, (void *)0x5,
    (void *)0x4, (void *)0x2, (void *)0xffffffff,
};
#define lbl_80483400 ((Col_8003B6E8 *)lbl_80483400)
#define lbl_80483470 ((Col_8003B6E8 *)lbl_80483470)
#define lbl_80483480 ((s32 *)lbl_80483480)
void run_task__15TObjBoss2TunnelFv(Tunnel_8003B6E8 *o) {
    f32 tmp;
    s32 flag;
    f32 prev;
    o->f5c++;
    if (o->f5c >= 30) {
        o->f5c = 0;
    }
    f32 k = 512.0f;
    o->f9c = (s32)((f32)o->f9c + k);
    o->fa4 = (s32)((f32)o->fa4 + k);
    o->fa0 = (s32)((546.0f) * sin_table_lookup(o->fa4));
    o->fac = (3.0f) * sin_table_lookup(o->f9c) + (2.0f);
    if (check_flag_or_state__15TObjBoss2TunnelFi(o) != 0) {
        o->fa8 = (o->fa0 * 2) / 3;
    } else {
        o->fa8 = o->fa0 / 2;
    }
    switch (o->f64) {
    case 0:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) != 0) {
            if (is_flag_set__15TObjBoss2TunnelFv(o) != 0) {
                o->f94 = (-1.0f);
            } else {
                o->f94 = (1.0f);
            }
            o->f64 = 1;
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, (0.1f), (-0.1f), (1.5e+02f), (5.0f), (2.0f));
            o->f98 = (0.0f);
        }
        break;
    case 1:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) == 0) {
            o->f64 = 3;
            tmp = get_random_float__8TObjFishFv(o->f98);
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, (0.1f), (-0.1f), o->f98, -update_position__15TObjBoss2TunnelFPv(o->f68), (2.0f));
        } else {
            if (advance_phase__15TObjBoss2TunnelFPv(o->f68, &tmp) != 0) {
                o->f64 = 2;
            }
            o->f98 = tmp * o->f94;
        }
        break;
    case 2:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) == 0) {
            o->f64 = 3;
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, (0.1f), (-0.1f), (1.5e+02f), (0.0f), (2.0f));
        }
        break;
    case 3:
        if (advance_phase__15TObjBoss2TunnelFPv(o->f68, &tmp) != 0) {
            o->f98 = (0.0f);
            o->f64 = 0;
        } else {
            o->f98 = o->f94 * ((1.5e+02f) - tmp);
        }
        break;
    }
    switch (o->f24) {
    case 0:
        set_global_flag_100__15TObjBoss2TunnelFv();
        if (TObjBoss2Tunnel__global_flags & 0x100) {
            TObjBoss2Tunnel__global_flags &= ~0x100;
            o->f24 = 1;
        }
        break;
    case 1:
        o->f20 += (0.05f);
        if (o->f20 > lbl_805D85B0) {
            o->f20 = lbl_805D85B0;
        }
        o->f1c += o->f20;
        o->f60 += o->f20;
        if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            o->f28++;
            if (o->f28 >= 6) {
                o->f28 = 0;
                copy_ring_buffer_window__15TObjBoss2TunnelFPv(o);
                o->f24 = 2;
                o->fb0 = update_first_active_fog__8TFogCtrlFv();
            } else {
                init_queue_from_start__15TObjBoss2TunnelFPv(o);
            }
        }
        break;
    case 2: {
        o->f20 += (0.05f);
        if (o->f20 > lbl_805D85B0) {
            o->f20 = lbl_805D85B0;
        }
        o->f1c += o->f20;
        if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            o->f28++;
            if (o->f28 >= 31) {
                o->f28 = 0;
            }
            copy_ring_buffer_window__15TObjBoss2TunnelFPv(o);
        }
        if (TObjBoss2Tunnel__global_flags & 0x200) {
            void *p;
            TObjBoss2Tunnel__global_flags &= ~0x200;
            o->f24 = 3;
            o->f44 = 0;
            o->f50 = (4.4e+03f) - ((0.5f) * (o->f20 * o->f20)) / (0.02f);
            o->f4c = o->f1c;
            o->f54 = o->f20;
            o->f48 = 0;
            p = __nw__7TObjectFUl(0x24);
            if (p != 0) {
                init__15TObjBoss2TunnelFPv(p, o);
            }
        }
        o->fd8--;
        if (o->fd8 <= 0) {
            Vec_8003B6E8 v;
            void *p;
            v.x = (2e+02f) * rand_signed_unit();
            v.y = (9e+01f) * ((3.0517578e-05f) * (f32)rand()) + (1e+01f);
            v.z = (6e+02f);
            p = __nw__7TObjectFUl(0x30);
            if (p != 0) {
                __ct__13TObjBoss2DustFv(p, tl_05, &v);
            }
            o->fd8 = 10;
        }
        break;
    }
    case 3:
        flag = 0;
        prev = o->f4c;
        if ((f32)o->f48 <= (0.0f)) {
            o->f4c = prev + o->f54;
            if (o->f4c > o->f50) {
                o->f48 = 1;
                o->f50 = o->f4c;
                play_sound_effect(0x4003A80E, 0, 0, 0);
            } else {
                play_persistent_sound(0x4003B20C, o, 0, 0, 0);
            }
        } else {
            f32 lim;
            o->f4c = (f32)o->f48 * (o->f54 - (0.01f) * (f32)o->f48) + o->f50;
            { f32 one = 1.0f; o->f48 = (s32)((f32)o->f48 + one); }
            lim = o->f54 / (0.02f);
            if ((f32)o->f48 >= lim) {
                o->f48 = (s32)lim;
                o->f58 = 0;
                o->f24 = 4;
            }
        }
        o->f20 = o->f4c - prev;
        o->f1c += o->f4c - prev;
        if (o->f34 == 6 || o->f38 == 6) {
            if (o->f1c >= 700.0f) {
                o->f1c -= 700.0f;
                flag = 1;
            }
        } else if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            flag = 1;
        }
        if (flag) {
            shift_queue_push_next__15TObjBoss2TunnelFPv(o);
        }
        break;
    case 4:
        break;
    }
    if (o->f24 == 1 || o->f24 == 2) {
        play_persistent_sound(0x4003B20C, o, 0, 0, 0);
    }
    update_particles__15TObjBoss2TunnelFPv((S_8003C108 *)o);
    if (TObjBoss2Tunnel__global_flags & 2) {
        TObjBoss2Tunnel__global_flags &= ~2;
        TObjBoss2Tunnel__global_flags |= 1;
    } else if (TObjBoss2Tunnel__global_flags & 4) {
        TObjBoss2Tunnel__global_flags &= ~4;
        TObjBoss2Tunnel__global_flags &= ~1;
    }
    switch (o->fb4) {
    case 0:
        if (TObjBoss2Tunnel__global_flags & 0x400) {
            TObjBoss2Tunnel__global_flags &= ~0x400;
            o->fb4 = 1;
            o->fb8 = 0;
            o->fbc = 0;
            enable_fog__15TObjBoss2TunnelFv(o);
        }
        break;
    case 1:
        o->fb8++;
        if (lbl_80483480[o->fbc] <= o->fb8) {
            o->fb8 = 0;
            o->fbc++;
            if (o->fbc & 1) {
                enable_fog__15TObjBoss2TunnelFPv(o);
            } else {
                enable_fog__15TObjBoss2TunnelFv(o);
                play_sound_effect(0x4003A80B, 0, 0, 0);
                if (lbl_80483480[o->fbc] == -1) {
                    o->fb4 = 2;
                }
            }
        }
        break;
    case 2:
        if (TObjBoss2Tunnel__global_flags & 0x800) {
            TObjBoss2Tunnel__global_flags &= ~0x800;
            o->fb4 = 3;
            o->fb8 = 0;
            o->fbc = 0;
            enable_fog__15TObjBoss2TunnelFPv(o);
        }
        break;
    case 3:
        o->fb8++;
        if (lbl_80483480[o->fbc] <= o->fb8) {
            o->fbc++;
            o->fb8 = 0;
            if (o->fbc & 1) {
                enable_fog__15TObjBoss2TunnelFv(o);
            } else {
                enable_fog__15TObjBoss2TunnelFPv(o);
                play_sound_effect(0x4003A80B, 0, 0, 0);
                if (lbl_80483480[o->fbc] == -1) {
                    o->fb4 = 0;
                }
            }
        }
        break;
    }
    if (is_active__15TObjBoss2TunnelFv() == 0) {
        f32 d = o->f1c;
        Col_8003B6E8 *a = &lbl_80483400[o->f34];
        Col_8003B6E8 *b = &lbl_80483400[o->f38];
        if (d <= (2e+02f)) {
            TObjBoss2Tunnel__sub_801339EC(a->r, a->g, a->b);
        } else if (d <= (4e+02f)) {
            f32 u;
            f32 t;
            t = (d - (2e+02f)) / (2e+02f);
            u = (1.0f) - t;
            TObjBoss2Tunnel__sub_801339EC(a->r * u + b->r * t, a->g * u + b->g * t, a->b * u + b->b * t);
        } else {
            TObjBoss2Tunnel__sub_801339EC(b->r, b->g, b->b);
        }
    } else {
        TObjBoss2Tunnel__sub_801339EC(lbl_80483470->r, lbl_80483470->g, lbl_80483470->b);
    }
}
#pragma pop

void update_particles__15TObjBoss2TunnelFPv(S_8003C108 *o) {
    f32 t;
    s32 i;
    u32 r;
    u32 p;
    if (o->f20 < lbl_805D85B0) {
        t = (-5.0f) * (o->f20 / lbl_805D85B0);
    } else {
        t = (-5.0f);
    }
    for (i = 0; i < 4; i++) {
        p = o->ptr[i];
        if (p == 0) {
            r = create_particle__20TAdLoadQuestPrtTxtGCFPvii(&lbl_80483590[i], 0x171, 1);
            if (r != 0) {
                enable__13TParticleCtrlFPv((void *)r);
                o->ptr[i] = r;
            }
        } else {
            release_children__15TObjBoss2TunnelFPvf(p, t);
        }
    }
}

}

#undef release_children__15TObjBoss2TunnelFPvf
#undef TObjBoss2Tunnel__sub_8003C21C
#undef check_flag_or_state__15TObjBoss2TunnelFi
#undef is_flag_set__15TObjBoss2TunnelFv
#undef copy_ring_buffer_window__15TObjBoss2TunnelFPv
#undef init_queue_from_start__15TObjBoss2TunnelFPv
#undef shift_queue_push_next__15TObjBoss2TunnelFPv
#undef __nw__7TObjectFUl
#undef init__15TObjBoss2TunnelFPv
#undef enable_fog__15TObjBoss2TunnelFv
#undef enable_fog__15TObjBoss2TunnelFPv

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_8003C21C { u8 pad[0x1f]; u8 x; };

struct O_8003C21C { u8 pad[0x5c]; s32 p; };

extern "C" {
s32 TObjBoss2Tunnel__sub_8003C1C8(void);
}

extern "C" {

s32 TObjBoss2Tunnel__sub_8003C1C8(void) {
    return ((u32) TObjBoss2Tunnel__global_flags >> 0xDU) & 1;
}

s32 is_flag_set__15TObjBoss2TunnelFv(s32 _w0) {
    return ((u32) TObjBoss2Tunnel__global_flags >> 0xCU) & 1;
}
s32 check_flag_or_state__15TObjBoss2TunnelFi(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = TObjBoss2Tunnel__sub_8003C1C8();
    temp_r3 = is_flag_set__15TObjBoss2TunnelFv((s32)(arg0));
    return temp_r3 | temp_r31;
}
u8 *TObjBoss2Tunnel__sub_8003C21C(O_8003C21C *self) {
    if (self->p == 0) {
        return 0;
    }
    return &((S_8003C21C *)self->p)->x;
}

}

#define TObjBoss2Tunnel__global_flags (*(s32 *)&TObjBoss2Tunnel__global_flags)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8003C374 { u8 pad[0x28]; s32 start; s32 q[6]; };

struct Obj_8003C2A0 { u8 pad[0x2c]; s32 q[6]; s32 idx; };

struct S_8003C2E4 {
    u8 pad0[0x28];
    s32 f28;
    s32 t[6];
};

extern "C" {
extern s32 lbl_804834BC[];
extern s32 lbl_804834D4[];
extern s32 lbl_80483550[];
extern s32 lbl_804834D4[];
}

extern "C" {

M2C_UNK update_all__8TFogCtrlFii(s32, M2C_UNK);

void enable_fog__15TObjBoss2TunnelFPv(void *arg0) {
    update_all__8TFogCtrlFii((s32)(M2C_FIELD(arg0, s32 *, 0xB0)), (M2C_UNK)(1));
    TObjBoss2Tunnel__global_flags |= 4;
}

void enable_fog__15TObjBoss2TunnelFv(void) {
    update_all__8TFogCtrlFii((s32)(0xB), (M2C_UNK)(1));
    TObjBoss2Tunnel__global_flags |= 2;
}

void shift_queue_push_next__15TObjBoss2TunnelFPv(Obj_8003C2A0 *self) {
    s32 i;
    for (i = 0; i < 5; i++) {
        self->q[i] = self->q[i + 1];
    }
    self->q[5] = lbl_80483550[self->idx++];
}

void copy_ring_buffer_window__15TObjBoss2TunnelFPv(S_8003C2E4 *o) {
    s32 idx = o->f28;
    s32 n = 6;
    s32 i;
    s32 j;
    if (idx + 6 > 0x1F) {
        n = 0x1F - idx;
    }
    s32 k = idx;
    for (i = 0; i < n; i++, k++) {
        o->t[i] = lbl_804834D4[k];
    }
    for (j = 0; i < 6; i++, j++) {
        o->t[i] = lbl_804834D4[j];
    }
}

void init_queue_from_start__15TObjBoss2TunnelFPv(Obj_8003C374 *self) {
    s32 k = self->start;
    s32 n = 6 - k;
    s32 i;
    s32 j;
    for (i = 0; i < n; i++) {
        self->q[i] = lbl_804834BC[k++];
    }
    for (j = 0; i < 6; i++, j++) {
        self->q[i] = lbl_804834D4[j];
    }
}

}

#undef TObjBoss2Tunnel__global_flags
#define boss2_tunnel_instance (*(void * *)&boss2_tunnel_instance)
#define TObjBoss2Tunnel__global_flags (*(s32 *)&TObjBoss2Tunnel__global_flags)
#define init_queue_from_start__15TObjBoss2TunnelFPv ((void (*)(Tunnel_8003C45C *))init_queue_from_start__15TObjBoss2TunnelFPv)
#define __nw__7TObjectFUl ((void * (*)(int))__nw__7TObjectFUl)
#define __ct__7TObjectFP7TObject ((void (*)(void *))__ct__7TObjectFP7TObject)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tunnel_8003C45C {
    s32 name;
    u8 pad4[0x18 - 4];
    void *vt;
    f32 f1C;
    f32 f20;
    s32 i24;
    s32 i28;
    u8 pad2C[0x44 - 0x2C];
    s32 i44;
    u8 pad48[4];
    f32 f4C;
    f32 f50;
    f32 f54;
    s32 i58;
    s32 i5C;
    f32 f60;
    s32 i64;
    u8 sub68[0x94 - 0x68];
    f32 f94;
    f32 f98;
    s32 i9C;
    s32 iA0;
    s32 iA4;
    s32 iA8;
    f32 fAC;
    s32 iB0;
    s32 iB4;
    s32 iB8;
    s32 iBC;
    void *splash[2];
    s32 c8[4];
    s32 d8;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;
void update_fade_out_and_destroy__15TObjBoss2TunnelFPv(u8 *arg0);
void TObjBoss2Tunnel__sub_8003C5F8(void);
void TObjBoss2Tunnel__sub_8003C610(void);
u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 *arg4);
void reset_floats__15TObjBoss2TunnelFPv(void *a0);
s32 reset_floats__15TObjBoss2TunnelFi(s32 arg0);
extern u8 lbl_80435E90[];
extern u8 lbl_80483578[];
extern M2C_UNK __vt__15TObjBoss2Tunnel[];
extern s32 lbl_805D2708;
void *TObjBoss2Tunnel__ct(void *arg0, void *arg1);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003C648(void);
void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1);
void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void clear_global_flag_3000__15TObjBoss2TunnelFv(void);
void clear_target_flags__15TObjBoss2TunnelFv(void);
void *create__15TObjBoss2TunnelFv(void);
void set_global_flag_200__15TObjBoss2TunnelFv(void);
void set_global_flag_400__15TObjBoss2TunnelFv(void);
void set_global_flag_800__15TObjBoss2TunnelFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void dt__15TObjBoss2TunnelFis(void *, int);

extern M2C_UNK __vt__15TObjBoss2Tunnel[];

void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss2Tunnel;
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x68, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjBoss2Tunnel__ct(void *arg0, void *arg1) {
    Tunnel_8003C45C *self = (Tunnel_8003C45C *)arg0;
    s32 i;
    s32 j;
    __ct__7TObjectFP7TObject(arg0);
    self->vt = ((s32 *)&__vt__15TObjBoss2Tunnel);
    reset_floats__15TObjBoss2TunnelFi((s32)self->sub68);
    self->name = lbl_805D2708;
    self->i24 = 0;
    TObjBoss2Tunnel__global_flags = 0;
    self->f1C = (0.0f);
    self->f20 = (0.0f);
    self->i28 = 0;
    init_queue_from_start__15TObjBoss2TunnelFPv(self);
    self->i5C = 0;
    self->f60 = (0.0f);
    self->i44 = 0;
    self->f4C = (0.0f);
    self->f50 = (0.0f);
    self->f54 = (0.0f);
    self->i58 = 0;
    self->i64 = 0;
    reset_floats__15TObjBoss2TunnelFPv(self->sub68);
    self->f94 = (1.0f);
    self->f98 = (0.0f);
    self->iB0 = 0x21;
    self->iB4 = 0;
    self->iB8 = 0;
    self->iBC = 0;
    self->i9C = 0;
    self->iA4 = 0;
    self->iA0 = 0;
    self->iA8 = 0;
    self->fAC = (0.0f);
    for (i = 0; i < 2; i++) {
        u8 *o = (u8 *)__nw__7TObjectFUl(0x40);
        if (o != NULL) {
            o = TObjBoss2RaftSplash__ct(o, (u8 *)self, lbl_80483578 + i * 0xC, lbl_80435E90 + i * 0xC, &self->f20);
        }
        self->splash[i] = o;
    }
    for (j = 0; j < 4; j++) {
        self->c8[j] = 0;
    }
    self->d8 = 0xA;
    return self;
}

void set_global_flag_200__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__global_flags |= 0x200;
}

void set_global_flag_100__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__global_flags |= 0x100;
}

s32 is_active__15TObjBoss2TunnelFv(void) {
    return TObjBoss2Tunnel__global_flags & 1;
}

void clear_global_flag_3000__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__global_flags &= 0xFFFFCFFF;
}

void TObjBoss2Tunnel__sub_8003C5F8(void) {
    (*(u32 *)&TObjBoss2Tunnel__global_flags) |= 0x2000;
    (*(u32 *)&TObjBoss2Tunnel__global_flags) &= ~0x1000;
}

void TObjBoss2Tunnel__sub_8003C610(void) {
    (*(u32 *)&TObjBoss2Tunnel__global_flags) |= 0x1000;
    (*(u32 *)&TObjBoss2Tunnel__global_flags) &= ~0x2000;
}

void set_global_flag_800__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__global_flags |= 0x800;
}

void set_global_flag_400__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__global_flags |= 0x400;
}

void TObjBoss2Tunnel__sub_8003C648(void) {  }

extern void *tl_02;

void *create__15TObjBoss2TunnelFv(void) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjBoss2Tunnel__ct((void *)(o), (void *)(tl_02));
    }
    return o;
}

extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;

void clear_target_flags__15TObjBoss2TunnelFv(void) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    TObjBoss2Tunnel__global_flags = 0;
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(boss2_tunnel_instance, void **, 0x42C), void **, 0xA8), void **, 0x2C), s32 **, 0x30);
    lbl_805D4C08 = temp_r3;
    temp_r3_2 = M2C_FIELD(temp_r3, s32 **, 0x30);
    lbl_805D4C04 = temp_r3_2;
    *temp_r3_2 &= 0xFFFFFFFE;
    *lbl_805D4C08 &= 0xFFFFFFFE;
}

extern M2C_UNK lbl_804835D8[];

#pragma push
#pragma opt_common_subs off
void update_fade_out_and_destroy__15TObjBoss2TunnelFPv(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0x1E) {
        M2C_FIELD(arg0, f32 *, 0x20) += (1.0f);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
        if (temp_f1 > (7e+01f)) {
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (7e+01f);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD((*(u8 * *)&lbl_805D4C04), f32 *, 8) = (f32) -temp_f1;
        M2C_FIELD((*(u8 * *)&lbl_805D4C08), f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    }
}
#pragma pop

void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804835D8[];

void *init__15TObjBoss2TunnelFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (0.0f);
    return arg0;
}

}

#undef init_queue_from_start__15TObjBoss2TunnelFPv
#undef __nw__7TObjectFUl
#undef __ct__7TObjectFP7TObject

#undef TObjBoss2Tunnel__global_flags
#undef boss2_tunnel_instance
