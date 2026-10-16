#ifndef PSO_MISC_TWINDOWCHOICESETTING_H
#define PSO_MISC_TWINDOWCHOICESETTING_H

#include "types.h"
#include "pso/misc/TUnk_804D0658.h"

struct TWindowChoiceSetting : public TUnk_804D0658 {
    virtual ~TWindowChoiceSetting();
    s16 get_field_74();
    virtual void render();
    u16 m_80;
    void draw();
    virtual void run_task();
    u8 unk_82[0x2];
};

typedef char TWindowChoiceSetting_size[sizeof(TWindowChoiceSetting) == 0x84 ? 1 : -1];
#endif
