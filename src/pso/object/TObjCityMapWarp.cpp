#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjCityMapWarpFPv(void *arg0);
void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1);
void *TObjCityMapWarp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TObjCityMapWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjCityMapWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TObjCityMapWarp[];

void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjCityMapWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018574C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
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

extern "C" {

void render__15TObjCityMapWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 is_field88_zero__15TObjCityMapWarpFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void render__15TObjCityMapWarpFv(u8 *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjCityMapWarpFPv(arg0) != 0) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xD8));
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x38), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x18), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x34), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801858D4
#include "types.h"

extern "C" {

int is_field88_zero__15TObjCityMapWarpFPv(void* p);

int is_field88_zero__15TObjCityMapWarpFPv(void* p) { return *(u32*)((char*)p + 0x88) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185A64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityMapWarp__ct(void *arg0);
void TObjCityMapWarp__sub_801858E4(void *);
void TObjMapWarp__ct(void *);

extern M2C_UNK __vt__15TObjCityMapWarp[];
extern void *lbl_805D32B0;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;

void *TObjCityMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjCityMapWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32B0;
    TObjCityMapWarp__sub_801858E4(arg0);
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DBC90;
    return arg0;
}

}
#endif
#endif
