#ifndef PSO_OBJECT_TOBJENVSOUNDGLOBAL_H
#define PSO_OBJECT_TOBJENVSOUNDGLOBAL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjEnvSoundGlobal : public TUnk_804B9870 {
    virtual ~TObjEnvSoundGlobal();
    u8 unk_90[0x4];
    u32 m_94;
    u32 m_98;
    s32 setup_sound();
    virtual void render();
    virtual void run_task();
};

typedef char TObjEnvSoundGlobal_size[sizeof(TObjEnvSoundGlobal) == 0x9C ? 1 : -1];
#endif
