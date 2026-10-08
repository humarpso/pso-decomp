#include "pso/misc/RenderFadeState.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018BD00_lbl_804B6DEC {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8018BD00___vt__19TContainerAncient01 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct B_8018BE30 { u8 pad[0x18]; };

struct V_8018BE30 : B_8018BE30 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8018BE98 { u8 pad[0x18]; };

struct V_8018BE98 : B_8018BE98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct Vec_8018BEE4 { f32 x, y, z; };

struct Stack_8018BEE4 {
    f32 out;
    f32 pad;
    Vec_8018BEE4 p;
};

extern "C" {
s32 construct_actor_base__10TObjPlayerFPvPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_state_vectors__19TContainerAncient01FPv(void *);
extern RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 TContainerAncient01__data_804B6DC0;
extern RecoveredGlobal_8018BD00_lbl_804B6DEC lbl_804B6DEC;
extern M2C_UNK __vt__19TContainerAncient01[];
extern s32 lbl_805D3300;
extern s32 TContainerAncient01__data_805D5B90;
extern const f32 lbl_805DBD5C;
u8 *TContainerAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD14;
f32 TContainerAncient01__sub_8018BE30(V_8018BE30 *self);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD14;
f32 TContainerAncient01__vt22(V_8018BE98 *self);
f32 xyz_distance_squared(void *, void *);
void matrix_mult_vec(int, void *, void *);
void project_world_to_screen(int, void *, void *, void *);
extern Vec_8018BEE4 lbl_804FF610;
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DBD60;
extern const f32 lbl_805DBD68;
s32 TObjContainerIdo__vt8(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

void TContainerAncient01__sub_8018BE68(void);
int TContainerAncient01__sub_8018BE6C(void);
int TContainerAncient01__sub_8018BE74(void);
s32 TContainerAncient01__sub_8018BE90(void);
void TContainerAncient01__vt23(void);
int TContainerAncient01__vt24(void);
int TContainerAncient01__vt25(void);
void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1);
int get_table_entry__19TContainerAncient01Fi(int a0);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TContainerAncient01[];

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TContainerAncient01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018BD00_lbl_804B6DEC_size[sizeof(RecoveredGlobal_8018BD00_lbl_804B6DEC) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_8018BD00___vt__19TContainerAncient01_size[sizeof(RecoveredGlobal_8018BD00___vt__19TContainerAncient01) == 0x140 ? 1 : -1];
u8 *TContainerAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_actor_base__10TObjPlayerFPvPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018BD00___vt__19TContainerAncient01 *)&__vt__19TContainerAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3300;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) ((*(u8 * *)&TContainerAncient01__data_805D5B90)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(u8 * *)&TContainerAncient01__data_805D5B90)), (int) (0));
    M2C_FIELD(arg0, M2C_UNK **, 0xD8) = &lbl_804B6DEC.value;
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(arg0, M2C_UNK **, 0xD8)));
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD((*(u8 * *)&TContainerAncient01__data_805D5B90), s32 *, 0x430);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts((void *) (arg0), (void *) (&TContainerAncient01__data_804B6DC0.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) ((M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4) * lbl_805DBD5C) + M2C_FIELD(arg0, f32 *, 0x78));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x74));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    init_state_vectors__19TContainerAncient01FPv((void *) (arg0));
    return arg0;
}
#pragma pop

f32 TContainerAncient01__sub_8018BE30(V_8018BE30 *self) {
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01__sub_8018BE68(void) {  }
int TContainerAncient01__sub_8018BE6C(void) { return 1; }
int TContainerAncient01__sub_8018BE74(void) { return 1; }

    extern int lbl_8050DC68[];
int get_table_entry__19TContainerAncient01Fi(int a0) {  return lbl_8050DC68[a0]; }

extern s32 TContainerAncient01__data_805D5B90;

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__data_805D5B90;
}

