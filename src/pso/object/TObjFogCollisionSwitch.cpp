#include "types.h"
#include "pso/object/TObjFogCollisionSwitch.h"

extern "C" {

s32 vfunc_13__16TObjFogCollisionFl();

void TObjFogCollisionSwitch::vfunc_13(s32) {
    s32 temp_r0;

    vfunc_13__16TObjFogCollisionFl();
    temp_r0 = *(s32 *)&this->m_8c;
    if (temp_r0 < 0) {
        *(s32 *)&this->m_8c = 0;
        return;
    }
    if (temp_r0 > 0xFF) {
        *(s32 *)&this->m_8c = 0xFF;
    }
}

}
