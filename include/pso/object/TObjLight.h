#ifndef PSO_OBJECT_TOBJLIGHT_H
#define PSO_OBJECT_TOBJLIGHT_H

#include "types.h"

struct TObjLight
{
    u8 _pad1C[0xC];
    s16 m_28;
    u8 _pad2A[0xE];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u32 m_90;
    u32 m_94;
    u8 _pad98[0x4];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0x14];
    void* m_bc;
    u8 _padC0[0xC];
    void* m_cc;
    u8 _padD0[0x8];
    void* m_d8;
    static void render();
    void run_task();
    void*init_light(int a1);
    void unregister_and_free();
    static u32 alloc_light_slot();
    void *init_map_light(int _w1);
    static void init_directional_light();
    void *dt(s16 arg1);
    void *init(int _w1);
    static void free_shared_data();
    void *dt2(s16 arg1);
    void *init_object();
    static void apply_distant_light();
    void set_light(void *arg1, f32 farg0);
    static void find_light_params(f32 *dir, f32 *color, u32 id);
    static void init_light_tables();
    void bswap_data();
    void *destroy(s16 arg1);
    static void assert_light_id(s32 arg0);
};

#endif
