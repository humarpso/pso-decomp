#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_80337500 { f32 x, y, z; };

struct P_80337500 { s32 a; f32 f; };

struct B_80337500 { u8 pad[0x18]; };

struct V_80337500 : B_80337500 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(V_80337500 *src, P_80337500 *p, s32 a, s32 b, s32 c);
};

struct O_80337500 { u8 pad[0xAC]; Vec_80337500 pos; u8 b8[4]; };

struct Vec_80337824 { f32 x, y, z; };

struct Ang_80337824 { s32 x, y, z; };

struct O_80337824 { u8 pad[0x18]; void *vt; u8 pad1[0xAC - 0x1C]; Vec_80337824 pos; Vec_80337824 vel; u8 pad2[0xDC - 0xC4]; f32 fDC; s32 fE0; Vec_80337824 pos2; u8 padF0[4]; s32 fF4; s16 fF8; };

typedef s32 M2C_UNK;
struct Vec_80337644 { f32 x, y, z; };

struct O_80337644 {
    u8 pad[0xAC]; Vec_80337644 pos; Vec_80337644 vel;
    u8 pad2[0xDC - 0xC4]; f32 fDC; void *fE0; Vec_80337644 pos2; s32 fF0; s32 fF4; u16 fF8;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TBoss8Dragon__sub_8007A544(s32, M2C_UNK);
s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1);
f32 fn_8013157C(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern P_80337500 lbl_80477B70[];
extern const f32 lbl_805D6D30;
extern const f32 lbl_805D6D34;
extern const f32 lbl_805DF988;
void TObjEneMorfos__sub_80337500(O_80337500 *arg0, V_80337500 *arg1, V_80337500 *arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
s16 obj_getField1c(void *);
s32 TObjParticle__sub_800870BC(void *, void *, s32, s32);
void TObjPlayer__sub_801569F4(void *, s32);
s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern M2C_UNK lbl_804EF130[];
extern s32 tl_06;
extern const f32 lbl_805D6D30;
extern const f32 lbl_805DF994;
O_80337824 *TObjEneMorfos__sub_80337824(O_80337824 *arg0, Vec_80337824 *arg1, s32 arg2, void *arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *get_player_data__10TObjPlayerFi(s32);
f32 get_random_float__8TObjFishFv(f32);
void queue_destruction__7TObjectFv(void *);
u32 TObjButterflyLobby__sub_8007A5D8(void *, void *, int);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 TPhotonMylla__sub_80154CB4(u16);
s32 is_valid_and_active__10TObjPlayerFUi(void *);
void TObjEneMorfos__sub_80337500(O_80337500 *arg0, V_80337500 *arg1, V_80337500 *arg2);
s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1);
void TBoss4Zako__sub_803D8910(void *, void *);
extern s32 lbl_805D586C;
extern const f32 lbl_805D6D30;
extern const f32 lbl_805DF98C;
extern const f32 lbl_805DF990;
void TObjEneMorfos__sub_80337644(O_80337644 *arg0);
}

extern "C" {

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804EF130[];

void TObjEneMorfos__sub_80337500(O_80337500 *arg0, V_80337500 *arg1, V_80337500 *arg2) {
    Vec_80337500 v = arg0->pos;
    TBoss6Type1__sub_803D9370(&v, arg0->b8);
    if (arg1 != 0 && arg1 != arg2 && !(*(s32 *)((u8 *)arg1 + 0x30) & 0x04000A00)) {
        if (!(fn_8013157C(&v, (u8 *)arg1 + 0x2FC) > (lbl_805DF988 * lbl_805D6D30) * (lbl_805DF988 * lbl_805D6D30))) {
            P_80337500 tmp = lbl_80477B70[0];
            tmp.f = lbl_805D6D34;
            P_80337500 p = tmp;
            arg1->m21(arg2, &p, 0, -1, -1);
        }
    }
}

s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TBoss8Dragon__sub_8007A544(arg1, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
    return 1;
}

struct O_80337500;
struct V_80337500;
void TObjEneMorfos__sub_80337644(O_80337644 *arg0) {
    s32 k;
    s32 i;
    u8 *p;
    Vec_80337644 v = arg0->pos;
    TBoss4Zako__sub_803D8910(&arg0->pos, &arg0->vel);
    if (arg0->fE0 != 0) {
        copy_pos__11TNowLoadingFPvPv(arg0->fE0, &arg0->pos);
    }
    arg0->fDC += lbl_805D6D30;
    if (arg0->fF0 != 0) {
        VecCopy__FP3VecPC3Vec(&arg0->pos2, (int)&arg0->pos);
        arg0->fF4++;
        if (arg0->fF4 > 4) {
            arg0->fF4 = 0;
            TObjEneMorfos__sub_803375F0((M2C_UNK)arg0, (s32)&arg0->pos2);
        }
    }
    if (arg0->fDC >= lbl_805DF98C) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TObjButterflyLobby__sub_8007A5D8(&v, &arg0->pos, -1) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    k = TPhotonMylla__sub_80154CB4(arg0->fF8);
    if (k != 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (is_valid_and_active__10TObjPlayerFUi(p) != 0 && get_random_float__8TObjFishFv(arg0->pos.y - *(f32 *)(p + 0x300)) < lbl_805DF990) {
                TObjEneMorfos__sub_80337500((O_80337500 *)arg0, (V_80337500 *)p, (V_80337500 *)k);
            }
        }
    }
}

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF130;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
O_80337824 *TObjEneMorfos__sub_80337824(O_80337824 *arg0, Vec_80337824 *arg1, s32 arg2, void *arg3) {
    Ang_80337824 a;
    TObjPlayer__sub_801569F4(arg0, tl_06);
    arg0->vt = ((u8 *)&lbl_804EF130);
    VecCopy__FP3VecPC3Vec((void *)(&arg0->pos), (int)(arg1));
    arg0->fDC = lbl_805DF994;
    arg0->fF8 = obj_getField1c(arg3);
    a.x = 0;
    a.y = arg2 - 0x4000;
    a.z = 0x4000;
    arg0->vel.x = lbl_805D6D30 * TBoss8Dragon__sub_803D64C0(arg2);
    arg0->vel.y = lbl_805DF994;
    arg0->vel.z = lbl_805D6D30 * TBoss8Dragon__sub_803D64DC(arg2);
    arg0->fE0 = TObjParticle__sub_800870BC(arg1, &a, 0x213, 2);
    VecCopy__FP3VecPC3Vec((void *)(&arg0->pos2), (int)(&arg0->pos));
    TObjEneMorfos__sub_803375F0((M2C_UNK)(arg0), (s32)(&arg0->pos2));
    arg0->fF4 = 0;
    return arg0;
}

}
