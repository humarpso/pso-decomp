#ifndef PSO_OBJECT_TOBJBUTTERFLYLOBBY_H
#define PSO_OBJECT_TOBJBUTTERFLYLOBBY_H

#include "types.h"

struct TObjButterflyLobby
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x24];
    u32 m_90;
    u8 _pad94[0x28];
    s16 m_bc;
    s16 m_be;
    u8 m_c0;
    u8 m_c1;
    u8 m_c2;
    u8 _padC3[0x1];
    u32 m_c4;
    u32 m_c8;
    static void free_singleton_805D4E6C();
    static void alloc_scene_buffer();
    void init_params();
    void render();
    void update_fade();
    void run_task();
    static void destroy_instance();
};

#endif
