#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__12TOMineIcon04FPv(void *arg0);
void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1);
void *TOMineIcon04__ct(void *, void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK fn_80156720(void *);

extern void *tl_05;

void *create__12TOMineIcon04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x37C);
    if (o != NULL) {
        o = TOMineIcon04__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__12TOMineIcon04[];

void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMineIcon04;
        TObjPlayer__sub_80154A00(arg0);
        fn_80156720(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
