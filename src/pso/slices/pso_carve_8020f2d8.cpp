#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TShopGetItemWindow__ct(void *, void *, void *, void *);
extern void *tl_05;

void *fn_8020F2D8(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        TShopGetItemWindow__ct(o, tl_05, arg0, M2C_FIELD(arg0, void **, 0x24));
    }
    return o;
}

}
