#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800E8EA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1);
void *TObjEneSlimeWaterBomb__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x398);
    if (o != NULL) {
        o = TObjEneSlimeWaterBomb__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#endif
