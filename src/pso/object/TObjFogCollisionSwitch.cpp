#include "types.h"
#include "pso/object/TObjFogCollisionSwitch.h"

extern "C" {

void vfunc_13__22TObjFogCollisionSwitchFl(void *arg0);

s32 vfunc_13__16TObjFogCollisionFl();

void TObjFogCollisionSwitch::vfunc_13(s32) {
    s32 temp_r0;

    vfunc_13__16TObjFogCollisionFl();
    temp_r0 = *(s32 *)&this->unk_8C;
    if (temp_r0 < 0) {
        *(s32 *)&this->unk_8C = 0;
        return;
    }
    if (temp_r0 > 0xFF) {
        *(s32 *)&this->unk_8C = 0xFF;
    }
}

}
