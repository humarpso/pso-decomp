#ifndef PSO_MISC_TODUMMYKEYCAVE01_H
#define PSO_MISC_TODUMMYKEYCAVE01_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TODummyKeyCave01 : public TUnk_804B9870 {
    virtual ~TODummyKeyCave01();
    void sub_80165940();
    u32 m_90;
    u32 m_94;
    u16 m_98;
    u16 m_9a;
    void* m_9c;
    u8 _padA0[0xC];
    void* m_ac;
    u8 _padB0[0x8];
    u32 m_b8;
    u8 _padBC[0x4];
    u32 m_c0;
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
};

typedef char TODummyKeyCave01_size[sizeof(TODummyKeyCave01) == 0xD4 ? 1 : -1];
#endif
