#include "types.h"
#include "pso/player/TUnk_804E21F8.h"

struct Vec_802D52E8 { f32 x, y, z; };

extern "C" {
void * init_state_513__10TObjPlayerFPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_state_513__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_802D5B78(void *a, void *b);
int do_action_447__10TObjPlayerFPv(void* p);
void do_action_447_from_packet__10TObjPlayerFPvPv(void *self, void *arg);
}

extern "C" {

void *item_equip_variant_deleting_dtor_802D5214(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D526C(void *arg0, s16 arg1);
int do_action_447__10TObjPlayerFPv(void* p);
int spawn_particle_effect(void*, int);
void TItemWeapon__ct(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_802D5214(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D526C(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_802D62F0(void *, int);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804E1BB0[];

void *init_state_513__10TObjPlayerFPv(void *arg0, s32 _w1, void * _w2) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1BB0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 513);
    return arg0;
}

extern s32 lbl_804E1BB0[];

u8 *create_state_513__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_state_513__10TObjPlayerFPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
void *item_equip_variant_deleting_dtor_802D5214(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1BB0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E1CA8[];

void *item_equip_variant_deleting_dtor_802D526C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1CA8;
        item_equip_variant_deleting_dtor_802D62F0(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

int do_action_447__10TObjPlayerFPv(void* p) { return spawn_particle_effect(p, 447); }
void do_action_447_from_packet__10TObjPlayerFPvPv(void *self, void *arg) {
    Vec_802D52E8 v;
    TObjPlayer__sub_802D5B78(arg, &v);
    do_action_447__10TObjPlayerFPv(&v);
}

}

namespace P802D5318 {

extern "C" {

void setup_radar_marker__10TObjPlayerFPvPv(void *arg0, void *arg1);
void* setup_state__10TObjPlayerFPv(void* a0);
s32 drain_owner_hp_fraction__10TObjPlayerFf(void *, f32);
int init_state_445__10TObjPlayerFPv(void);
s32 is_mode_two_and_ready__10TObjPlayerFv(void *);
s32 set_radar_marker_params__10TObjPlayerFPvPv();
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

extern const f32 lbl_805DE788;
extern const f32 lbl_805DE78C;

void setup_radar_marker__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    set_radar_marker_params__10TObjPlayerFPvPv();
    if (is_mode_two_and_ready__10TObjPlayerFv(arg0) != 0) {
        drain_owner_hp_fraction__10TObjPlayerFf(arg0, lbl_805DE788);
        *(s32 *)((s8 *)arg1 + 0x10) = 0xA;
        *(s32 *)((s8 *)arg1 + 0x44) = (s32) *(s32 *)((s8 *)arg0 + 0x188);
        *(f32 *)((s8 *)arg1 + 0x4C) = lbl_805DE78C;
    }
}

    extern unsigned char fn_80109974[];
    extern unsigned char do_action_447_from_packet__10TObjPlayerFPvPv[];
    extern unsigned char lbl_804E1CA8[];
    extern const float lbl_805DE790;
void* setup_state__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1CA8; *(float*)((char*)a0 + 0x200) = lbl_805DE790; set_status_flags__10TObjPlayerFPvUi(a0, (void*)32); *(int*)((char*)a0 + 0x208) = (int)do_action_447_from_packet__10TObjPlayerFPvPv; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; return a0; }

}

}

namespace P802D53E4 {

struct V_802D5478 { s32 a; s32 b; s32 c; };

struct P_802D5478 { f32 x; f32 y; f32 z; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *);
void spawn_hit_particles_at_vec__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TObjPlayer__sub_802D5B78(void *, void *);
void spawn_hit_particles_at__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
extern const f64 lbl_804725B8[];
extern const f32 lbl_805DE794;
f64 atan2_float(f32, f32);
void set_position_xy__10TObjPlayerFff(f32, f32);
void create_timed_particle_emitter(s32, s32, s32, s32);
u32 create_timed_particle_emitter_with_angles(s32, void *, s32, s32, s32, s32);
void spawn_hit_particles__10TObjPlayerFiPv(s32 arg0, const P_802D5478 *arg1);
}

extern "C" {

void* init_needle_effect__10TObjPlayerFPv(void* a0);
void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1);
int init_state_445__10TObjPlayerFPv(void);
s32 set_radar_marker_params__10TObjPlayerFPvPv();

void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    set_radar_marker_params__10TObjPlayerFPvPv();
    *(s32 *)((s8 *)arg1 + 0x50) = 0x8000;
}

    extern unsigned char fn_80109974[];
    extern unsigned char create_needle_effect[];
    extern unsigned char lbl_804E20FC[];
    extern const float lbl_805DE78C;
void* init_needle_effect__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E20FC; *(float*)((char*)a0 + 0x200) = lbl_805DE78C; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; *(int*)((char*)a0 + 0x208) = (int)create_needle_effect; return a0; }

