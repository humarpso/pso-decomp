#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowCost__ct(void *arg0);
void TWindowMeseta__ct(void *);
void TShopEquipmentSellWindow__sub_803094E8(void *, int);

extern M2C_UNK __vt__11TWindowCost[];
extern void *lbl_805D40A8;

void *TWindowCost__ct(void *arg0) {
    TWindowMeseta__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowCost;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40A8;
    TShopEquipmentSellWindow__sub_803094E8(arg0, 0);
    return arg0;
}

}
