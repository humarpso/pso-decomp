#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjMapWarpForestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);

extern M2C_UNK __vt__17TObjMapWarpForest[];

void *__dt__17TObjMapWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjMapWarpForest;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019CF38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8019CF38 { char pad[0x18]; };
struct VObj8019CF38 : VBase8019CF38 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__17TObjMapWarpForestFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;

void render__17TObjMapWarpForestFv(u8 *arg0) {
    if (((VObj8019CF38 *) arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x100));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x104), M2C_FIELD(arg0, s32 *, 0x108), M2C_FIELD(arg0, f32 *, 0xFC));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2A54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjMapWarpForest__create(void *arg0);
void *TObjMapWarpForest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjMapWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjMapWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
