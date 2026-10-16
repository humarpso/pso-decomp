#ifndef PSO_MISC_TBUTTERFLY_H
#define PSO_MISC_TBUTTERFLY_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TButterfly : public TUnk_804B9870 {
    virtual ~TButterfly();
    u8 unk_90[0xC];
    void* m_9c;
    u8 _padA0[0x14];
    s16 m_b4;
    s16 m_b6;
    u8 m_b8;
    u8 m_b9;
    u8 m_ba;
    void init_motion();
    virtual void render();
    virtual void run_task();
    static void destroy_instance();
    void draw_model();
    u8 unk_BB[0x1];
};

typedef char TButterfly_size[sizeof(TButterfly) == 0xBC ? 1 : -1];
#endif
