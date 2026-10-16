#ifndef PSO_MISC_TSCENESORA_H
#define PSO_MISC_TSCENESORA_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TSceneSora : public TUnk_804B9870 {
    virtual ~TSceneSora();
    u32 m_90;
    u32 m_94;
    u32 m_98;
    virtual void render();
    virtual void run_task();
    static void create_instance();
    static void load_sky_resources();
    u8 unk_9C[0x8];
};

typedef char TSceneSora_size[sizeof(TSceneSora) == 0xA4 ? 1 : -1];
#endif
