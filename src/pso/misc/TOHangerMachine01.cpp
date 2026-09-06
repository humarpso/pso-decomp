#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {
void run_task__17TOHangerMachine01Fv(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(int);
extern const f32 lbl_805DB6A8;
void render__17TOHangerMachine01Fv(u8 *arg0);
}

extern "C" {

void TOHangerMachine01__sub_80169168(void);
void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1);
void *create__17TOHangerMachine01FPv(void *arg0);
void free_static_model__17TOHangerMachine01Fv(void);
s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void *TOHangerMachine01__ct(void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

void run_task__17TOHangerMachine01Fv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x888);
}

#pragma push
#pragma fp_contract on
void render__17TOHangerMachine01Fv(u8 *arg0) {
    u8 *p;
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        p = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        if (lbl_805DB6A8 < M2C_FIELD(arg0, f32 *, 0x6C)) {
            TOHangerMachine01__sub_803D9C00((void *) (p + 8));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        }
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x30));
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x30));
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(p, s32 *, 0x1C)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(p, s32 *, 0x14)));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(p, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0xC8)));
        begin_effect_render__13TParticleCtrlFv();
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        p = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30));
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (p + 8));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(p, s32 *, 0x1C)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(p, s32 *, 0x14)));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(p, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0xC8)));
        begin_effect_render__13TParticleCtrlFv();
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        p = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30));
        if (lbl_805DB6A8 < M2C_FIELD(arg0, f32 *, 0x68)) {
            TOHangerMachine01__sub_803D9C00((void *) (p + 8));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(p, s32 *, 4)));
        }
        TObjPlayer__sub_803D9B78();
    }
}
#pragma pop

void *create__17TOHangerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TOHangerMachine01__ct(o, arg0);
    }
    return o;
}

extern u32 TOHangerMachine01__data_805D59E8;

void free_static_model__17TOHangerMachine01Fv(void) {
    if ((u32) TOHangerMachine01__data_805D59E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOHangerMachine01__data_805D59E8, 1);
        TOHangerMachine01__data_805D59E8 = 0U;
    }
}

extern M2C_UNK __vt__17TOHangerMachine01[];

void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOHangerMachine01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D53A0;

s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 1;
    }
    return (u32)__cntlzw((u32)(lbl_805D53A0 - (u16)arg1)) >> 5;
}

void TOHangerMachine01__sub_80169168(void) {  }

}
