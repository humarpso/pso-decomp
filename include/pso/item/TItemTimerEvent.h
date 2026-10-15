#ifndef PSO_ITEM_TITEMTIMEREVENT_H
#define PSO_ITEM_TITEMTIMEREVENT_H

#include "types.h"

struct TItemTimerEvent
{
    u16 m_1c;
    u8 _pad1E[0x2];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void tick_hp_drain();
    void update_timer();
    static void clear_timer_slot(u16 arg0);
    static void start_event_by_index(u16 arg0);
    static void check_battle_ctrl(int arg0);
    static void notify_if_active(int arg0);
    static void clear_active();
};

#endif