void spawn_hit_particles__10TObjPlayerFiPv(s32 arg0, const P_802D5478 *arg1) {
    s32 v[3];
    create_timed_particle_emitter(arg0, 0x1EF, 0, 0xF);
    v[0] = 0;
    v[1] = (s32)(lbl_804725B8[0] * atan2_float(arg1->x, arg1->z));
    v[2] = 0;
    if (create_timed_particle_emitter_with_angles(arg0, v, 0x1B8, 0, 0xF, 4) != 0U) {
        set_position_xy__10TObjPlayerFff(lbl_805DE794, lbl_805DE794);
    }
}

void spawn_hit_particles_at_vec__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    VecCopy__FP3VecPC3Vec((void *) (&sp8));
    spawn_hit_particles__10TObjPlayerFiPv((s32)((void *) (&sp8)), (const P_802D5478 *)((void *) (arg2)));
}
void spawn_hit_particles_at__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    TObjPlayer__sub_802D5B78((void *) (arg1), (void *) (&sp8));
    spawn_hit_particles__10TObjPlayerFiPv((s32)((void *) (&sp8)), (const P_802D5478 *)((void *) (arg2)));
}

}

}

struct O_802D576C { u8 pad[0x24a]; s16 v; };

typedef struct E_802D56F0 { u8 p[0xC]; } E_802D56F0;

typedef struct S_802D56F0 {
    u8 pad0[0xF4];
    s32 fF4;
    u8 padF8[0x20C - 0xF8];
    E_802D56F0 e[1];
} S_802D56F0;

struct Sub_802D564C { u8 pad0[0x60]; s32 f60; };

struct Ent_802D564C { s32 a; s32 b; s32 c; };

struct VBase_802D564C { char pad[0x18]; };

struct Pl_802D564C : VBase_802D564C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60(void *);
    u8 pad1c[0xF0 - 0x1C];
    Sub_802D564C *f0F0;
    s32 f0F4;
    u8 padF8[0x20C - 0xF8];
    Ent_802D564C arr[5];
    s16 f248;
    s16 f24A;
    u8 pad24C[4];
    s32 f250;
};

struct V_802D577C { f32 x, y, z; };

