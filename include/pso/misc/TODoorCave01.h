#ifndef PSO_MISC_TODOORCAVE01_H
#define PSO_MISC_TODOORCAVE01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorCave01 : public TUnk_804B0BB8 {
    virtual ~TODoorCave01();
    void send_state(void *);
    virtual void vfunc_20();
    virtual s32 init_door_switch_binding();
    virtual void vfunc_17();
    virtual void play_proximity_sound();
    virtual void update_door_switch_state();
    virtual void vfunc_6(s16 *, s32);
    virtual void render();
    u32 m_d4;
    u32 m_d8;
    static s32 draw_door_model(void *p0, int p1, int arg2);
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
    u8 unk_DC[0x4];
    f32 m_e0;
    u8 unk_E4[0x8];
};

typedef char TODoorCave01_size[sizeof(TODoorCave01) == 0xEC ? 1 : -1];
#endif
