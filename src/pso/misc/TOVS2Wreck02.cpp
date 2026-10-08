#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOVS2Wreck02__create(void *arg0);
void *TOVS2Wreck02__ct(void *arg0, void *arg1);
void *__dt__12TOVS2Wreck02Fv(void *arg0, s16 arg1);
void init_wreck_object__11TOVS2Wall01FPvii(void *, void *, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy__11TOVS2Wall01FPvs(void *, int);

void *TOVS2Wreck02__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck02__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__12TOVS2Wreck02[];

void *__dt__12TOVS2Wreck02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck02;
        destroy__11TOVS2Wall01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__12TOVS2Wreck02[];
extern void *lbl_805D31CC;

void *TOVS2Wreck02__ct(void *arg0, void *arg1) {
    init_wreck_object__11TOVS2Wall01FPvii(arg0, arg1, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck02;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D31CC;
    return arg0;
}

}
