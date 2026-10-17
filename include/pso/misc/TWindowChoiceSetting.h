#ifndef PSO_MISC_TWINDOWCHOICESETTING_H
#define PSO_MISC_TWINDOWCHOICESETTING_H

#include "types.h"
#include "pso/misc/TUnk_804D0658.h"

struct TWindowChoiceSetting : public TUnk_804D0658 {
    virtual ~TWindowChoiceSetting();
    s16 get_field_74();
    virtual void render();
    u16 m_80;
    virtual void run_task();
    u8 unk_82[0x2];
    static s32 apply_choice(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
};

typedef char TWindowChoiceSetting_size[sizeof(TWindowChoiceSetting) == 0x84 ? 1 : -1];
#endif
