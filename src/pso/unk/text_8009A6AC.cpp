#include "types.h"

extern "C" {

void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern s32 bringer_tp_absorb_ring_vtable[];

void *destroy_object_804FE7C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = bringer_tp_absorb_ring_vtable;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
