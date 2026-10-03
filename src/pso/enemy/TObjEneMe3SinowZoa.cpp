#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__vt109(void);
void TObjEneMe3SinowZoa__sub_8031A590(void);

void TObjEneMe3SinowZoa__sub_8031A590(void) {  }
void TObjEneMe3SinowZoa__vt109(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x800D72E8
#include "types.h"

extern "C" {

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);
int TObjPlayer__sub_803E38FC(int);

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); TObjPlayer__sub_803E38FC(8448); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7478
#include "types.h"

extern "C" {

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q);

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74A4
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74A4(void* a0);

    extern const float lbl_805DA348;
    extern const float lbl_805DA350;
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA348; *(float*)((char*)a0 + 0x0) = lbl_805DA350; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74C4
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74C4(void* a0);

    extern const float lbl_805DA348;
    extern const float lbl_805DA34C;
void TObjEneMe3SinowZoa__sub_800D74C4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA34C; *(float*)((char*)a0 + 0x0) = lbl_805DA348; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74E4
#include "types.h"

extern "C" {

void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v);

void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043C6F8;
extern const f32 lbl_805DA34C;

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805DA34C / (f32) arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D75F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_800D96D0(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_80494938[];

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_80494938;
        TObjPlayer__sub_800D96D0(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D764C
#include "types.h"

extern "C" {

void* init_common__18TObjEneMe3SinowZoaFPv(void* a0);
int TObjPlayer__sub_800D9718(void);

    extern unsigned char lbl_80494938[];
    extern const float lbl_805DA348;
void* init_common__18TObjEneMe3SinowZoaFPv(void* a0) { TObjPlayer__sub_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80494938; *(float*)((char*)a0 + 0x18) = lbl_805DA348; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803167FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0);
s32 TObjEneMe3SinowZoa__sub_80316690(void *, void *);
void spawn_particle_effect(void *, int);

struct VOff_803167FC_arg0 { char pad_0[0x38]; char f_38[1]; };

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0) {
    s32 x;
    struct VOff_803167FC_arg0 *self = (struct VOff_803167FC_arg0 *)arg0;
    x = TObjEneMe3SinowZoa__sub_80316690(arg0, self->f_38);
    if (x == 0) {
        spawn_particle_effect(self->f_38, 243);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80317788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK post_translate_matrix(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3D4)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3SinowZoa__data_805DF31C), (f32) (M2C_FIELD(arg0, f32 *, 0x3E4)), (f32) (TObjEneMe3SinowZoa__data_805DF31C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80317828
#include "types.h"

extern "C" {

void update_move__18TObjEneMe3SinowZoaFPv(void* p);
int TObjEneMe3SinowZoa__sub_8031A3D8(void*);
int get_target_info__9TObjEneDDFPv(void*);
int setup_move_bounds__18TObjEneMe3SinowZoaFPv(void*);

void update_move__18TObjEneMe3SinowZoaFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { setup_move_bounds__18TObjEneMe3SinowZoaFPv(p); TObjEneMe3SinowZoa__sub_8031A3D8(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80319FFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1);
s32 check_v2_mode__9TObjEneDDFv(s32, s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

}

struct Base18F { char pad[0x18]; };
struct VObj18F : Base18F {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

extern "C" {

void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            set_field_378__9TObjEneDDFPvi(arg0, 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            set_field_378__9TObjEneDDFPvi(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 | 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFEFFFFA);
        if (check_v2_mode__9TObjEneDDFv(temp_r3, temp_r4) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFEFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) > 5) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                transition_enemy_state(arg0, 1);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x434) = (s32) (M2C_FIELD(arg0, s32 *, 0x434) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj18F *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x8031A4E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031A4E8 { char pad[0x18]; };
struct VObj_8031A4E8 : Base_8031A4E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86();
};

extern "C" {

void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0);
void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0) {
    struct VObj_8031A4E8 *o = (struct VObj_8031A4E8 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

 extern const f32 lbl_805DF378; }

#define V8(n) virtual void v##n();
#define V64(n) V8(n##0) V8(n##1) V8(n##2) V8(n##3) V8(n##4) V8(n##5) V8(n##6) V8(n##7)

struct Base_8031A538 { char pad[0x18]; };
struct VObj_8031A538 : Base_8031A538 {
    V64(a) V64(b)
    V8(c0) V8(c1) V8(c2) V8(c3) V8(c4) V8(c5) V8(c6) V8(c7)
    V8(d0) V8(d1) V8(d2) V8(d3) V8(d4) V8(d5) V8(d6) V8(d7)
    V8(e0) V8(e1) V8(e2) V8(e3) V8(e4) V8(e5) V8(e6) V8(e7)
    V8(f0) V8(f1) V8(f2) V8(f3) V8(f4) V8(f5) V8(f6) V8(f7)
    V8(g0) V8(g1) V8(g2) V8(g3) V8(g4) V8(g5) V8(g6) V8(g7)
    V8(h0) V8(h1) V8(h2) V8(h3) V8(h4) V8(h5) V8(h6) V8(h7)
    V8(i0) V8(i1) V8(i2) V8(i3) V8(i4) V8(i5) V8(i6) V8(i7)
    V8(j0) V8(j1) V8(j2) V8(j3) V8(j4) V8(j5) V8(j6) V8(j7)
    V8(k0) V8(k1) V8(k2) V8(k3) V8(k4) V8(k5) V8(k6) V8(k7)
    V8(l0) V8(l1) V8(l2) V8(l3) V8(l4) V8(l5) V8(l6)
    virtual void m95();
    virtual void m96();
    f32 f3c_get();
};

extern "C" {

void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0) {
    VObj_8031A538 *o = (VObj_8031A538 *)arg0;
    f32 thr = lbl_805DF378;
    if ((M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C)) > thr) {
        o->m95();
        return;
    }
    o->m96();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A598
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0);

struct VObj8031A598_Base { char pad[0x14]; };
struct VObj8031A598 : VObj8031A598_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A598*)temp_r3)->m7();
        return 1;
    }
    return 0;
}

struct VObj8031A5E0_Base { char pad[0x14]; };
struct VObj8031A5E0 : VObj8031A5E0_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A5E0*)temp_r3)->m6();
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A628
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__vt105(void);

