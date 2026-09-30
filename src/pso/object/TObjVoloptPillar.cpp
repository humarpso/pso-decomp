#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_8004A574 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x1c];
    u8 v38[4];
    f32 f3c;
    u8 pad40[0x6c];
    s32 fac;
    u8 padb0[8];
    f32 fb8;
    s32 fbc;
};

struct VBase_8004A0AC { u8 pad[0x18]; };

struct VObj_8004A0AC : VBase_8004A0AC {
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

struct Obj_8004A0AC : VObj_8004A0AC {
    u8 pad1c[0x38 - 0x1c];
    f32 f38;
    f32 f3c;
    f32 f40;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xb8 - 0x64];
    f32 fb8;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TObjPlayer__sub_8013153C(void *, void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
void TObjPlayer__sub_801569F4(void *, s32);
extern u8 lbl_80484B38[];
extern M2C_UNK __vt__16TObjVoloptPillar[];
extern u8 lbl_804FEE68[];
extern s32 lbl_805D2760;
extern s32 tl_04;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88E4;
extern const f32 lbl_805D88E8;
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2);
void toggle_particle_effect__10TObjPlayerFv();
void TObjPlayer__sub_800F09E8(s32);
void TObjLight__sub_80134098();
void TObjLight__sub_80134194(void *);
void end_effect_render__13TParticleCtrlFv();
void TOMonitorMachine01__sub_803D8B5C(s32, f32, f32, f32);
void TObjPlayer__sub_803D9214(s32, s32);
void TObjPlayer__sub_803D9624(s32, f32, f32, f32);
void TObjContainerIdo__sub_803D96A8(s32, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjFish__sub_803E46BC(s32);
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;
extern const f32 lbl_805D88B8;
extern const f32 lbl_805D88BC;
extern const f32 lbl_805D88C0;
extern const f32 lbl_805D88C4;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88CC;
void render__16TObjVoloptPillarFv(Obj_8004A0AC *arg0);
}

extern "C" {

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1);
void cache_target_values__16TObjVoloptPillarFv(void);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;

#pragma fp_contract on
void render__16TObjVoloptPillarFv(Obj_8004A0AC *arg0) {
    f32 s;
    if (arg0->m8(lbl_805D88B8, lbl_805D88BC) != 0) {
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(&arg0->f38);
        set_global_param__8TObjFishFi(lbl_805D4D40);
        TObjFish__sub_803E46BC(lbl_805D4D38);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, arg0->f38, arg0->fb8, arg0->f40);
        set_global_param__8TObjFishFi(lbl_805D4D44);
        TObjFish__sub_803E46BC(lbl_805D4D3C);
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        s = lbl_805D88C4 * (TObjVoloptPillar__data_805D88C8 - arg0->f3c) + lbl_805D88C0;
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, arg0->f38, lbl_805D88CC, arg0->f40);
        TObjPlayer__sub_803D9214(0, arg0->f60);
        TObjContainerIdo__sub_803D96A8(0, -0x4000);
        TOMonitorMachine01__sub_803D8B5C(0, s, s, s);
        TObjPlayer__sub_800F09E8(0);
        TObjPlayer__sub_803D9B78();
    }
}

void cache_target_values__16TObjVoloptPillarFv(void) {
    lbl_805D4D38 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x178);
    lbl_805D4D40 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x17C);
    lbl_805D4D3C = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x158);
    lbl_805D4D44 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x15C);
}

extern M2C_UNK __vt__16TObjVoloptPillar[];

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjVoloptPillar;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2) {
    f32 d;
    TObjPlayer__sub_801569F4(o, tl_04);
    o->vt = ((u8 *)&__vt__16TObjVoloptPillar);
    o->f0 = lbl_805D2760;
    TObjEneGibbles__sub_80156780(o, lbl_80484B38, 1);
    VecCopy__FP3VecPC3Vec(o->v38, pos);
    d = TObjPlayer__sub_8013153C(o->v38, lbl_804FEE68);
    if (d < lbl_805D88E4) {
        o->f3c = TObjVoloptPillar__data_805D88C8;
    } else {
        o->f3c = TObjVoloptPillar__data_805D88C8 - lbl_805D88E8 * (d - lbl_805D88E4);
    }
    o->fb8 = o->f3c;
    o->fac = 0;
    o->fbc = arg2;
    return o;
}
#pragma pop

}
