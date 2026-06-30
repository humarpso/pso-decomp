#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjEneMe1Gee__sub_800CC788(void *, void *, void *, int);
extern void *tl_04;

void *TObjEneMe1Gee__sub_800CC900(void *arg0) {
    void *o = __nw__7TObjectFUl(0x490);
    if (o != NULL) {
        o = TObjEneMe1Gee__sub_800CC788(o, tl_04, arg0, 0);
    }
    return o;
}

}
