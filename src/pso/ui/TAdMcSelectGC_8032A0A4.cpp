#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TAdMcSelectGC__sub_8032A0A4(void *arg0);
void *TAdMcSelectGC__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D6C88;

void * TAdMcSelectGC__sub_8032A0A4(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TAdMcSelectGC__ct(o, arg0);
    }
    lbl_805D6C88 = o;
    return o;
}

}
