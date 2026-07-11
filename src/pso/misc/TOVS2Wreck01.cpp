#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOVS2Wreck01__create(void *arg0);
void *__dt__12TOVS2Wreck01Fv(void *arg0, s16 arg1);
void *TOVS2Wreck01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TOVS2Wall01__sub_8017C868(void *, int);

void *TOVS2Wreck01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__12TOVS2Wreck01[];

void *__dt__12TOVS2Wreck01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck01;
        TOVS2Wall01__sub_8017C868(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
