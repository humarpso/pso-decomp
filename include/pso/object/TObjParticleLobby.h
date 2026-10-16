#ifndef PSO_OBJECT_TOBJPARTICLELOBBY_H
#define PSO_OBJECT_TOBJPARTICLELOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjParticleLobby : public TUnk_804AFBF8 {
    virtual ~TObjParticleLobby();
    u32 m_c8;
    u8 _padCC[0x4];
    u32 m_d0;
    u32 m_d4;
    static void render();
    void run_task();
    void setup_emitter();
    static void *create(void *arg0);};

typedef char TObjParticleLobby_size[sizeof(TObjParticleLobby) == 0xD8 ? 1 : -1];
#endif
