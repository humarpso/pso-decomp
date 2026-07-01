#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjFogCollisionSwitch__ct(void *, void *, void *);
extern void *tl_05;

void *TObjFogCollisionSwitch__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjFogCollisionSwitch__ct(o, tl_05, arg0);
    }
    return o;
}

}
