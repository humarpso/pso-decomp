#ifndef PSO_OBJECT_TOBJGYARANZOMISSILE_H
#define PSO_OBJECT_TOBJGYARANZOMISSILE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjGyaranzoMissile : public TUnk_804AF8A0 {
    virtual ~TObjGyaranzoMissile();
    void sub_800D47B4();
    void* m_ac;
    u8 unk_B0[0x4];
    f32 m_b4;
    u8 unk_B8[0xC];
    u16 m_c4;
    u8 _padC6[0x2];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u8 _padD4[0x4];
    u16 m_d8;
    virtual void render();
    virtual void run_task();
    f32 scale_velocity(f32 farg0);
    u8 unk_DA[0x2];
    void copy_from(void* q);
};

typedef char TObjGyaranzoMissile_size[sizeof(TObjGyaranzoMissile) == 0xDC ? 1 : -1];
#endif
