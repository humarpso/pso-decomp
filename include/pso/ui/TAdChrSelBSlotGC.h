#ifndef PSO_UI_TADCHRSELBSLOTGC_H
#define PSO_UI_TADCHRSELBSLOTGC_H

#include "types.h"

struct TAdChrSelBSlotGC
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    void create_children();
    void reset();
    static void render(void *self);
    static bool is_slot_state_one(s32 arg0, u32 arg1);
    void set_load_state();
    void init();
    void reset_load_state();
    void reset_slot_state();
    void update_load_state();
    void set_state_confirm();
    void enter_state17();
    void reset_plate_positions();
    void check_cancel_and_close();
    static void *create(void *arg0);
    static int get_global_state();
    static int get_global_slot_data();
};

#endif
