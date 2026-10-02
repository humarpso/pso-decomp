#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79(s32);
};

typedef struct Obj_800A0EDC {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[0x38 - 0x34];
    u8 pos[0x2FC - 0x38];
    u8 home[0x374 - 0x2FC];
    s32 f374;
    u8 pad378[0x37C - 0x378];
    s32 count;
    s32 sel;
    u16 ids[16];
    s32 f3A4;
} Obj_800A0EDC;

typedef s32 M2C_UNK;
typedef struct Vec_800A12C0 {
    f32 x, y, z;
} Vec_800A12C0;

typedef struct Pair_800A12C0 {
    Vec_800A12C0 dest;
    Vec_800A12C0 pos;
} Pair_800A12C0;

typedef struct Obj_800A12C0 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x38 - 0x34];
    Vec_800A12C0 pos;
    u8 pad44[0x50 - 0x44];
    Vec_800A12C0 dest;
    u8 pad5C[0xB8 - 0x5C];
    s16 fB8;
    u8 padBA[0x37C - 0xBA];
    s32 state;
    u8 pad380[0x388 - 0x380];
    s32 flags388;
} Obj_800A12C0;

extern "C" {
s32 TObjPlayer__sub_800A1010(s32 arg0);
void TObjPlayer__sub_800A100C(s32 = 0);
s32 TObjPlayer__sub_80016D78();
    extern int TEndingAB__data_805D4F10;
    extern int TEndingPic__data_805D6EE0;
    extern int lbl_805D4F08;
s32 TObjPlayer__sub_800A1010(s32 arg0);
s32 TObjPlayer__sub_800A1058(s32 arg0);
void TObjPlayer__sub_800A100C(s32 _w0);
s32 TObjPlayer__sub_80016FF8();
s32 TObjPlayer__sub_80016FF8();
s32 TObjPlayer__sub_800A1058(s32 arg0);
f32 TObjPlayer__sub_800A3200(int);
extern f32 lbl_805D5008;
void TObjPlayer__sub_800A1298(void);
void set_param__12TObjEneLappyFPvi(void *, s32);
void fn_800A0FAC(u8 *arg0);
void set_param__12TObjEneLappyFPvi(void *, s32);
void fn_800A0FDC(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
int reset_photon_effect__12TBoss3VoloptFPv(void *);
void set_param__12TObjEneLappyFPvi(void *, s32);
s32 initialize__9TObjEnemyFPv(void *);
extern M2C_UNK __vt__20TObjEneDarkGunCenter[];
extern s32 lbl_805D29C8;
u8 *TObjEneDarkGunCenter__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK move_with_wall_slide(void *);
void TObjPlayer__sub_800180E8(void *, Vec_800A12C0, Vec_800A12C0, f32);
void apply_fall_damage_flag__10TObjPlayerFi(void *);
f32 TObjPlayer__sub_800A3200(int);
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9984;
extern const f32 lbl_805D9988;
void TObjPlayer__sub_800A12C0(Obj_800A12C0 *o);
}

extern "C" {

u8 *TObjEneDarkGunCenter__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    Obj_800A0EDC *o;
    s32 i;
    initialize__9TObjEnemyFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneDarkGunCenter;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D29C8;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    o = (Obj_800A0EDC *)arg0;
    VecCopy__FP3VecPC3Vec(o->home, o->pos);
    o->flags = o->flags | 0x06000000 | 0x800;
    o->f374 = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0x22);
    o->sel = -1;
    o->count = 0;
    for (i = 0; i < 16; i++) {
        o->ids[i] = 0xFFFF;
    }
    o->f3A4 = -1;
    return arg0;
}

void fn_800A0FAC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFBFFFFFF);
    set_param__12TObjEneLappyFPvi(arg0, 0x22);
}

void fn_800A0FDC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x04000000);
    set_param__12TObjEneLappyFPvi(arg0, 0x23);
}

void TObjPlayer__sub_800A100C(s32 _w0) {  }

s32 TObjPlayer__sub_800A1010(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjPlayer__sub_800A100C((s32)(arg0));
        return 1;
    }
    return 0;
}
s32 TObjPlayer__sub_800A1058(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjPlayer__sub_800A100C(arg0);
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800A1298(void) {
    lbl_805D5008 = TObjPlayer__sub_800A3200((int) (3));
}
void TObjPlayer__sub_800A12C0(Obj_800A12C0 *o) {
    switch (o->state) {
    case -1:
        break;
    case 0:
        o->flags388 &= ~0x200000;
        o->flags388 |= 0x480000;
        o->fB8 = 0;
        o->state = 1;
    case 1: {
        advance_animation_playback(o);
        if (!(o->flags30 & 0x800000)) {
            apply_actor_gravity(o, 0, lbl_805D9984);
        }
        TObjPlayer__sub_800180E8(o, o->pos, o->dest, TObjPlayer__sub_800A3200(0));
        move_with_wall_slide(o);
        if (xz_distance_squared(&o->pos, &o->dest) <= lbl_805D9988) {
            o->flags388 &= ~0x80000;
            apply_fall_damage_flag__10TObjPlayerFi(o);
        }
        break;
    }
    }
}

}
