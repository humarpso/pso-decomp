#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOMonumentAncient01__vt14(void);

void TOMonumentAncient01__vt14(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80172630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TOMonumentAncient01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 TOMonumentAncient01__data_805D5A60;

struct Base1 { char pad[0x18]; };
struct VObj1 : Base1 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

void render__19TOMonumentAncient01Fv(u8 *arg0) {
    if (((VObj1*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_8001EDC4(TOMonumentAncient01__data_805D5A60, 2);
        TObjBoss2Tunnel__sub_803DB470();
        begin_effect_render__13TParticleCtrlFv();
        TObjFish__sub_8001EDC4(TOMonumentAncient01__data_805D5A60, 1);
        TObjBoss2Tunnel__sub_803DB470();
        TObjFish__sub_8001EDC4(TOMonumentAncient01__data_805D5A60, 0);
        TObjBoss2Tunnel__sub_803DB470();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801726D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TOMonumentAncient01FPv(void *arg0);
void *TOMonumentAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__19TOMonumentAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TOMonumentAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80172720
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__19TOMonumentAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOMonumentAncient01__data_805D5A60;

void release_static_resource__19TOMonumentAncient01Fv(void) {
    if ((u32) TOMonumentAncient01__data_805D5A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient01__data_805D5A60, 1);
        TOMonumentAncient01__data_805D5A60 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801727A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TOMonumentAncient01[];

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
