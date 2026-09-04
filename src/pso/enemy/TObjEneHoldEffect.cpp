#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__17TObjEneHoldEffect[];

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneHoldEffect;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FD814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 0)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 4)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 0)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 4)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 8)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x8036D070
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjEneHoldEffect__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        TObjEneHoldEffect__ct(o, arg0, arg1, arg2);
    }
}

}
#endif
#endif
