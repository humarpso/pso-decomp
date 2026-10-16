#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *__dt__11TItemWeaponFv(void *arg0, s16 arg1);
void __dt__14TItemEquipBaseFv(void *, int);

extern s32 __vt__11TItemWeapon[];

void *__dt__11TItemWeaponFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TItemWeapon;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
