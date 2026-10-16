#ifndef PSO_MISC_TOBIND_H
#define PSO_MISC_TOBIND_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOBind : public TUnk_804AF8A0 {
    virtual ~TOBind();
    u8 unk_AC[0x4];
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0xC];
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
    void run_task();
    void render();
    static void *create(void *arg0);
    static void free_static_model();
    static void load_static_resource();
    u8 unk_D0[0x8];
};

typedef char TOBind_size[sizeof(TOBind) == 0xD8 ? 1 : -1];
#endif
