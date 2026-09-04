#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss5FloorGrass.h"

TObjBoss5FloorGrass::~TObjBoss5FloorGrass() {}
#else
#if PSO_CLASS_PACKAGE == 0x8028AA14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjBoss5FloorGrassFv(void);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorGrassFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        TObjPlayer__sub_803D9B2C();
        set_global_param__8TObjFishFi(lbl_805D4DDC);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x78));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028AA5C
#include "types.h"

extern "C" {

void run_task__19TObjBoss5FloorGrassFv(void);

void run_task__19TObjBoss5FloorGrassFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028AAB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__19TObjBoss5FloorGrassFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__19TObjBoss5FloorGrass[];
extern void *lbl_805D3B20;

void *__ct__19TObjBoss5FloorGrassFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss5FloorGrass;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B20;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028AAFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TObjBoss5FloorGrassFv(void);
void *__ct__19TObjBoss5FloorGrassFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__19TObjBoss5FloorGrassFv(void) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__19TObjBoss5FloorGrassFv(o, tl_02);
    }
    return o;
}

}
#endif
#endif
