#ifndef PSO_MISC_TPLYPHOTONCHAIR_H
#define PSO_MISC_TPLYPHOTONCHAIR_H

#include "types.h"

struct TPlyPhotonChair
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x26];
    u16 m_92;
    u32 m_94;
    void* m_98;
    u32 m_9c;
    u8 _padA0[0x14];
    void* m_b4;
    u32 m_b8;
    u8 _padBC[0x14];
    void* m_d0;
    void render();
    void run_task();
    static void free_static_model();
    static s32 load_resources();
    void set_field90(s32 v);
    static void render(void* p, void* a1);
    void set_state_ready();
    void sync_field10_from_child();
    void set_field_8(s32 v);
    void set_type(s32 v);
    void *init();
    u8 *init_parts();
    static void free_instance();
    static void play_sound_with_arg(void* p, void* a1);
    void play_sound();
    static void update_parts(void* p);
    static void update_parts2(void* p);
    static void restore_state(s32 _w0);
    static void copy_vec4_forward(s32 _w0);
    static void copy_vec4_reverse(s32 _w0);
    static void save_state(s32 _w0);
    void draw_model();
    void update_scale_state();
    void update_bob_motion();
    void *destroy(s16 arg1);
    f32 get_float_c();
    s32 get_id();
    void activate();
    int is_mounted();
};

#endif