extern "C" {
s32 send_6x61_activate_mag_effect(void *, s16);
void tick_mag_effect_counter__10TObjPlayerFPv(void *arg0);
s32 spawn_item__10TObjPlayerFi(void *);
void spawn_item_from_arg__10TObjPlayerFii(s32 arg0, s32 arg1);
void TObjPlayer__sub_802D576C(O_802D576C *self, s32 x);
s32 get_flag_40__8TItemMagFv(void *);
void draw_weapon_model(void);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void draw_ginja_object(s32);
void draw_weapon_parts__10TObjPlayerFPv(u8 *arg0);
void fire_shot_at_target__11TItemWeaponFv(void *, void *, s32, s32);
void fire_shots_spread__10TObjPlayerFPv(Pl_802D564C *arg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 rotate_matrix_about_axis(int, void *, int);
s32 set_matrix_identity(int);
s32 transform_point_by_current_matrix(void *, void *);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
extern V_802D577C lbl_8047259C;
extern V_802D577C player_pb_zero_vec_block;
void sub_802D577C__13TUnk_804E21F8Fv(void *arg0_);
}

extern "C" {

void *enter_state_341__10TObjPlayerFPv(void *arg0);
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1);
int set_radar_marker_params__10TObjPlayerFPvPv(void);
void init_state_445__10TObjPlayerFPv(void *);

extern s32 lbl_804E2000[];
extern s32 spawn_hit_particles_at__10TObjPlayerFiii[];
extern s32 spawn_hit_particles_at_vec__10TObjPlayerFiii[];

void *enter_state_341__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E2000;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 341;
    *(s32 **)((s8 *)arg0 + 0x208) = spawn_hit_particles_at__10TObjPlayerFiii;
    *(s32 **)((s8 *)arg0 + 0x204) = spawn_hit_particles_at_vec__10TObjPlayerFiii;
    return arg0;
}

    extern const float lbl_805DE790;
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1) { set_radar_marker_params__10TObjPlayerFPvPv(); *(float*)((char*)a1 + 0x38) = lbl_805DE790; }

void spawn_item_from_arg__10TObjPlayerFii(s32 arg0, s32 arg1) {
    spawn_item__10TObjPlayerFi((void *) (arg1));
}

void fire_shots_spread__10TObjPlayerFPv(Pl_802D564C *arg0) {
    Ent_802D564C *p;
    s32 v;
    s32 step;
    s32 n;
    s32 cnt;
    p = arg0->arr;
    cnt = arg0->f24A;
    n = cnt;
    v = arg0->f250 - arg0->f0F0->f60;
    step = 0x10000 / cnt;
    while (n != 0) {
        fire_shot_at_target__11TItemWeaponFv(arg0, p++, arg0->f0F4, v);
        v += step;
        n--;
    }
    arg0->m60((u8 *)arg0->f0F0 + 0x2FC);
    arg0->f24A = 0;
    arg0->f248 = 0x87;
}

void draw_weapon_parts__10TObjPlayerFPv(u8 *arg0) {
    E_802D56F0 *p;
    s32 n;
    draw_weapon_model();
    if (get_flag_40__8TItemMagFv(arg0) == 0) {
        n = *(s16 *)(arg0 + 0x24A);
        p = ((S_802D56F0 *)arg0)->e;
        while (n != 0) {
            push_matrix();
            post_translate_matrix(p++);
            rotate_matrix_x(0, -0x4000);
            draw_ginja_object(((S_802D56F0 *)arg0)->fF4);
            pop_matrix();
            n--;
        }
    }
}

void TObjPlayer__sub_802D576C(O_802D576C *self, s32 x) {
    if (x < 5) self->v = x;
}

void TUnk_804E21F8::sub_802D577C() {
    V_802D577C *pb;
    V_802D577C *pa;
    u8 *p;
    u8 *q;
    s32 ang2;
    s16 n;
    u8 *arg0 = (u8 *) this;
    s32 ang;
    s32 step;
    s32 step2;
    s32 cnt;
    n = *(s16 *)((s8 *)arg0 + 0x24A);
    if (n != 0) {
        ang = *(s32 *)((s8 *)arg0 + 0x250);
        cnt = n;
        p = arg0 + 0x20C;
        q = *(u8 **)((s8 *)arg0 + 0xF0) + 0x2FC;
        pa = &lbl_8047259C;
        pb = &player_pb_zero_vec_block;
        ang2 = 0x31C7;
        step = 0x10000 / n;
        step2 = 0x238E / n;
        while (cnt != 0) {
            V_802D577C a = *pa;
            a.z = *(f32 *)((s8 *)arg0 + 0x24C);
            V_802D577C b = *pb;
            b.x = cos_table_lookup(ang2);
            b.y = sin_table_lookup(ang2);
            push_matrix();
            set_matrix_identity(0);
            post_translate_matrix(q);
            rotate_matrix_about_axis(0, &b, ang);
            transform_point_by_current_matrix(&a, p);
            pop_matrix();
            ang += step;
            ang2 += step2;
            cnt--;
            p += 0xC;
        }
        *(s32 *)((s8 *)arg0 + 0x250) += 0x38E;
    }
}

