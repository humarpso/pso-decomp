#include "types.h"
#include "pso/item/TItemEquipVariant_80120CF8.h"
#include "pso/item/TItemEquipVariant_8012B200.h"
#include "pso/player/TObjPlayer.h"

extern s32 partisan_weapon_vtable[];

void *__dt__13TUnk_804A4D70Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = partisan_weapon_vtable;
        __dt__11TItemWeaponFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}
