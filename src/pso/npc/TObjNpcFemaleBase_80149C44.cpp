#include "types.h"

extern "C" {

void request_action__17TObjNpcFemaleBaseFPvi(void *arg0, s32 arg1);
void TObjNpcFemaleBase__sub_80149C64(void);

void request_action__17TObjNpcFemaleBaseFPvi(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        return;
    }
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
}

extern u32 lbl_805D5758;

void TObjNpcFemaleBase__sub_80149C64(void) {
    if ((u32) lbl_805D5758 != 0U) {
        lbl_805D5758 = 0U;
    }
}

}