void tick_mag_effect_counter__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x248);
    temp_r4 += 1;
    *(s16 *)((s8 *)arg0 + 0x248) = temp_r4;
    if ((s16) temp_r4 == 0x96) {
        temp_r4_2 = *(s16 *)((s8 *)arg0 + 0x24A);
        if (temp_r4_2 < 5) {
            *(s16 *)((s8 *)arg0 + 0x24A) = (s16) (temp_r4_2 + 1);
            send_6x61_activate_mag_effect((void *)(arg0), *(s16 *)((s8 *)arg0 + 0x24A));
        }
        *(s16 *)((s8 *)arg0 + 0x248) = 0;
    }
    sub_802D577C__13TUnk_804E21F8Fv((void *)(arg0));
}

}

namespace P802D5900 {

struct V3_802D595C { f32 x; f32 y; f32 z; };

struct S_802D595C {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x204 - 0x1C];
    void *f204;
    void *f208;
    V3_802D595C v[5];
    s16 f248;
    s16 f24A;
};

extern "C" {
s32 spawn_item__10TObjPlayerFi(void *);
void spawn_item_thunk__10TObjPlayerFii(s32 arg0, s32 arg1);
extern u8 lbl_804E21F8[];
extern const f32 lbl_805DE798;
void init_state_445__10TObjPlayerFPv(void *);
void alloc_and_init__10TObjPlayerFlll(s32, s32, s32);
void create_and_init_effect__10TObjPlayerFlPUll(s32, void *, s32);
S_802D595C *init_mag_effect_state__10TObjPlayerFPv(S_802D595C *arg0);
}

extern "C" {

void reset_animation_state__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_8017A1A4(s32, s32);
s32 sub_802D577C__13TUnk_804E21F8Fv(void *);

extern f32 lbl_805DE790;

void reset_animation_state__10TObjPlayerFPv(void *arg0) {
    *(s16 *)((s8 *)arg0 + 0x248) = 0;
    *(s16 *)((s8 *)arg0 + 0x24A) = 0;
    *(f32 *)((s8 *)arg0 + 0x24C) = (f32) (lbl_805DE790 + TObjPlayer__sub_8017A1A4(*(s32 *)((s8 *)arg0 + 0xF0), 0));
    *(s32 *)((s8 *)arg0 + 0x250) = 0;
    sub_802D577C__13TUnk_804E21F8Fv(arg0);
}

S_802D595C *init_mag_effect_state__10TObjPlayerFPv(S_802D595C *arg0) {
    s32 i;
    V3_802D595C *p;
    init_state_445__10TObjPlayerFPv(arg0);
    arg0->vt = lbl_804E21F8;
    arg0->f248 = 0;
    arg0->f24A = 0;
    p = arg0->v;
    for (i = 0; i < 5; i++) {
        p->x = lbl_805DE798;
        p->y = lbl_805DE798;
        p->z = lbl_805DE798;
        p++;
    }
    arg0->f204 = (void *)alloc_and_init__10TObjPlayerFlll;
    arg0->f208 = (void *)create_and_init_effect__10TObjPlayerFlPUll;
    return arg0;
}

void spawn_item_thunk__10TObjPlayerFii(s32 arg0, s32 arg1) {
    spawn_item__10TObjPlayerFi((void *) (arg1));
}

}

}

