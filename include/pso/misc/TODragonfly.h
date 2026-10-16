#ifndef PSO_MISC_TODRAGONFLY_H
#define PSO_MISC_TODRAGONFLY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TODragonfly : public TUnk_804AFBF8 {
    virtual ~TODragonfly();
    virtual void render();
    virtual void run_task();
    u8 unk_C8[0x4];
    u32 m_cc;
    u8 _padD0[0x4];
    void* m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
    u32 m_fc;
    s32 pick_random_destination(f32 farg0);
    void move_toward_target();
    void update_idle();};

typedef char TODragonfly_size[sizeof(TODragonfly) == 0x100 ? 1 : -1];
#endif
