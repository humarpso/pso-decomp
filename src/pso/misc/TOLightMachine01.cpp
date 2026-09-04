#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016E9F4_8016E998 { char pad[0x18]; };
struct VObj_8016E9F4_8016E998 : Base_8016E9F4_8016E998 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void *__dt__16TOLightMachine01Fv(void *arg0, s16 arg1);
void *create__16TOLightMachine01FPv(void *arg0);
void destroy_instance__16TOLightMachine01Fv(void);
void render__16TOLightMachine01Fv(u8 *arg0);
void run_task__16TOLightMachine01Fv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TOLightMachine01__ct(void *, void *);
M2C_UNK TOSignCave03__sub_803DB510(s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void run_task__16TOLightMachine01Fv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + M2C_FIELD(arg0, s32 *, 0xA4));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x98) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xA8)));
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) + M2C_FIELD(arg0, s32 *, 0x8C));
}

extern s32 lbl_805D5A44;
extern s32 lbl_805D5A48;
extern const f32 lbl_805DB828;

void render__16TOLightMachine01Fv(u8 *arg0) {
    if (((VObj_8016E9F4_8016E998 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, lbl_805DB828, M2C_FIELD(arg0, f32 *, 0x9C), lbl_805DB828);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xAC));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(lbl_805D5A48);
        TObjBoss2Tunnel__sub_803DB470(lbl_805D5A44);
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

void *create__16TOLightMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOLightMachine01__ct(o, arg0);
    }
    return o;
}

extern u32 TOLightMachine01__data_805D5A40;

void destroy_instance__16TOLightMachine01Fv(void) {
    if ((u32) TOLightMachine01__data_805D5A40 != 0U) {
        TLobby__sub_8001FE7C((void*)TOLightMachine01__data_805D5A40, 1);
        TOLightMachine01__data_805D5A40 = 0U;
    }
}

extern M2C_UNK __vt__16TOLightMachine01[];

void *__dt__16TOLightMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOLightMachine01;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
