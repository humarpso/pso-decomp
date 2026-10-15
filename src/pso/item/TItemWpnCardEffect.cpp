#include "types.h"
#include "pso/item/TItemWpnCardEffect.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_effect_objects__10TObjPlayerFv(void *);

extern s32 lbl_804EDD44[];

void *TItemWpnCardEffect::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804EDD44;
        destroy_effect_objects__10TObjPlayerFv(this);
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