void TObjEneMe3SinowZoa__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A62C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031A69C(void);
s32 TObjEneMe3SinowZoa__sub_8031A900(void *, s32, f32);

extern f32 TObjEneMe3SinowZoa__data_805DF320;
extern f32 lbl_805DF37C;
extern f32 lbl_805DF380;

u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DF37C) && (temp_f1 < lbl_805DF380) && (TObjEneMe3SinowZoa__sub_8031A900(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - TObjEneMe3SinowZoa__data_805DF320) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3SinowZoa__sub_8031A69C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AA20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0);
void activate_appear__18TObjEneMe3SinowZoaFPv(void* p);
void init_setup__18TObjEneMe3SinowZoaFPv(void* p);
void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0);
int TObjEneDD__vt92(void*);
int TObjEneDD__vt93(void*);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);
s32 TObjEneMe3SinowZoa__sub_8031A494(void *);
s32 TObjEneMe3SinowZoa__sub_8031A4D0();

extern const f32 lbl_805DF304;
extern const f32 lbl_805DF360;
extern const f32 lbl_805DF388;
extern const f32 lbl_805DF38C;

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0) {
    if (TObjEneMe3SinowZoa__sub_8031A4D0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = TObjEneMe3SinowZoa__sub_8031A494(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (lbl_805DF388 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (lbl_805DF360 + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) (lbl_805DF38C + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (lbl_805DF304 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void activate_appear__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_setup__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031ABBC
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3SinowZoa__vt61(void* p);
void TObjEneMe3SinowZoa__sub_8031ABBC(void);
void TObjEneMe3SinowZoa__sub_8031AC70(void);

void TObjEneMe3SinowZoa__sub_8031ABBC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AC40
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3SinowZoa__vt61(void* p);
void TObjEneMe3SinowZoa__sub_8031ABBC(void);
void TObjEneMe3SinowZoa__sub_8031AC70(void);

void TObjEneMe3SinowZoa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { transition_enemy_state(p, (void*)15); } }
void TObjEneMe3SinowZoa__sub_8031AC70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AEE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
        if (M2C_FIELD(arg0, void **, 0x454) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x454)); M2C_FIELD(arg0, M2C_UNK *, 0x454) = 0; }
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x414, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031B124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3SinowZoa__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];
extern void *lbl_805D4120;

void *TObjEneMe3SinowZoa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1044));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4120;
    return arg0;
}

}
#endif
#endif
