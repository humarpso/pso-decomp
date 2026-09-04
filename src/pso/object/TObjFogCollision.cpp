#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjFogCollisionFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__16TObjFogCollision[];

void *__dt__16TObjFogCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjFogCollision;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80153EB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
f32 TObjPlayer__sub_80141CF8(void *, s32);

extern const f32 lbl_805DB26C;

s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1);
    if (temp_r3 != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
        temp_f31 = temp_f0 * temp_f0;
        temp_f1 = TObjPlayer__sub_80141CF8(arg0 + 0x38, temp_r3 + 0x38);
        if (temp_f31 > temp_f1) {
            return 1;
        }
        if ((lbl_805DB26C + temp_f31) < temp_f1) {
            M2C_FIELD(arg0, s32 *, 0x94) = 0x3C;
        }
        goto block_5;
    }
block_5:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153F68
#include "types.h"

extern "C" {

int TObjFogCollision__sub_80153F68(void);
int TObjFogCollision__sub_80153F70(void);

int TObjFogCollision__sub_80153F68(void) { return 0; }
int TObjFogCollision__sub_80153F70(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80154044
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFogCollision__create(void *arg0);
void *TObjFogCollision__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjFogCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjFogCollision__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
