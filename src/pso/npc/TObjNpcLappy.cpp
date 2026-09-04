#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__12TObjNpcLappyFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

extern M2C_UNK lbl_804A9DD4[];

void *dt__12TObjNpcLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A9DD4;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8014B620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcLappy__sub_8014B620(void *arg0);

void TObjNpcLappy__sub_8014B620(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014B644
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcLappy__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcLappy__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcLappy__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcLappy__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014B808
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcLappy__sub_8014B808(void *arg0, s32 arg1);

void TObjNpcLappy__sub_8014B808(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014B828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcLappy__sub_8014B828(void);

extern u32 lbl_805D57D0;

void TObjNpcLappy__sub_8014B828(void) {
    if ((u32) lbl_805D57D0 != 0U) {
        lbl_805D57D0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014B840
#include "types.h"

extern "C" {

void TObjNpcLappy__sub_8014B840(void);

    extern int lbl_805D57D0;
    extern int lbl_805D5D78;
void TObjNpcLappy__sub_8014B840(void) { lbl_805D57D0 = lbl_805D5D78; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014B84C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

extern M2C_UNK lbl_804A9F50[];

void *destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A9F50;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
