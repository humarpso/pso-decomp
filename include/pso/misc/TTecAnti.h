#ifndef PSO_MISC_TTECANTI_H
#define PSO_MISC_TTECANTI_H

#include "types.h"
#include "pso/misc/TTecPlayerInfluence.h"

struct TTecAnti : public TTecPlayerInfluence {
    virtual ~TTecAnti();
    u32 m_e0;
    u8 _padE4[0x58];
    u32 m_13c;
    int queue_destruction();
    static void create(void *arg0, void *arg1, void *arg2, void *arg3);
    void copy_params(u8 *arg1);
    static void render();};

typedef char TTecAnti_size[sizeof(TTecAnti) == 0x140 ? 1 : -1];
#endif
