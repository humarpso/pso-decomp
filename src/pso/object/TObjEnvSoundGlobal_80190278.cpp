#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEnvSoundGlobal__create(void *arg0);
void *TObjEnvSoundGlobal__ct(void *, void *, void *);
int TRaderMapCore__sub_8030A808(void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void * TObjEnvSoundGlobal__create(void *arg0) {
    void *o;
    if (TRaderMapCore__sub_8030A808(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjEnvSoundGlobal__ct(o, tl_05, arg0);
    }
    return o;
}

}
