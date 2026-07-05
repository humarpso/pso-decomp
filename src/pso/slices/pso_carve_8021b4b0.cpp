#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TShopArmorListWindow__ct(void *, void *, void *, void *);
extern void *tl_05;

void *fn_8021B4B0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1F8);
    if (o != NULL) {
        TShopArmorListWindow__ct(o, tl_05, arg0, M2C_FIELD(arg0, void **, 0x24));
    }
    return o;
}

}
