#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK lbl_8048E130[];

void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E130;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800811AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_player_near__13TEF_LensFlareFif(s32 arg0, f32 farg0);
f32 TObjPlayer__sub_80141CF8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern s32 lbl_805D53A0;

int is_player_near__13TEF_LensFlareFif(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 == 0U) {
        return 0;
    }
    return (u32) __cntlzw(TObjPlayer__sub_80141CF8(temp_r3 + 0x38, arg0 + 0x38) < farg0) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80081944
#include "types.h"

extern "C" {

void TEF_LensFlare__sub_80081944(void);
void TEF_LensFlare__sub_80081948(void);

void TEF_LensFlare__sub_80081944(void) {  }
void TEF_LensFlare__sub_80081948(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008194C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8008194C { char pad[0x50]; };
struct VObj_8008194C : Base_8008194C {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void dispatch_vt1__13TEF_LensFlareFPv(void *arg0);

void dispatch_vt1__13TEF_LensFlareFPv(void *arg0) {
    struct VObj_8008194C *o = (struct VObj_8008194C *)M2C_FIELD(arg0, void **, 0x1C);
    o->m1();
}

}
#endif
#endif
