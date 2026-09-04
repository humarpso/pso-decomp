#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__7TOBoss4Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__7TOBoss4[];

void *__dt__7TOBoss4Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TOBoss4;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80159CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_instance__7TOBoss4Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D58A8;

void free_instance__7TOBoss4Fv(void) {
    if ((u32) lbl_805D58A8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D58A8, 1);
        lbl_805D58A8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80159DCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOBoss4__ct(void *arg0);
void TPhotonMagicSquare__sub_801A2640(void *, void *);

extern void *tl_05;
extern const f32 lbl_805DB310;
extern M2C_UNK __vt__7TOBoss4[];
extern const f32 lbl_805DB31C;
extern void *lbl_805D2EB0;

void *TOBoss4__ct(void *arg0) {
    TPhotonMagicSquare__sub_801A2640(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TOBoss4;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2EB0;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_805DB310;
    M2C_FIELD(arg0, f32 *, 0x94) = lbl_805DB31C;
    return arg0;
}

}
#endif
#endif
