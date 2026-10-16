#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *item_equip_variant_deleting_dtor_80121278(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);

extern s32 lbl_804A07C0[];

void *item_equip_variant_deleting_dtor_80121278(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A07C0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
