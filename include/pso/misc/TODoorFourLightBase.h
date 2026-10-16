#ifndef PSO_MISC_TODOORFOURLIGHTBASE_H
#define PSO_MISC_TODOORFOURLIGHTBASE_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorFourLightBase : public TUnk_804B0BB8 {
    virtual ~TODoorFourLightBase();
    virtual s32 init_door_switch_binding();
    virtual void update_door_switch_state();
    virtual void vfunc_6(s16 *, s32);
    virtual void render();
    u32 m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
    void clamp_light_index();
    void render_lights();};

typedef char TODoorFourLightBase_size[sizeof(TODoorFourLightBase) == 0xFC ? 1 : -1];
#endif
