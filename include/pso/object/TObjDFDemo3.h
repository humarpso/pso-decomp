#ifndef PSO_OBJECT_TOBJDFDEMO3_H
#define PSO_OBJECT_TOBJDFDEMO3_H

#include "types.h"

struct TObjDFDemo3
{
    u8 _pad1C[0x74];
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u8 _padB4[0x4];
    u32 m_b8;
    void* m_bc;
    static void *create(void *arg0, void *arg1, void *arg2);
};

#endif
