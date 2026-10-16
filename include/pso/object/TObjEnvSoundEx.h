#ifndef PSO_OBJECT_TOBJENVSOUNDEX_H
#define PSO_OBJECT_TOBJENVSOUNDEX_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjEnvSoundEx : public TUnk_804B9870 {
    virtual ~TObjEnvSoundEx();
    virtual void run_task();
    u32 m_90;
    u8 _pad94[0x8];
    u32 m_9c;
    u32 m_a0;
    s32 init_sound_params();
    virtual void render();
    u8 unk_A4[0x4];
};

typedef char TObjEnvSoundEx_size[sizeof(TObjEnvSoundEx) == 0xA8 ? 1 : -1];
#endif