f32 TContainerAncient01__vt22(V_8018BE98 *self) {
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01__vt23(void) {  }
int TContainerAncient01__vt24(void) { return 1; }
int TContainerAncient01__vt25(void) { return 1; }
#pragma push
#pragma fp_contract on
s32 TObjContainerIdo__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    Vec_8018BEE4 p;
    f32 out[2];
    matrix_mult_vec(0, arg0 + 0xC0, &p);
    if (xyz_distance_squared(arg0 + 0x38, lbl_805D4DF0 + 0x178) < farg1 * farg1) {
        return 1;
    }
    if (p.z + farg1 * lbl_805DBD60 > 0.0f) {
        return 0;
    }
    if (p.z < -farg0) {
        return 0;
    }
    if (p.x < 0.0f) {
        p.x = lbl_804FF610.x * farg1 + M2C_FIELD(arg0, f32 *, 0x38);
        p.y = lbl_804FF610.y * farg1 + M2C_FIELD(arg0, f32 *, 0x3C);
        p.z = lbl_804FF610.z * farg1 + M2C_FIELD(arg0, f32 *, 0x40);
        project_world_to_screen(0, &p, out, &lbl_804FF610);
        if (out[0] < 0.0f) {
            return 0;
        }
    } else {
        p.x = M2C_FIELD(arg0, f32 *, 0x38) - lbl_804FF610.x * farg1;
        p.y = M2C_FIELD(arg0, f32 *, 0x3C) - lbl_804FF610.y * farg1;
        p.z = M2C_FIELD(arg0, f32 *, 0x40) - lbl_804FF610.z * farg1;
        project_world_to_screen(0, &p, out, &lbl_804FF610);
        if (out[0] > lbl_805DBD68) {
            return 0;
        }
    }
    return 1;
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOuter_8018C06C {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};
struct VMem_8018C06C {
    char pad[0x14];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void *create__16TObjContainerIdoFPv(void *arg0);
u8 *TObjContainerIdo__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void render__16TObjContainerIdoFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_param__8TObjFishFi(u32);

extern u32 lbl_805D5B98;
extern const f32 lbl_805DBD6C;
extern const f32 lbl_805DBD70;

void render__16TObjContainerIdoFv(u8 *arg0) {
    s32 var_r31;

    if (((VOuter_8018C06C*)arg0)->m8(lbl_805DBD6C, lbl_805DBD70) != 0) {
        var_r31 = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
            var_r31 = ((RenderFadeState*)(arg0 + 0xF0))->updateFromCamera((const f32*)(arg0 + 0x38));
        }
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m6();
        }
        {
            extern const u32 lbl_805D5B9C;
            u32 temp = (u32) lbl_805D5B9C;
            if (temp != 0U) {
                set_global_param__8TObjFishFi(temp);
            }
        }
        push_matrix();
        post_translate_matrix(arg0 + 0xC0);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
        ((M2C_UNK (*)(s32, M2C_UNK))get_bml_model)(lbl_805D5B98, 0);
        draw_ginja_object();
        pop_matrix();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
        ((M2C_UNK (*)(s32, M2C_UNK))get_bml_model)(lbl_805D5B98, 1);
        draw_ginja_object();
        pop_matrix();
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m7();
        }
    }
}

