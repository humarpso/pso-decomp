#include "types.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 update_if_active__15TObjEneMe1GiGueFl(void *, s32);
s32 project_actor_to_ground(void *, void *, s32);
void fn_800D9BBC(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_800D9BBC(u8 *arg0) {
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
        update_if_active__15TObjEneMe1GiGueFl(arg0, 0);
    }
}
#pragma pop

}
