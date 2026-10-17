#include "types.h"
#include "pso/misc/TWindowCost.h"

extern "C" {

void *TWindowCost__ct(void *arg0);
void *__dt__11TWindowCostFv(void *arg0, s16 arg1);
void TWindowMeseta__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__13TWindowMesetaFv(void *, int);
void get_item_count__24TShopEquipmentSellWindowFv(void *, int);

extern s32 __vt__11TWindowCost[];

void *__dt__11TWindowCostFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TWindowCost;
        __dt__13TWindowMesetaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TWindowCost__class_name;

void *TWindowCost__ct(void *arg0) {
    TWindowMeseta__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TWindowCost;
    *(void * *)&((TWindowCost *)arg0)->m_name = TWindowCost__class_name;
    get_item_count__24TShopEquipmentSellWindowFv(arg0, 0);
    return arg0;
}

}
