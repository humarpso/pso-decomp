#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *__dt__13TUnk_804A5930Fv(void *arg0, s16 arg1);
void __dt__11TItemWeaponFv(void *, int);

extern s32 lbl_804A5930[];

void *__dt__13TUnk_804A5930Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5930;
        __dt__11TItemWeaponFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
