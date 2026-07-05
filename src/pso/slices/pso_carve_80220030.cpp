#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TShopEquipmentSellWindow__ct(void *, void *, void *, void *, int);
extern void *tl_05;

void *fn_80220030(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3AC);
    if (o != NULL) {
        TShopEquipmentSellWindow__ct(o, tl_05, arg0, M2C_FIELD(arg0, void **, 0x24), 45);
    }
    return o;
}

}
