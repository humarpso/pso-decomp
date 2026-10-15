#include "types.h"
#include "pso/npc/TObjNpcFemaleBase.h"

extern "C" {

void TObjNpcFemaleBase__sub_80149C64(void);

void TObjNpcFemaleBase::request_action(s32 arg1) {
    if (arg1 != 1) {
        *(s16 *)((s8 *)this + 0xB8) = 0;
        return;
    }
    *(s16 *)((s8 *)this + 0xB8) = 1;
}

extern u32 lbl_805D5758;

void TObjNpcFemaleBase__sub_80149C64(void) {
    if ((u32) lbl_805D5758 != 0U) {
        lbl_805D5758 = 0U;
    }
}

}
