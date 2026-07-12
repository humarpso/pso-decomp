#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFish__sub_803403B0(void *arg0);
void *TObjFish__sub_8034029C(void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjFish__sub_803403B0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x88);
    if (o != NULL) {
        o = TObjFish__sub_8034029C(o, arg0);
    }
    return o;
}

}
