#ifndef PSO_UNK_TUNK_804B0BB8_H
#define PSO_UNK_TUNK_804B0BB8_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TUnk_804B0BB8 : public TUnk_804AFBF8 {
public:
    virtual ~TUnk_804B0BB8();
    void play_door_sound();
    virtual void update_door_switch_state();
    virtual void play_proximity_sound();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_18();
    virtual s32 init_door_switch_binding();
    virtual void vfunc_20();
    virtual void run_task();
    u8 unk_C8[0x4];
    s32 m_cc;
    s32 m_d0;
};

#endif