extern "C" {

void *init_type_447__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *arg0);
void init_state_445__10TObjPlayerFPv(void *);

extern s32 lbl_804E22F4[];
extern s32 alloc_and_init__10TObjPlayerFlll[];
extern s32 create_and_init_effect__10TObjPlayerFlPUll[];

void *init_type_447__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E22F4;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 447;
    *(s32 **)((s8 *)arg0 + 0x204) = alloc_and_init__10TObjPlayerFlll;
    *(s32 **)((s8 *)arg0 + 0x208) = create_and_init_effect__10TObjPlayerFlPUll;
    return arg0;
}

extern s32 lbl_804E1F04[];
extern s32 TItemWpnCardEffect__sub_8032E588[];
extern s32 create_aux_object__10TObjPlayerFlPUll[];

void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1F04;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 341;
    *(s32 **)((s8 *)arg0 + 0x204) = TItemWpnCardEffect__sub_8032E588;
    *(s32 **)((s8 *)arg0 + 0x208) = create_aux_object__10TObjPlayerFlPUll;
    return arg0;
}

}

namespace P802D5ABC {

extern "C" {

void* init_vtable_and_field200__10TObjPlayerFPv(void* a0);
void spawn_item__10TObjPlayerFi(s32 arg0);
s32 spawn_particle_effect(s32, s32);
s32 attach_particle_model(s32, s32, s32, s32, s32, f32);
s32 get_data_entry__9TItemLoadFlPl(s32, s32 *);
int init_state_445__10TObjPlayerFPv(void);
s32 lookup_item_data__9TItemLoadFlPl(s32, s32 *);
s32 set_position_xy__10TObjPlayerFff(s32, f32, f32);

    extern unsigned char lbl_804E1E08[];
    extern const float lbl_805DE790;
void* init_vtable_and_field200__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1E08; *(float*)((char*)a0 + 0x200) = lbl_805DE790; return a0; }

extern f32 lbl_805DE78C;
extern f32 lbl_805DE79C;

void spawn_item__10TObjPlayerFi(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    temp_r3 = spawn_particle_effect(arg0, 0x1BF);
    if (temp_r3 != 0) {
        lookup_item_data__9TItemLoadFlPl(0xD, &spC);
        get_data_entry__9TItemLoadFlPl(0xD, &sp8);
        attach_particle_model(temp_r3, spC, sp8, 0, 0, lbl_805DE78C);
        set_position_xy__10TObjPlayerFff(temp_r3, lbl_805DE79C, lbl_805DE79C);
    }
}

}

}

namespace P802D5C0C {

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual s32 m60(s32 *);
    virtual void m61();
    virtual void m62();
    virtual s32 m63(s32, s32 *);
};

#include <stddef.h>
struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual s32 m63(s32, s32 *);
};

struct Stack_80362FB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80362FB4_lbl_80479FC8 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 fire_shot_at_target__11TItemWeaponFv(void *, void *, int, int);
s16 get_validated_attack_stage(void *);
void fire_spread_shot__10TObjPlayerFPv(u8 *arg0);
int test_flags_1b8__10TObjPlayerFUl(void *, u32);
s32 draw_weapon_model(void *);
void draw_weapon_if_not_hidden__10TObjPlayerFPv(u8 *arg0);
s32 check_boss2tunnel_field_f4__10TObjPlayerFv(void *);
s32 get_player_list__10TObjPlayerFv();
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern RecoveredGlobal_80362FB4_lbl_80479FC8 lbl_80472590;
void TObjPlayer__sub_802D5DE0(u8 *arg0);
}

