#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjInfoCol__ct(void *, void *, void *);
extern void *tl_05;

void *TObjInfoCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjInfoCol__ct(o, tl_05, arg0);
    }
    return o;
}

}
