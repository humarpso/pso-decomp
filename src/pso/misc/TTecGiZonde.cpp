#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TTecGiZondeFv(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 TTecGiZonde__sub_80231C58(void *);
M2C_UNK TTecGiZonde__sub_80232598(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__11TTecGiZondeFv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x130) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TTecGiZonde__sub_80231C58(arg0) == 1) {
        TTecGiZonde__sub_80232598(arg0);
    }
    queue_destruction__7TObjectFv(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802324E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecGiZonde__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x18C);
    if (o != NULL) {
        TTecGiZonde__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80232540
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TTecGiZondeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__11TTecGiZonde[];

void *__dt__11TTecGiZondeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TTecGiZonde;
        destroy_technique_effect_resources__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023CDC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_lifetime__11TTecGiZondeFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv();

void tick_lifetime__11TTecGiZondeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x46) {
        queue_destruction__7TObjectFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023CDFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TTecGiZonde__sub_8023CDFC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCD78[];

void *TTecGiZonde__sub_8023CDFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD78;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
