#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TBoss3VoloptHiraisin__sub_80041AA0(void *, void *, void *);
extern void *tl_04;

void *TBoss3VoloptHiraisin__sub_8004181C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TBoss3VoloptHiraisin__sub_80041AA0(o, tl_04, arg0);
    }
    return o;
}

}
