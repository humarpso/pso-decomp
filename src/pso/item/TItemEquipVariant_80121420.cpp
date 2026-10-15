#include "types.h"

extern "C" {

void *item_equip_variant_deleting_dtor_80121420(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern s32 lbl_804A08B8[];

void *item_equip_variant_deleting_dtor_80121420(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A08B8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
