#ifndef PSO_MISC_TODOORMACHINE01_H
#define PSO_MISC_TODOORMACHINE01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorMachine01 : public TUnk_804B0BB8 {
    virtual ~TODoorMachine01();
    virtual void vfunc_20();
    virtual void vfunc_17();
    virtual void play_proximity_sound();
    virtual void update_door_switch_state();
    u32 m_d4;
    u32 m_d8;
    void draw_part_models(u8 *arg1, s32 arg2);
    virtual void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
    u8 unk_DC[0x4];
    f32 m_e0;
    u8 unk_E4[0x4];
    f32 m_e8;
};

typedef char TODoorMachine01_size[sizeof(TODoorMachine01) == 0xEC ? 1 : -1];
#endif
