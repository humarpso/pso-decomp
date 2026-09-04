#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_instance__19TObjGoalWarpAncientFv(void);

extern s32 lbl_805D5AF4;

s32 get_instance__19TObjGoalWarpAncientFv(void) {
    return lbl_805D5AF4;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017CB14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjGoalWarpAncient__create(void *arg0);
void *TObjGoalWarpAncient__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjGoalWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TObjGoalWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017CB60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8017CB60 { char pad[0x18]; };
struct VObj8017CB60 : VBase8017CB60 {
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

void render__19TObjGoalWarpAncientFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__19TObjGoalWarpAncientFv(u8 *arg0) {
    if (((VObj8017CB60 *) arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xCC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xC4));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE0));
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xDC));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD0));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017CD5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__19TObjGoalWarpAncient[];

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjGoalWarpAncient;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D27C
#include "types.h"

extern "C" {

void register_warp_object__19TObjGoalWarpAncientFPv(void* a0);
int TObjFish__sub_8001EDB0(void*, void*);

    extern int lbl_805D5AF0;
void register_warp_object__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001EDB0((void*)(lbl_805D5AF0), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D2AC
#include "types.h"

extern "C" {

void register_warp__19TObjGoalWarpAncientFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);

    extern int lbl_805D5AF0;
void register_warp__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D5AF0), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D2D4
#include "types.h"

extern "C" {

void TObjGoalWarpAncient__sub_8017D2D4(void* a0);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5AF0;
void TObjGoalWarpAncient__sub_8017D2D4(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5AF0), a0); }

}
#endif
#endif