struct Vec3_8018C18C { f32 x, y, z; };
struct VObj_8018C18C {
    char pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Ido_8018C18C {
    u8 pad0[0x38];
    Vec3_8018C18C pos;
    u8 pad44[0x5C - 0x44];
    s32 f5c;
    s32 f60;
    u8 pad64[0xC0 - 0x64];
    Vec3_8018C18C c0;
    s32 ids[4];
    s32 dc;
    u32 e0;
    f32 e4;
    f32 e8;
    f32 ec;
    u8 f0[4];
};
u8 is_current_floor_switch_set(u16);
f32 xyz_distance(void *, void *);
s32 push_matrix_from(void *);
void rotate_vector_by_matrix(int, void *, void *);
void play_persistent_sound(s32, void *, void *, s32, s32);
void play_sound_effect(s32, void *, s32, s32);
s32 rand();
void spawn_particle_effect(void *, int);
int update_obstruction_fade(void*);
extern const Vec3_8018C18C lbl_80445110;
extern const Vec3_8018C18C lbl_8044511C;
extern u8 lbl_8058D490[];
extern const f32 TObjContainerIdo__data_805DBD64;
extern const f32 lbl_805DBD6C;
extern const f32 lbl_805DBD74;
extern const f32 lbl_805DBD78;
extern const f32 lbl_805DBD7C;
extern const f32 lbl_805DBD80;
extern const f32 lbl_805DBD84;
extern const f32 lbl_805DBD88;
extern const f32 lbl_805DBD8C;
extern const f32 lbl_805DBD90;

#pragma push
#pragma fp_contract on
void run_task__16TObjContainerIdoFv(Ido_8018C18C *self) {
    f32 prev;
    u32 old;
    s32 i;

    prev = self->e4;
    old = self->e0 & 0xF;
    self->e4 = TObjContainerIdo__data_805DBD64;
    for (i = 0; i < self->dc; i++) {
        if (is_current_floor_switch_set((u16)self->ids[i]) == 1) {
            self->e0 |= 1 << i;
            self->e4 += self->e8;
        } else {
            self->e0 &= ~(1 << i);
        }
    }
    if ((old ^ (self->e0 & 0xF)) != 0) {
        if (prev - self->e4 < TObjContainerIdo__data_805DBD64) {
            self->e0 &= ~0x02000000;
            self->e0 &= ~0x01000000;
        } else {
            self->e0 |= 0x02000000;
            self->e0 &= ~0x01000000;
        }
    }
    self->e0 &= ~0x04000000;
    if (self->e0 & 0x02000000) {
        if (xyz_distance(&self->c0, &self->pos) > self->e4) {
            Vec3_8018C18C v = lbl_80445110;
            v.z = -self->ec;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            rotate_vector_by_matrix(0, &v, &v);
            pop_matrix();
            self->pos.x -= v.x;
            self->pos.y -= v.y;
            self->pos.z -= v.z;
            self->e0 |= 0x04000000;
            play_persistent_sound(0x4B717, self, &self->pos, 0, 0);
        } else if (!(self->e0 & 0x01000000)) {
            play_sound_effect(0x4C118, &self->pos, 0, 0);
            self->e0 |= 0x01000000;
        }
    } else {
        if (xyz_distance(&self->c0, &self->pos) < self->e4) {
            Vec3_8018C18C w = lbl_8044511C;
            w.z = -self->ec;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            rotate_vector_by_matrix(0, &w, &w);
            pop_matrix();
            self->pos.x += w.x;
            self->pos.y += w.y;
            self->pos.z += w.z;
            self->e0 |= 0x04000000;
            play_persistent_sound(0x4B717, self, &self->pos, 0, 0);
        } else if (!(self->e0 & 0x01000000)) {
            play_sound_effect(0x4C118, &self->pos, 0, 0);
            self->e0 |= 0x01000000;
        }
    }
    if (!(self->e0 & 0x08000000) && (self->e0 & 0x04000000)) {
        if (lbl_805DBD74 * (f32)rand() < lbl_805DBD78 && ((VObj_8018C18C *)self)->m8(lbl_805DBD6C, lbl_805DBD7C) != 0) {
            Vec3_8018C18C a;
            Vec3_8018C18C b;
            Vec3_8018C18C out;
            a.x = lbl_805DBD80;
            a.y = lbl_805DBD84;
            a.z = lbl_805DBD88 * (lbl_805DBD74 * (f32)rand()) - lbl_805DBD8C;
            b.x = lbl_805DBD90;
            b.y = lbl_805DBD84;
            b.z = lbl_805DBD88 * (lbl_805DBD74 * (f32)rand()) - lbl_805DBD8C;
            push_matrix_from(lbl_8058D490);
            post_translate_matrix(&self->pos);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            matrix_mult_vec(0, &a, &out);
            spawn_particle_effect(&out, 0x42);
            matrix_mult_vec(0, &b, &out);
            spawn_particle_effect(&out, 0x42);
            pop_matrix();
        }
    }
    update_obstruction_fade(self->f0);
}
#pragma pop

extern void *tl_05;

void *create__16TObjContainerIdoFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjContainerIdo__ct)(o, tl_05, arg0);
    }
    return o;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); };

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_8018CBF0 { u8 pad0[0x84]; s32 id; };

