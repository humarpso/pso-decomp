#ifndef PSO_ENEMY_TOBJENEME1CANADIN_H
#define PSO_ENEMY_TOBJENEME1CANADIN_H

#include "types.h"

struct TObjEneMe1Canadin
{
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    void* m_3cc;
    u8 _pad3D0[0x30];
    u32 m_400;
    u32 m_404;
    u8 _pad408[0x4];
    u32 m_40c;
    u8 _pad410[0x5C];
    u32 m_46c;
    u32 m_470;
    u8 _pad474[0x40];
    u32 m_4b4;
    u32 m_4b8;
    u8 _pad4BC[0xC];
    u16 m_4c8;
    void update_by_state(s32 arg1);
    void update_walk_animation(s32 arg1);
    void run_task(s32 arg1);
    void move(s32 arg1);
    void action(s32 arg1);
    void handle_state(s32 arg1);
    void pack_color_rgba();
    void reset_map_core(void * _w1);
    s32 try_trigger_action();
    void advance_state_4_to_5();
    s32 check_target();
    static void update_move(void* p);
    void update_angle();
    void update_hover_height();
    void set_target_speed_z();
    void update_position_with_offset();
    void update_by_field_0x354();
    void copy_pos();
    void run_task();
    void setup_enemy();
    void *init(void *arg1, void *arg2, void *arg3);
    static void *create(void *arg0);
};

#endif
