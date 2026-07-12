#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLaboDesignBase__sub_80364DD8(void *arg0);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLaboDesignBase__sub_80364DD8(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 1);
    }
    return o;
}

}
