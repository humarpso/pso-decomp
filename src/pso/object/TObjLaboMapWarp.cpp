#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjLaboMapWarpFPv(void *arg0);
void *__dt__15TObjLaboMapWarpFv(void *arg0, s16 arg1);
void *TObjLaboMapWarp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TObjLaboMapWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjLaboMapWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TObjLaboMapWarp[];

void *__dt__15TObjLaboMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLaboMapWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80185248
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TObjLaboMapWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 is_field88_zero__15TObjLaboMapWarpFPv(void *);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern s32 TObjLaboMapWarp__data_805D5B58;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

void render__15TObjLaboMapWarpFv(u8 *arg0) {
    s32 temp_r31;

    if (((VObj *)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        TObjFish__sub_8001EDB0(TObjLaboMapWarp__data_805D5B58, 1);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjLaboMapWarpFPv(arg0) != 0) {
            TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 1);
            TObjBoss2Tunnel__sub_803DB470();
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801853F0
#include "types.h"

extern "C" {

int is_field88_zero__15TObjLaboMapWarpFPv(void* p);

int is_field88_zero__15TObjLaboMapWarpFPv(void* p) { return *(u32*)((char*)p + 0x88) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801854DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__15TObjLaboMapWarpFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjLaboMapWarp__data_805D5B58;

void release_static_resource__15TObjLaboMapWarpFv(void) {
    if ((u32) TObjLaboMapWarp__data_805D5B58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLaboMapWarp__data_805D5B58, 1);
        TObjLaboMapWarp__data_805D5B58 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185608
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLaboMapWarp__ct(void *arg0);
void TObjLaboMapWarp__sub_80185400(void *);
void TObjMapWarp__ct(void *);

extern M2C_UNK __vt__15TObjLaboMapWarp[];
extern void *lbl_805D32B4;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;

void *TObjLaboMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLaboMapWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32B4;
    TObjLaboMapWarp__sub_80185400(arg0);
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DBC90;
    return arg0;
}

}
#endif
#endif
