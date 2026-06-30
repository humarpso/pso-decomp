#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TBoss6CrushPtcl__ct(void *, void *, void *);
extern void *tl_02;

void *fn_80359F78(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TBoss6CrushPtcl__ct(o, tl_02, arg0);
    }
    return o;
}

}
