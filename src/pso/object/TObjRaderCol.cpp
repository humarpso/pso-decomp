#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TObjRaderColFv(void *arg0);
M2C_UNK TRaderMapCore__sub_801F9C54(s16);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK TObjRaderCol__sub_8019750C(void *);
M2C_UNK TObjRaderCol__sub_801975DC(void *);

void run_task__12TObjRaderColFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x98);
    switch (temp_r0) {
    case 0:
        TRaderMapCore__sub_801F9C54((s16) M2C_FIELD(arg0, s32 *, 0x94));
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
        return;
    case 1:
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            TObjRaderCol__sub_8019750C(arg0);
            return;
        }
        TObjRaderCol__sub_801975DC(arg0);
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80197508
#include "types.h"

extern "C" {

void render__12TObjRaderColFv(void);

void render__12TObjRaderColFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019777C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjRaderColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__12TObjRaderCol[];

void *__dt__12TObjRaderColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjRaderCol;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2BC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjRaderCol__create(void *arg0);
void *TObjRaderCol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjRaderCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjRaderCol__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
