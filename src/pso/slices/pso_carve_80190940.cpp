#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TRaderMapCore__sub_8030A808(void *);
extern void *tl_05;
void *__nw__7TObjectFUl(int);
void *TObjEnvSound__ct(void *, void *, void *);

void * TObjEnvSound__create(void *arg0) {
    void *o;
    if (TRaderMapCore__sub_8030A808(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjEnvSound__ct(o, tl_05, arg0);
    }
    return o;
}

}
