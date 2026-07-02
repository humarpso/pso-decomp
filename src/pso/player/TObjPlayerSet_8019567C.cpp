#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayerSet__sub_8019567C(void *arg0);
void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1);
void *TObjPlayerSet__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void fn_801A25B4(void *, int);

extern void *tl_06;

void *TObjPlayerSet__sub_8019567C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjPlayerSet__ct(o, tl_06, arg0);
    }
    return o;
}

extern M2C_UNK __vt__13TObjPlayerSet[];

void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjPlayerSet;
        fn_801A25B4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
