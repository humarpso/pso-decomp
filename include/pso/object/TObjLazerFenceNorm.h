#ifndef PSO_OBJECT_TOBJLAZERFENCENORM_H
#define PSO_OBJECT_TOBJLAZERFENCENORM_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjLazerFenceNorm : public TUnk_804AF8A0 {
    virtual ~TObjLazerFenceNorm();
    u32 m_ac;
    u16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    virtual void run_task();
    static void free_resources();
    void draw_model();
    virtual void render();
    void reset_by_door();
    u8 unk_B8[0x4];
    void * m_bc;
    u8 unk_C0[0x18];
};

typedef char TObjLazerFenceNorm_size[sizeof(TObjLazerFenceNorm) == 0xD8 ? 1 : -1];
#endif
