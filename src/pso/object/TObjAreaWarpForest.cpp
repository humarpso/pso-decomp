#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjAreaWarpForest__vt17(void* p);

int TObjAreaWarp__sub_8019CA24(void*);

int TObjAreaWarpForest__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019C7D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__18TObjAreaWarpForest[];

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpForest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2A08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjAreaWarpForest__create(void *arg0);
void *TObjAreaWarpForest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjAreaWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0F04
#include "types.h"

extern "C" {

void render_if_active__18TObjAreaWarpForestFPv(void* p);
int render__18TObjAreaWarpForestFv(void*);

void render_if_active__18TObjAreaWarpForestFPv(void* p) { if (*(int*)((char*)p + 0xdc) != 0) { render__18TObjAreaWarpForestFv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0F30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjAreaWarpForest__sub_802F0F30(void *arg0);
s32 TObjBoss2Tunnel__sub_802F2070();
M2C_UNK run_task__18TObjAreaWarpForestFv(void *);

void TObjAreaWarpForest__sub_802F0F30(void *arg0) {
    if (TObjBoss2Tunnel__sub_802F2070() != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 1;
    }
    run_task__18TObjAreaWarpForestFv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0F74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjAreaWarpForest__sub_802F0F74(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__18TObjAreaWarpForestFv(void *, int);

extern M2C_UNK lbl_804E48D8[];

void *TObjAreaWarpForest__sub_802F0F74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E48D8;
        __dt__18TObjAreaWarpForestFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0FCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__18TObjAreaWarpForestFPvPvPv(void *arg0, void *, void *);
void *alloc_and_init__18TObjAreaWarpForestFPv(void *arg0);
void TObjAreaWarpForest__ct(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK lbl_804E48D8[];

void *init__18TObjAreaWarpForestFPvPvPv(void *arg0, void *, void *) {
    TObjAreaWarpForest__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E48D8;
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
    return arg0;
}

extern void *tl_05;

void *alloc_and_init__18TObjAreaWarpForestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = init__18TObjAreaWarpForestFPvPvPv((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

}
#endif
#endif
