#ifndef PSO_ENEMY_TOBJENEME1GEE_H
#define PSO_ENEMY_TOBJENEME1GEE_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneMe1Gee : public TObjEneDD_ST {
    virtual ~TObjEneMe1Gee();
    void copy_pos();
    void sub_800CC0C4();
    void sub_800CBF58(f32);
    void sub_800CBE6C();
    void update_hover_height();
    void update_animation_frame();
    void update_fade_sequence();
    void update_packed_color();
    void sub_800CB60C();
    void sub_800CB5F0();
    void sub_800CB5D4();
    void sub_800CB5B8();
    void set_flag3c8_bit2();
    void state_attack_loop(s32);
    void render();
    void run_task();
    u8 unk_374[0x30];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    void* m_3cc;
    u8 _pad3D0[0x10];
    u32 m_3e0;
    u8 _pad3E4[0x20];
    u32 m_404;
    u32 m_408;
    u8 _pad40C[0x4];
    u32 m_410;
    void* m_414;
    u8 _pad418[0x8];
    void* m_420;
    u8 _pad424[0xC];
    u32 m_430;
    u32 m_434;
    u8 _pad438[0x40];
    u32 m_478;
    u32 m_47c;
    u8 _pad480[0xC];
    u16 m_48c;
    static void load_resources();
    static void cache_result_805D6660();
    static void queue_debug_text(s32 arg0, char *arg1);
    u8 unk_472[0x1E];
};

typedef char TObjEneMe1Gee_size[sizeof(TObjEneMe1Gee) == 0x490 ? 1 : -1];
#endif
