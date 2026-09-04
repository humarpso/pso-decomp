#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjContainerBase__vt78(void *arg0);

M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

void TObjContainerBase__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80188A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjContainerBase__create(void *arg0);
void *TObjContainerBase__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjContainerBase__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerBase__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80188D58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TObjContainerBaseFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__17TObjContainerBase[];

void *__dt__17TObjContainerBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjContainerBase;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
