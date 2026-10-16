#ifndef PSO_MISC_TODOORFOURLIGHTSPACE_H
#define PSO_MISC_TODOORFOURLIGHTSPACE_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorFourLightSpace : public TUnk_804B0BB8 {
    virtual ~TODoorFourLightSpace();
    u32 m_d4;
    s32 draw_lights();
    virtual void render();
    u8 unk_D8[0x20];
};

typedef char TODoorFourLightSpace_size[sizeof(TODoorFourLightSpace) == 0xF8 ? 1 : -1];
#endif
