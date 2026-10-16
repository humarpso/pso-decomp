#ifndef PSO_OBJECT_TOBJCITYMAINWARP_H
#define PSO_OBJECT_TOBJCITYMAINWARP_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjCityMainWarp : public TObjAreaWarp {
    virtual ~TObjCityMainWarp();
    void run_task();
    u8 unk_AC[0x88];
    u32 m_150;
    static void update_unlock_flags();
    static void set_active_bit(s32 _w0);
    static void reset();
    static s32 get_phase_flag();
    s32 find_local_player_in_range(f32 farg0);
    void close_windows();
    static void notify_player_warp(void *arg0, s32 arg1);
    void update_floor_switch_state();
    void update_state();
    void update_warp_sequence();
    void render();
    void *create();
    static void clear_active_bit();
    void update_warp_flags_from_story();
    void init_visible_mask();
    u8 unk_138[0x1C];
};

typedef char TObjCityMainWarp_size[sizeof(TObjCityMainWarp) == 0x154 ? 1 : -1];
#endif
