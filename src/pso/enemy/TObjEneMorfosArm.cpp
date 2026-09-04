#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_global__16TObjEneMorfosArmFv(void);
s32 get_instance__13TObjEneMorfosFv();

extern s32 lbl_805D6D38;

void init_global__16TObjEneMorfosArmFv(void) {
    lbl_805D6D38 = get_instance__13TObjEneMorfosFv();
}

}
#else
#if PSO_CLASS_PACKAGE == 0x803326B4
#include "types.h"

extern "C" {

void* TObjEneMorfosArm__sub_803326B4(void* p);
s32 TObjEneMorfosArm__sub_803326BC(void* p);

void* TObjEneMorfosArm__sub_803326B4(void* p) { return (char*)p + 0x4a4; }
s32 TObjEneMorfosArm__sub_803326BC(void* p) { return *(s32*)((char*)p + 0x60); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TObjEneMorfosArmFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6D38;

void render__16TObjEneMorfosArmFv(u8 *arg0) {
    if ((u32) lbl_805D6D38 == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803352FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

extern M2C_UNK __vt__16TObjEneMorfosArm[];

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMorfosArm;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033542C
#include "types.h"

extern "C" {

void TObjEneMorfosArm__sub_8033542C(void);

void TObjEneMorfosArm__sub_8033542C(void) {  }

}
#endif
#endif
