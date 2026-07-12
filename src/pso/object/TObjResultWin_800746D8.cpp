#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjResultWinFPv(void *arg0);
void *__ct__13TObjResultWinFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;

void *create__13TObjResultWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x15C);
    if (o != NULL) {
        o = __ct__13TObjResultWinFv(o, tl_07, arg0);
    }
    return o;
}

}
