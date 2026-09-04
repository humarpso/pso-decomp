#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMe1GiGueMissile__vt4(void* p);
void TObjEneMe1GiGueMissile__vt7(void* p, void* a1);

int TObjEneMe1GiGueMissile__sub_802CE088(void*, void*);
int queue_destruction__7TObjectFv(void*);

void TObjEneMe1GiGueMissile__vt4(void* p) { TObjEneMe1GiGueMissile__sub_802CE088(p, (char*)p + 0x6c); queue_destruction__7TObjectFv(p); }

void TObjEneMe1GiGueMissile__vt7(void* p, void* a1) { TObjEneMe1GiGueMissile__sub_802CE088(p, (char*)a1 + 0x38); queue_destruction__7TObjectFv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802A4628
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0);

M2C_UNK queue_destruction__7TObjectFv();

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x20)) {
        queue_destruction__7TObjectFv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0xAC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CE220
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1);
M2C_UNK TObjEneMe1GiGueMissile__ct(void *, s32, s32, s32, f32, f32);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);

void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;
    temp_r3 = (void *) __nw__7TObjectFUl(0xC4);
    if ((u32) temp_r3 != 0U) {
        TObjEneMe1GiGueMissile__ct(temp_r3, arg0, arg1, arg2, farg0, farg1);
    }
}

extern M2C_UNK __vt__22TObjEneMe1GiGueMissile[];

void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueMissile;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
