#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__12TOMineIcon03FPv(void *arg0);
void *__dt__12TOMineIcon03Fv(void *arg0, s16 arg1);
void *TOMineIcon03__ct(void *, void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK free_collision_body_parts(void *);

extern void *tl_05;

void *create__12TOMineIcon03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x37C);
    if (o != NULL) {
        o = TOMineIcon03__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__12TOMineIcon03[];

void *__dt__12TOMineIcon03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMineIcon03;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
