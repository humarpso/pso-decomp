#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *item_equip_variant_deleting_dtor_801285D8(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);

extern s32 lbl_804A3C20[];

void *item_equip_variant_deleting_dtor_801285D8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3C20;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
