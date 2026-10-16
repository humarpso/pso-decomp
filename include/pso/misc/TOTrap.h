#ifndef PSO_MISC_TOTRAP_H
#define PSO_MISC_TOTRAP_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOTrap : public TUnk_804806E8 {
    virtual ~TOTrap();
    virtual void run_task();
    f32 range;
    f32 dist;
    u16 player;
    u8 _pad33E[0x2];
    u32 m_340;
    static f32 scale_by_table_value(f32 farg0);
    s32 is_any_player_matching_stat();
    void submit_cursor_and_notify();
    void find_target_player();
    void play_sounds();
    void trigger(s16 *arg1, s32 arg2);
    virtual void render();
    f32 check_trigger_range(u32 arg1);
    f32 get_scale(u32 arg1);};

typedef char TOTrap_size[sizeof(TOTrap) == 0x344 ? 1 : -1];
#endif
