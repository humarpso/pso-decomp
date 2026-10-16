#ifndef PSO_MISC_TOROCKJUNGLEL01_H
#define PSO_MISC_TOROCKJUNGLEL01_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockJungleL01 : public TORockCave {
    virtual ~TORockJungleL01();
    virtual void run_task();
    void* m_b4;
    u8 _padB8[0x1C];
    u32 m_d4;
    void *destroy(s16 arg1);};

typedef char TORockJungleL01_size[sizeof(TORockJungleL01) == 0xD8 ? 1 : -1];
#endif
