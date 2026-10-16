#ifndef PSO_MISC_TOMINETRAP_H
#define PSO_MISC_TOMINETRAP_H

#include "types.h"
#include "pso/misc/TOMine.h"

struct TOMineTrap : public TOMine {
    virtual ~TOMineTrap();
    virtual void run_task();
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x2];
    u16 m_37e;
    u32 m_380;
    u16 get_trap_type();
    static int get_trap_count();
    static void set_instance(int a0);
    static void set_trap_count(int a0);
    void bswap_6x80_trigger_trap();
    void send_and_handle_60();
    s32 matches_id(u16 arg1);
    void set_state();
    s32 find_target_in_range();
    void set_triggered();
    static void destroy_matching_traps();
    void*get_mine_data_ptr();
    s32 is_target_in_list(void *obj);
    s32 check_trigger(u32 arg1);
    s32 can_trigger(u32 arg1);
    void init_object_set_pos();
    static void init_trap();
    void update_state();
    void spawn_effect();
    void attach_to_keymachine();
    void detonate_if_triggered();
    f32 trigger_explosion();
    f32 calc_trigger_range(s32 arg1);
    void update_trigger();
    void follow_target();
    void update_float_height();
    void sync_position();
    void send_state_packet(u16 idx);};

typedef char TOMineTrap_size[sizeof(TOMineTrap) == 0x384 ? 1 : -1];
#endif
