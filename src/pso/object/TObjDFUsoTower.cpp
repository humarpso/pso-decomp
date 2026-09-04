#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__14TObjDFUsoTower[];

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjDFUsoTower;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80052000
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TObjDFUsoTowerFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK fn_803DC86C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;

void render__14TObjDFUsoTowerFv(u8 *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (lbl_805D8A30 != temp_f1) {
        if (temp_f1 < lbl_805D8A34) {
            TObjPlayer__sub_80052390();
            fn_803DC86C(1, 4, 5, 0);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
        if (M2C_FIELD(arg0, f32 *, 0x94) < lbl_805D8A34) {
            sync_player_globals__10TObjPlayerFv();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052284
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjDFUsoTowerFPv(void *arg0);
void *TObjDFUsoTower__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__14TObjDFUsoTowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjDFUsoTower__ct(o, arg0);
    }
    return o;
}

}
#endif
#endif
