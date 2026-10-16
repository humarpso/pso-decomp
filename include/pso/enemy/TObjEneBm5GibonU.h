#ifndef PSO_ENEMY_TOBJENEBM5GIBONU_H
#define PSO_ENEMY_TOBJENEBM5GIBONU_H

#include "types.h"

struct TObjEneBm5GibonU
{
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x7C];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x6C];
    void* m_3c0;
    u8 _pad3C4[0x8];
    void* m_3cc;
    u8 _pad3D0[0x8];
    void* m_3d8;
    u8 _pad3DC[0x18];
    void* m_3f4;
    u8 _pad3F8[0x6C];
    u32 m_464;
    u8 _pad468[0xC];
    u16 m_474;
    u8 _pad476[0x2];
    u32 m_478;
    void* m_47c;
    u8 _pad480[0x8];
    void* m_488;
    u8 _pad48C[0x20];
    u32 m_4ac;
    void* m_4b0;
    u8 _pad4B4[0x58];
    u32 m_50c;
    u32 m_510;
    u16 m_514;
    u8 _pad516[0x2];
    u32 m_518;
    u32 m_51c;
    u32 m_520;
    u32 m_524;
    u32 m_528;
    u32 m_52c;
    u8 _pad530[0x34];
    u32 m_564;
    void forward_hit_to_node_list();
    void init_child_node();
    static void release_static_resource();
    static void *create(void *arg0);
    static void load_resources();
    void forward_hit(void* a1);
    void init_child(void* a1);
    void reset_fields();
    void*reset();
    void set_field8_from_obj(s32 arg1);
    void push_list_node(void **arg1, void **arg2);
    void unlink_list_node(void ***arg1, void **arg2);
    static s32 destroy(s32 arg0, s16 arg1);
    static void register_global_objects();
    void clear_flag_and_update();
    s32 check_and_update();
    s32 try_activate();
    void debug_print_tech_params();
};

#endif
