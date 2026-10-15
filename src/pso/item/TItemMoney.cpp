#include "types.h"

extern "C" {

void *__dt__10TItemMoneyFv(void *arg0, s16 arg1);
void __dt__5TItemFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern s32 __vt__10TItemMoney[];

void *__dt__10TItemMoneyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TItemMoney;
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
