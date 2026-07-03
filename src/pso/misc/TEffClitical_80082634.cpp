#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TEffClitical__sub_80082634(void *arg0);
void *__ct__12TEffCliticalFv(void *, void *);
void *__nw__7TObjectFUl(int);

void TEffClitical__sub_80082634(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        __ct__12TEffCliticalFv(o, arg0);
    }
}

}
