#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_14_800A7BEC { char pad[0x14]; };

struct VObj_14_800A7BEC : VBase_14_800A7BEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800A7BEC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

typedef s32 M2C_UNK;
typedef struct Vec_800A7A14 {
    f32 x, y, z;
} Vec_800A7A14;

struct VBase_800A7A14 { char pad[0x18]; };

struct VObj_800A7A14 : VBase_800A7A14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800A7A14 *, Vec_800A7A14 *);
};

typedef struct Obj_800A7A14 {
    u8 pad0[0x38];
    Vec_800A7A14 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3C4 - 0xC4];
    VObj_800A7A14 *effs[2];
} Obj_800A7A14;

extern "C" {
void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v);
void TObjPlayer__sub_800A7798(u8 *arg0, f32 farg0);
void set_param__12TObjEneLappyFPvi(void *, s32);
void TObjPlayer__sub_800A7B54(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_a__10TObjPlayerFii(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
void TObjPlayer__sub_800A7988(s32 arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_800A77D4(s32 arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_800A7820(s32 arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_800A786C(s32 arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_800A78B8(s32 arg0);
s32 TObjPlayer__sub_800A0554(void *);
s32 TBoss3Volopt__sub_800D8C48(void *);
s32 TBoss1Dragon__sub_80143504();
void TObjPlayer__sub_800A7BEC(Obj_800A7BEC *arg0);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern s32 lbl_805D5084;
extern s32 lbl_805D5088;
extern const f32 lbl_805D9AA4;
void TObjPlayer__sub_800A7A14(Obj_800A7A14 *o);
}

extern "C" {

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };
struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

s16 TObjPlayer__sub_800A776C(void* p);
int TObjPlayer__sub_800A7774(void* p);
void TObjPlayer__sub_800A77D0(void);
s16 get_field_2c8__10TObjPlayerFPv(void* p);
void play_hit_sound__10TObjPlayerFi(s32 arg0);
void set_dead_and_check_destroy__10TObjPlayerFPv(u8 *arg0);
void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
int VecCopy__FP3VecPC3Vec(void*);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

s16 get_field_2c8__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c8); }
s16 TObjPlayer__sub_800A776C(void* p) { return *(s16*)((char*)p + 0x2ca); }
int TObjPlayer__sub_800A7774(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void TObjPlayer__sub_800A7798(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    set_flags_B0__10TObjPlayerFPvUi((void*)(arg0), (u32)(0x100U));
}

void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xb0) |= v; }
void TObjPlayer__sub_800A77D0(void) {  }

void TObjPlayer__sub_800A77D4(s32 arg0) {
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((s32)((void *) (arg0)), (M2C_UNK)((int) (0x4003AD40)))))), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x100)));
}

void TObjPlayer__sub_800A7820(s32 arg0) {
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((s32)((void *) (arg0)), (M2C_UNK)((int) (0x4003AD3D)))))), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x100)));
}

void TObjPlayer__sub_800A786C(s32 arg0) {
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((s32)((void *) (arg0)), (M2C_UNK)((int) (0x4003A83E)))))), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x100)));
}

extern f32 lbl_805D9AA0;

void TObjPlayer__sub_800A78B8(s32 arg0) {
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((s32)((void *) (arg0)), (M2C_UNK)((int) (0x4003A83F)))))), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x100)));
}

void play_hit_sound__10TObjPlayerFi(s32 arg0) {
    M2C_UNK temp_r3;
    if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9AA0) {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B23B);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    } else {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B23C);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    }
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}

void TObjPlayer__sub_800A7988(s32 arg0) {
    s32 temp_r3;
    apply_effect_variant_a__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
    request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x2FC));
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if ((temp_r3 == 0x13) || (temp_r3 == 0x14)) {
        TBoss3Volopt__sub_8022675C((M2C_UNK)(0x3AD3F), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        return;
    }
    TBoss3Volopt__sub_8022675C((M2C_UNK)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((s32)((void *) (arg0)), (M2C_UNK)((int) (0x4003AD25))))), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
}

void TObjPlayer__sub_800A7A14(Obj_800A7A14 *o) {
    Vec_800A7A14 b;
    Vec_800A7A14 a;
    u32 e;
    s32 idx;
    VObj_800A7A14 *eff;
    if (!(o->fC0 < lbl_805D9AA4)) {
        return;
    }
    switch (o->fB8) {
    case 3:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)lbl_805D5084, o->fC0);
        idx = 0;
        break;
    case 4:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)lbl_805D5088, o->fC0);
        idx = 1;
        break;
    default:
        e = 0;
        break;
    }
    if (e == 0) {
        return;
    }
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    TOHangerMachine01__sub_803D9C00(&o->pos);
    TObjPlayer__sub_803D9214(0, o->f60);
    TObjPlayer__sub_803D8960(0, e, &a, 2);
    TObjPlayer__sub_803D9B78();
    eff = o->effs[idx];
    if (eff != NULL) {
        eff->m4(&a, &b);
    }
}

void set_dead_and_check_destroy__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x390) = 1;
    if (((A7B00Obj_800a7b00_800A7764*)(arg0 + 0x3A8))->m4() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}
void TObjPlayer__sub_800A7B54(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
    } else if (temp_r0 > 2) {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0_2) {
    case 2:
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 0x2B);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0x2A);
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0x29);
        return;
    }
}
void TObjPlayer__sub_800A7BEC(Obj_800A7BEC *arg0) {
    TBoss1Dragon__sub_80143504();
    switch (arg0->state) {
    case 0:
    default:
        if (arg0->f390 == 1) {
            arg0->state = 1;
            TBoss3Volopt__sub_800D8C48(arg0->sub38);
            TObjPlayer__sub_800A0554((u8 *)arg0 + 0x3A8);
        } else {
            arg0->state = 2;
        }
        break;
    case 1:
        if (((VObj_14_800A7BEC *)((u8 *)arg0 + 0x3A8))->m5() == 1) {
            arg0->state = 2;
            arg0->f390 = 0;
        }
        break;
    case 2:
        arg0->f326 = 1;
        break;
    }
}

}
