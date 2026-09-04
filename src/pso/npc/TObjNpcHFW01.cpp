#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcHHM00__create(void *arg0);
void *__dt__12TObjNpcHFW01Fv(void *arg0, s16 arg1);
void *TObjControl__ct(void *, void *);
void *TObjNpcHHM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy__17TObjNpcFemaleTallFPvs(void *, int);

extern M2C_UNK __vt__12TObjNpcHFW01[];

void *__dt__12TObjNpcHFW01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcHFW01;
        destroy__17TObjNpcFemaleTallFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcHHM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHHM00__ct(o2, o, arg0);
    }
    return o2;
}

}
