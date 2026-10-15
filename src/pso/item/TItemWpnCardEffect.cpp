#include "types.h"

extern "C" {

void *destroy__18TItemWpnCardEffectFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_effect_objects__10TObjPlayerFPv(void *);

extern s32 lbl_804EDD44[];

void *destroy__18TItemWpnCardEffectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EDD44;
        destroy_effect_objects__10TObjPlayerFPv(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
