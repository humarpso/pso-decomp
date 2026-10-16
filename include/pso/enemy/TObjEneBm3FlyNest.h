#ifndef PSO_ENEMY_TOBJENEBM3FLYNEST_H
#define PSO_ENEMY_TOBJENEBM3FLYNEST_H

#include "types.h"

struct TObjEneBm3FlyNest
{
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x7C];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x40];
    u32 m_394;
    u8 _pad398[0x10];
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
    u8 _pad3B8[0xC];
    u16 m_3c4;
    u8 _pad3C6[0x7A];
    void* m_440;
    u8 _pad444[0x70];
    u32 m_4b4;
    u32 m_4b8;
    u32 m_4bc;
    u32 m_4c0;
    u32 m_4c4;
    u32 m_4c8;
    u32 m_4cc;
    u32 m_4d0;
    u32 m_4d4;
    static void capture_attachment(void * _w0);
    static int init(void* p);
    void remove_child(u8 *child);
    s32 has_free_attack_slot(u16 id);
    void spawn_child();
    void update_replenish();
    void copy_pos();
    static void free_fly();
    static void *create(void *arg0);
    static void load_resources();
    void render_parts();
    static void init_vertex_table();
};

#endif
