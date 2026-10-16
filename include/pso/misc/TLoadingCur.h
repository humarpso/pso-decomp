#ifndef PSO_MISC_TLOADINGCUR_H
#define PSO_MISC_TLOADINGCUR_H

#include "types.h"

struct TLoadingCur
{
    int sub_8001CCD4();
    void update_camera_facing_offset();
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x8];
    void* m_2c;
    u8 _pad30[0x14];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    static s32 calc_clamp_offset(s32 arg0, u8 *arg1, u8 *arg2);
    int render();
    void run_task();
    u8 is_flag_set();
};

#endif
