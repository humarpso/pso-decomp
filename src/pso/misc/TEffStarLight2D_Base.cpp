#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TEffStarLight2D_Base__create(void *arg0);
void *TEffStarLight2D_Base__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_particle;

void *TEffStarLight2D_Base__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TEffStarLight2D_Base__ct(o, tl_particle, arg0);
    }
    return o;
}

}
