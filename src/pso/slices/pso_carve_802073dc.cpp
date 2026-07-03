#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TSceneSora__ct(void *, void *);
extern void *tl_05;

void *TSceneSora__sub_802073DC(void) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        TSceneSora__ct(o, tl_05);
    }
    return o;
}

}
