#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_01;
extern void *lbl_805D4DE0;
void *__nw__7TObjectFUl(int);
void *TObjBoss5Ctrl__ct(void *, void *);

void * fn_800673D0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TObjBoss5Ctrl__ct(o, tl_01);
    }
    lbl_805D4DE0 = o;
    return o;
}

}
