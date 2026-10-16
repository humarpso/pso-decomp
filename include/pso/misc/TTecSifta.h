#ifndef PSO_MISC_TTECSIFTA_H
#define PSO_MISC_TTECSIFTA_H

#include "types.h"
#include "pso/misc/TTecPlayerInfluence.h"

struct TTecSifta : public TTecPlayerInfluence {
    virtual ~TTecSifta();
    u32 m_e0;
    u8 _padE4[0x58];
    u32 m_13c;
    void update_effect_params();
    void create_instance(void *arg1, void *arg2, void *arg3);
    static void create(void *arg0, void *arg1, void *arg2);
    static void render();};

typedef char TTecSifta_size[sizeof(TTecSifta) == 0x140 ? 1 : -1];
#endif
