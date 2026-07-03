#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TScene__sub_802065B4(void);
void *TScene__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void TScene__sub_802065B4(void) {
    void *o;
    o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        TScene__ct(o, tl_02);
    }
}

}
