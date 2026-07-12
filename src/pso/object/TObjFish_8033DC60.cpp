#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_variant__8TObjFishFPv(void *arg0);
void *TObjFish__sub_8033DA94(void *, void *);
void *__nw__7TObjectFUl(int);

void *create_variant__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TObjFish__sub_8033DA94(o, arg0);
    }
    return o;
}

}
