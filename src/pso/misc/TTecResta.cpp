#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TTecRestaFv(void);

void render__9TTecRestaFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80239490
#include "types.h"

extern "C" {

int init_cast__9TTecRestaFPv(void* p);
int fn_80236EE8(void*);

int init_cast__9TTecRestaFPv(void* p) { return fn_80236EE8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802395F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_lifetime__9TTecRestaFPv(void *arg0);
void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv();

void tick_lifetime__9TTecRestaFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r4 + 1);
    if (temp_r4 > 0xB4) {
        queue_destruction__7TObjectFv();
    }
}

extern M2C_UNK lbl_804CCBC0[];

void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCBC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802397B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecResta__ct(void *, void *, void *, void *, void *);
void *TTecResta__sub_80239C48(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__sub_80239C48(o, arg0, arg1, arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80239B30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TTecRestaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);

extern M2C_UNK __vt__9TTecResta[];

void *__dt__9TTecRestaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecResta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
