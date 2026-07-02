#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOBarrierEnergy01__sub_80157FC8(void *arg0);
void *TOBarrierEnergy01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TOBarrierEnergy01__sub_80157FC8(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TOBarrierEnergy01__ct(o, tl_05, arg0);
    }
    return o;
}

}
