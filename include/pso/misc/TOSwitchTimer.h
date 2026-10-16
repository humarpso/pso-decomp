#ifndef PSO_MISC_TOSWITCHTIMER_H
#define PSO_MISC_TOSWITCHTIMER_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOSwitchTimer : public TUnk_804B9870 {
    virtual ~TOSwitchTimer();
    void send_switch_states();
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u16 m_a8;
    u8 _padAA[0x6];
    u8 m_b0;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    u8 unk_B1[0x3];
    s32 m_b4;
};

typedef char TOSwitchTimer_size[sizeof(TOSwitchTimer) == 0xB8 ? 1 : -1];
#endif
