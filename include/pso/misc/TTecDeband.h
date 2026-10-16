#ifndef PSO_MISC_TTECDEBAND_H
#define PSO_MISC_TTECDEBAND_H

#include "types.h"
#include "pso/misc/TTecPlayerInfluence.h"

struct TTecDeband : public TTecPlayerInfluence {
    virtual ~TTecDeband();
    virtual void run_task();
    u32 m_e0;
    u8 _padE4[0x58];
    u32 m_13c;
    int init_params();
    void update_effect_params();
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void create(s32 arg0, s32 arg1, s32 arg2);
    virtual void render();
    void play_state_sound();};

typedef char TTecDeband_size[sizeof(TTecDeband) == 0x140 ? 1 : -1];
#endif