extern "C" {

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0);
void* init_state_445__10TObjPlayerFPv(void* a0);
void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void update_swim_flag__10TObjPlayerFPv(void *arg0);
s32 get_attack_stage__11TItemWeaponFv();
s32 get_weapon_color__11TItemWeaponFPv(s32 *, void *);
int TItemWeapon__ct(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, s32 *);
s32 create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, s32, s32);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    s32 sp8;

    *(f32 *)((s8 *)arg1 + 0x4C) = (f32) *(f32 *)((s8 *)arg0 + 0x200);
    *(s32 *)((s8 *)arg1 + 0x58) = 0xC000;
    *(s32 *)((s8 *)arg1 + 0x40) = (s32) (*(s32 *)((s8 *)arg1 + 0x40) | 2);
    get_weapon_color__11TItemWeaponFPv(&sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1 + 0x60, &sp8);
    *(s32 *)((s8 *)arg1 + 0x74) = (s32) *(s32 *)((s8 *)arg0 + 0x208);
    *(s32 *)((s8 *)arg1 + 0x70) = (s32) *(s32 *)((s8 *)arg0 + 0x204);
}

void update_swim_flag__10TObjPlayerFPv(void *arg0) {
    if (get_attack_stage__11TItemWeaponFv() == 2) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) | 1);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) & 0xFFFFFFFE);
}

extern s32 tl_05;

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0) {
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, *(s32 *)((s8 *)arg0 + 0x1FC));
    }
}

    extern unsigned char TObjPlayer__sub_8032E648[];
    extern unsigned char create_network_object__10TObjPlayerFlPUll[];
    extern unsigned char lbl_804E23F0[];
    extern const float lbl_805DE7A0;

void fire_spread_shot__10TObjPlayerFPv(u8 *arg0) {
    s32 sp8;
    u8 *temp_r3;
    temp_r3 = *(u8 **)((s8 *)arg0 + 0xF0);
    ((VObj_18 *)(temp_r3))->m63(0x30, &sp8);
    if (get_validated_attack_stage((void *) (*(u8 **)((s8 *)arg0 + 0xF0) + 0x7CC)) == 2) {
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0));
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0x1555));
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (-0x1555));
    } else {
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0));
    }
    ((VObj_18 *)(arg0))->m60(&sp8);
}

typedef char RecoveredGlobal_80362FB4_lbl_80479FC8_size[sizeof(RecoveredGlobal_80362FB4_lbl_80479FC8) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802D5DE0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80362FB4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80362FB4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80362FB4, sp10) == 0x8) ? 1 : -1];
    Stack_80362FB4 stack;
    if (get_player_list__10TObjPlayerFv() == 0) {
        stack.sp8 = *(s32 *)((s8 *)(&lbl_80472590.value) + 0);
        stack.spC = *(s32 *)((s8 *)(&lbl_80472590.value) + 4);
        stack.sp10 = *(s32 *)((s8 *)(&lbl_80472590.value) + 8);
        post_translate_matrix((void *) (&stack.sp8));
        rotate_matrix_x((int) (0), (int) (0x18E3));
        if (*(s32 *)((s8 *)arg0 + 0x1f8) & 1) {
            push_matrix();
            rotate_matrix_x((int) (0), (int) (0x2AAA));
            check_boss2tunnel_field_f4__10TObjPlayerFv((void *) (arg0));
            pop_matrix();
            push_matrix();
            rotate_matrix_x((int) (0), (int) (-0x2AAA));
            check_boss2tunnel_field_f4__10TObjPlayerFv((void *) (arg0));
            pop_matrix();
        }
    }
}

void draw_weapon_if_not_hidden__10TObjPlayerFPv(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFUl(arg0, 0x01000000U) == 0U) {
        draw_weapon_model((void *) (arg0));
    }
}

void* init_state_445__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E23F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)3); *(int*)((char*)a0 + 0x1f8) = 0; *(int*)((char*)a0 + 0x1fc) = 445; *(int*)((char*)a0 + 0x204) = (int)TObjPlayer__sub_8032E648; *(int*)((char*)a0 + 0x208) = (int)create_network_object__10TObjPlayerFlPUll; *(float*)((char*)a0 + 0x200) = lbl_805DE7A0; return a0; }

}

}
