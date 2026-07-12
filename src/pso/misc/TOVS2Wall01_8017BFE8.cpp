#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TOVS2Wall01FPv(void *arg0);
void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1);
void *TOVS2Wall01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80018FE0(void *, int);
void fn_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

void *create__11TOVS2Wall01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x360);
    if (o != NULL) {
        o = TOVS2Wall01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOVS2Wall01[];

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOVS2Wall01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        fn_800D7C58((s8 *)arg0 + 0x340, -1);
        TObjPlayer__sub_80018FE0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
