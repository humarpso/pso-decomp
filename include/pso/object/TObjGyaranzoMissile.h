#ifndef PSO_OBJECT_TOBJGYARANZOMISSILE_H
#define PSO_OBJECT_TOBJGYARANZOMISSILE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjGyaranzoMissile : public TUnk_804AF8A0 {
    virtual ~TObjGyaranzoMissile();
    void* m_ac;
    u8 _padB0[0x14];
    u16 m_c4;
    u8 _padC6[0x2];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u8 _padD4[0x4];
    u16 m_d8;
    void *destroy(s16 arg1);
    void render();
    void run_task();
    void draw();
    void update_flight();
    f32 scale_velocity(f32 farg0);
    u8 unk_DA[0x2];
};

typedef char TObjGyaranzoMissile_size[sizeof(TObjGyaranzoMissile) == 0xDC ? 1 : -1];
#endif
