#ifndef PSO_MISC_TLOADINGCUR_H
#define PSO_MISC_TLOADINGCUR_H

#include "types.h"
#include "pso/TObject.h"

struct TLoadingCur : public TObject {
    virtual ~TLoadingCur();
    int sub_8001CCD4();
    void update_camera_facing_offset();
    u8 unk_1C[0xC];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    static s32 calc_clamp_offset(s32 arg0, u8 *arg1, u8 *arg2);
    void render();
    void run_task();
    u8 is_flag_set();
    u8 unk_38[0x1C];
    f32 m_54;
    u8 unk_58[0x4];
};

typedef char TLoadingCur_size[sizeof(TLoadingCur) == 0x5C ? 1 : -1];
#endif
