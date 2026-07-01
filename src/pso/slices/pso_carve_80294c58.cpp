#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__10TObjCMNameFv(void *, void *);

void *TObjCMName__sub_80294C58(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = __ct__10TObjCMNameFv(o, arg0);
    }
    return o;
}

}
