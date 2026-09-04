#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOVS2Wreck06__create(void *arg0);
void *__dt__12TOVS2Wreck06Fv(void *arg0, s16 arg1);
void *TOVS2Wreck06__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy__11TOVS2Wall01FPvs(void *, int);

void *TOVS2Wreck06__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck06__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__12TOVS2Wreck06[];

void *__dt__12TOVS2Wreck06Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck06;
        destroy__11TOVS2Wall01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017C258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOVS2Wreck06__ct(void *arg0, void *arg1);
void TOVS2Wall01__sub_8017C8EC(void *, void *, int);

extern M2C_UNK __vt__12TOVS2Wreck06[];
extern void *lbl_805D31DC;

void *TOVS2Wreck06__ct(void *arg0, void *arg1) {
    TOVS2Wall01__sub_8017C8EC(arg0, arg1, 5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck06;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D31DC;
    return arg0;
}

}
#endif
#endif
