#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TUnk_804A1E28.h"

extern "C" {

void sorcerers_cane_idle(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x1FE);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        *(s16 *)((s8 *)arg0 + 0x1FE) = 2;
    }
}

void TUnk_804A1E28::update_attack() {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)this + 0x1FE);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        *(s16 *)((s8 *)this + 0x1FE) = 1;
    }
}

}

#include "types.h"

extern "C" {

void *item_equip_variant_deleting_dtor_80123E6C(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);

extern s32 lbl_804A1E28[];

void *item_equip_variant_deleting_dtor_80123E6C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1E28;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
