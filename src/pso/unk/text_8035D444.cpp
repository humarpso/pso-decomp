#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void item_equip_variant_deleting_dtor_80120CF8(void *, int);
extern s32 ruby_bullet_weapon_vtable[];

void *item_equip_variant_deleting_dtor_8035D444(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = ruby_bullet_weapon_vtable;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
