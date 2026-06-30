#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjQuestColALock2__ct(void *, void *, void *);
extern void *lbl_805D5C50;

void *fn_80195954(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestColALock2__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}

}
