#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEnvSoundEx__create(void *arg0);
void *TObjEnvSoundEx__ct(void *, void *, void *);
int TRaderMapCore__sub_8030A808(void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void * TObjEnvSoundEx__create(void *arg0) {
    void *o;
    if (TRaderMapCore__sub_8030A808(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA8);
    if (o != NULL) {
        o = TObjEnvSoundEx__ct(o, tl_05, arg0);
    }
    return o;
}

}
