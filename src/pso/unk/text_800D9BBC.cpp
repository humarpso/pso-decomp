#include "types.h"
#include "pso/enemy/TObjEneNanoDrago.h"
#include "pso/enemy/TObjEneMe1GiGue.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_actor_to_ground(void *, void *, s32);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TObjEneNanoDrago::sub_800D9BBC() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x388);
    if (temp_r4 & 0x40000) {
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (temp_r4 & 0xFFFBFFFF);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        project_actor_to_ground(arg0, arg0 + 0x38, 0);
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 7) {
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (temp_r4 & 0xFFFFFFFE);
        ((TObjEneMe1GiGue *)arg0)->update_if_active(0);
    }
}
#pragma pop

}
