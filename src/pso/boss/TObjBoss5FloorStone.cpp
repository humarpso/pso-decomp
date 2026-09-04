#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss5FloorStone.h"

TObjBoss5FloorStone::~TObjBoss5FloorStone() {}
#else
#if PSO_CLASS_PACKAGE == 0x80066FEC
#include "types.h"

extern "C" {

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1);
int TObjPlayer__sub_80066F5C(void*);
int draw_if_all_ready__10TObjPlayerFv(void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1) { draw_if_all_ready__10TObjPlayerFv(p); set_global_param__8TObjFishFi(p); TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_80066F5C(a1); TObjPlayer__sub_803D9B78(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802897D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjBoss5FloorStoneFv(void);
M2C_UNK render_impl__19TObjBoss5FloorStoneFPvPv(s32, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv();

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorStoneFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        render_impl__19TObjBoss5FloorStoneFPvPv(lbl_805D4DDC, M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x58));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028980C
#include "types.h"

extern "C" {

void run_task__19TObjBoss5FloorStoneFv(void);

void run_task__19TObjBoss5FloorStoneFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80289868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__19TObjBoss5FloorStoneFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__19TObjBoss5FloorStone[];
extern void *lbl_805D3B10;

void *__ct__19TObjBoss5FloorStoneFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss5FloorStone;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B10;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802898AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TObjBoss5FloorStoneFv(void);
void *__ct__19TObjBoss5FloorStoneFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__19TObjBoss5FloorStoneFv(void) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__19TObjBoss5FloorStoneFv(o, tl_02);
    }
    return o;
}

}
#endif
#endif
