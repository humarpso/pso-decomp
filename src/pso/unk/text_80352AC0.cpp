#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *__dt__13TUnk_804F0FF0Fv(void *arg0, s16 arg1);
void *TItemObject__sub_80352B18(void *arg0);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);

extern s32 lbl_804F0FF0[];

void *__dt__13TUnk_804F0FF0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0FF0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TItemObject__sub_80352B18(void *arg0) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0FF0;
    ((TObjPlayer *)arg0)->clear_item_flags(16);
    return arg0;
}

}