struct Obj_8018CB44 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; u32 f80; s32 f84; };

struct Pkt_8018CB44 { u16 a; u16 b; s32 c; s32 d; s32 e; };

typedef s32 M2C_UNK;
struct VBase_8018C7BC { char pad[0x18]; };

struct VObj_8018C7BC : VBase_8018C7BC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

struct Ido_8018C7BC { u8 pad[0xCC]; s32 ids[4]; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerJungEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2);
extern u32 lbl_805D5B98;
extern u32 lbl_805D5B9C;
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80445130;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804B70A4;
void load_resources__16TObjContainerIdoFv(void);
void load_models__22TObjContainerJungEnemyFPv(void *arg0);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80445430[];
extern char lbl_8044543C[];
void TObjContainerJungEnemy__vt80(Obj_8018CBF0 *self);
s32 get_current_floor();
void send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DBD98;
f32 TObjContainerJungEnemy__vt20(Obj_8018CB44 *arg0);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void init_and_activate__10TObjPlayerFPv(void *);
void init_positions__16TObjContainerIdoFPv(void *);
extern u8 lbl_804B70B4[];
extern M2C_UNK __vt__16TObjContainerIdo[];
extern s32 lbl_805D330C;
extern const f32 TObjContainerIdo__data_805DBD64;
extern const f32 lbl_805DBD7C;
u8 *TObjContainerIdo__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TObjContainerJungEnemy__vt79(u8 *arg0);
void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1);
void free_resources__16TObjContainerIdoFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
void TObjPlayer__sub_800D7C58(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void dt__16TObjContainerIdoFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5B98;
extern u32 lbl_805D5B9C;

void free_resources__16TObjContainerIdoFv(void) {
    if ((u32) lbl_805D5B9C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B9C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B9C);
        lbl_805D5B9C = 0U;
    }
    if ((u32) lbl_805D5B98 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B98, 1);
        lbl_805D5B98 = 0U;
    }
}

extern M2C_UNK __vt__16TObjContainerIdo[];

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void load_resources__16TObjContainerIdoFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804B70A4.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5B98) = var_r0;
    (*(u8 * *)&lbl_805D5B9C) = load_gvm_texture_file((s32) &lbl_80445130.value);
}

void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjContainerIdo;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xF0, -1);
        dt__16TObjContainerIdoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DBD9C;

u8 *TObjContainerIdo__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 i;
    init_positions__16TObjContainerIdoFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjContainerIdo;
    init_and_activate__10TObjPlayerFPv(arg0 + 0xF0);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D330C;
    ((VObj_8018C7BC *)(arg0))->m5(arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC0, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0xB4, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DBD7C;
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD(arg0, s32 *, 0x88);
    if (M2C_FIELD(arg0, s32 *, 0xDC) < 1) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0xDC) > 4) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 4;
    }
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xDC); i++) {
        ((Ido_8018C7BC *)arg0)->ids[i] = M2C_FIELD(arg0, s32 *, 0x84) + i;
    }
    M2C_FIELD(arg0, u32 *, 0xE0) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        M2C_FIELD(arg0, u32 *, 0xE0) |= 0x08000000;
    } else {
        M2C_FIELD(arg0, u32 *, 0xE0) &= ~0x08000000;
    }
    M2C_FIELD(arg0, f32 *, 0xE4) = TObjContainerIdo__data_805DBD64;
    M2C_FIELD(arg0, f32 *, 0xE8) = M2C_FIELD(arg0, f32 *, 0x68) / M2C_FIELD(arg0, s32 *, 0xDC);
    M2C_FIELD(arg0, f32 *, 0xEC) = M2C_FIELD(arg0, f32 *, 0x6C);
    activate_and_dispatch__10TObjPlayerFPv(arg0 + 0xF0);
    init_collision_body_parts(arg0, lbl_804B70B4, 1);
    M2C_FIELD(arg0, u32 *, 0x30) |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(arg0);
    return arg0;
}

void TObjContainerJungEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj18*)arg0)->m77();
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

struct Vec_8018C9F0 { f32 x, y, z; };
struct Spawn_8018C9F0 {
    u8 pad0[0xC];
    Vec_8018C9F0 pos;
    u8 pad18[0x20];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};
struct Obj_8018C9F0 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x10];
    Vec_8018C9F0 pos;
    u8 pad44[0x326 - 0x44];
    s16 f326;
    u8 pad328[0x36C - 0x328];
    s32 f36c;
    s32 f370;
};

void spawn_particle_effect_with_flags(void *, int, int);
void construct_debris__8TObjChipFPvPvPv(void *, void *, void *);
void play_container_break_sound(void *);
void *__nw__7TObjectFUl(int);
extern Spawn_8018C9F0 lbl_80445398;
extern Spawn_8018C9F0 lbl_804453E4;
extern void *tl_05;

void TObjContainerJungEnemy__vt77(Obj_8018C9F0 *self) {
    void *o;
    if (self->f326 != 1) {
        Spawn_8018C9F0 a = lbl_80445398;
        {
            f32 x = self->pos.x;
            f32 y = self->pos.y;
            f32 z = self->pos.z;
            s32 id = self->f36c;
            s32 t = self->f24;
            a.pos.x = x;
            a.pos.y = y;
            a.pos.z = z;
            a.f38 = y;
            a.f40 = id;
            a.f44 = t;
        }
        Spawn_8018C9F0 b = lbl_804453E4;
        {
            f32 x = self->pos.x;
            f32 y = self->pos.y;
            f32 z = self->pos.z;
            s32 id = self->f370;
            s32 t = self->f24;
            b.pos.x = x;
            b.pos.y = y;
            b.pos.z = z;
            b.f38 = y;
            b.f40 = id;
            b.f44 = t;
        }
        spawn_particle_effect_with_flags(&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags(&self->pos, 0x46, 0x40);
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
        }
        play_container_break_sound(self);
    }
}

f32 TObjContainerJungEnemy__vt20(Obj_8018CB44 *arg0) {
    s16 sp8;
    Pkt_8018CB44 pkt;
    if ((arg0->f1C >= 0x1000U) && (arg0->f80 != 0U) && (access_object_saved_state(arg0, &sp8, 1) != 0)) {
        sp8 = 1;
        access_object_saved_state(arg0, &sp8, 0);
        send_object_state_update(arg0, &sp8);
        init_packet_67_04__6TLobbyFPv(&pkt);
        pkt.b = arg0->f1C;
        pkt.c = get_current_floor();
        pkt.d = arg0->f84;
        pkt.e = lbl_805D53A0;
        byteswap_and_send__6TLobbyFi(&pkt);
    }
    return lbl_805DBD98;
}

void TObjContainerJungEnemy__vt80(Obj_8018CBF0 *self) {
    load_models__22TObjContainerJungEnemyFPv(self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80445430, self->id);
    debug_printf_at(0x130021, lbl_8044543C);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TObjContainerJungEnemy__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        ((M2C_UNK (*)(s32))draw_ginja_object)(M2C_FIELD(arg0, s32 *, 0x368));
        begin_effect_render__13TParticleCtrlFv();
        ((M2C_UNK (*)(s32))draw_ginja_object)(M2C_FIELD(arg0, s32 *, 0x374));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    case 1:
        return;
    }
}

}
