#ifndef PSO_OBJECT_TOBJLAZERFENCE4_H
#define PSO_OBJECT_TOBJLAZERFENCE4_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjLazerFence4 : public TUnk_804AF8A0 {
    virtual ~TObjLazerFence4();
    u32 m_ac;
    u8 _padB0[0x8];
    u16 m_b8;
    u16 m_ba;
    void run_task();
    void init_models();
    void draw();
    void draw_model();
    void reset_if_door_closed();
    void render();
    void *create();
    u8 unk_BC[0x3C];
};

typedef char TObjLazerFence4_size[sizeof(TObjLazerFence4) == 0xF8 ? 1 : -1];
#endif
