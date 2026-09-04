#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjParticleFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void fn_8020C430(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__12TObjParticle[];

void *__dt__12TObjParticleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjParticle;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        fn_8020C430(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801952B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TObjParticleFv(u8 *arg0);
M2C_UNK copy_vec3__11TBoss4Type2FPvPv(u32, void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, void *);
s32 get_global_state__14TOKeyMachine01Fv();
f32 fn_801315A0(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBEE0;
extern const f32 lbl_805DBEE4;
extern const f32 lbl_805DBEE8;

void run_task__12TObjParticleFv(u8 *arg0) {
    f32 var_f31;

    if (((get_global_state__14TOKeyMachine01Fv() == 0xE) || ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 1)) && ((s32) M2C_FIELD(arg0, s32 *, 0x8C) != 1)) {
        var_f31 = lbl_805DBEE0;
    } else {
        var_f31 = lbl_805DBEE4;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 1)) {
        var_f31 = lbl_805DBEE8;
    }
    if (fn_801315A0(arg0 + 0x38, lbl_805D4DF0 + 0x178) > var_f31) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x90), arg0 + 0x38);
        copy_vec3__11TBoss4Type2FPvPv(M2C_FIELD(arg0, u32 *, 0x90), arg0 + 0x5C);
    }
}

}
#endif
#endif
