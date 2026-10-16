#ifndef PSO_OBJECT_TOBJCGRASS_H
#define PSO_OBJECT_TOBJCGRASS_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjCGrass : public TObjMotion {
    virtual ~TObjCGrass();
    u32 m_fc;
    u8 _pad100[0x4];
    u32 m_104;
    u32 m_108;
    void* m_10c;
    virtual void render();
    virtual void run_task();
    static void release_global_805D5130();
    static void load_resources();
    u8 unk_110[0x3C];
};

typedef char TObjCGrass_size[sizeof(TObjCGrass) == 0x14C ? 1 : -1];
#endif
