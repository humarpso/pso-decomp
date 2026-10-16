#ifndef PSO_BOSS_TOBJBOSS5PILLAR_H
#define PSO_BOSS_TOBJBOSS5PILLAR_H

#include "types.h"
#include "pso/TObject.h"

struct TObjBoss5Pillar : public TObject {
    virtual ~TObjBoss5Pillar();
    u32 m_1c;
    u8 _pad20[0x8];
    u32 m_28;
    void* m_2c;
    u8 _pad30[0x8];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    void render();
    void update_collapse_state();
    static void *create_smoke(void *arg0, void *arg1);
    static void *create(void *arg0);};

typedef char TObjBoss5Pillar_size[sizeof(TObjBoss5Pillar) == 0x4C ? 1 : -1];
#endif
