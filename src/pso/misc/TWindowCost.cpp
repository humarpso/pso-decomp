#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowCost__ct(void *arg0);
void *__dt__11TWindowCostFv(void *arg0, s16 arg1);
void TWindowMeseta__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__13TWindowMesetaFv(void *, int);
void get_item_count__24TShopEquipmentSellWindowFPv(void *, int);

extern M2C_UNK __vt__11TWindowCost[];

void *__dt__11TWindowCostFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowCost;
        __dt__13TWindowMesetaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__11TWindowCost[];
extern void *lbl_805D40A8;

void *TWindowCost__ct(void *arg0) {
    TWindowMeseta__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowCost;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40A8;
    get_item_count__24TShopEquipmentSellWindowFPv(arg0, 0);
    return arg0;
}

}
