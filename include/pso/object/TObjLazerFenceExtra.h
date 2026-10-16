#ifndef PSO_OBJECT_TOBJLAZERFENCEEXTRA_H
#define PSO_OBJECT_TOBJLAZERFENCEEXTRA_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjLazerFenceExtra : public TUnk_804AF8A0 {
    virtual ~TObjLazerFenceExtra();
    void draw_lazer_fence_extra_model();
    void init_models();
    void render();
    void run_task();
    u8 unk_AC[0x10];
    u32 m_d8;
    u8 unk_C0[0x1C];
};

typedef char TObjLazerFenceExtra_size[sizeof(TObjLazerFenceExtra) == 0xDC ? 1 : -1];
#endif
