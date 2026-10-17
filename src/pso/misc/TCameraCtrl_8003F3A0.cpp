#include "types.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TCameraCtrl.h"

s32 TBoss3Volopt::get_adjusted_angle(s32 arg1) {
    return *(s16 *)&this->m_2c + arg1;
}

u16 TBoss3Volopt::get_param_offset(s32 arg1) {
    return (u16) (this->m_1c + arg1);
}
