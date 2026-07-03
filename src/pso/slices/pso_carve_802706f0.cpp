#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern unsigned char lbl_804D0CB0[];
void *__nw__7TObjectFUl(int);
void *TWindowSimpleStatus__ct(void *, void *, void *, void *);

void * fn_802706F0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSimpleStatus__ct(o, arg0, arg1, lbl_804D0CB0);
    }
    return o;
}

}
