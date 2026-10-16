#ifndef PSO_MISC_TODOORFOURLIGHTRUINS_H
#define PSO_MISC_TODOORFOURLIGHTRUINS_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorFourLightRuins : public TUnk_804B0BB8 {
    virtual ~TODoorFourLightRuins();
    u32 m_d4;
    static s32 draw_model_and_lights(void *arg0);
    virtual void render();
    u8 unk_D8[0x20];
};

typedef char TODoorFourLightRuins_size[sizeof(TODoorFourLightRuins) == 0xF8 ? 1 : -1];
#endif
