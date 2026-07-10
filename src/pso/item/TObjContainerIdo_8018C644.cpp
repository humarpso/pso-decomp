#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjContainerIdoFPv(void *arg0);
void *TObjContainerIdo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjContainerIdoFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjContainerIdo__ct(o, tl_05, arg0);
    }
    return o;
}

}
