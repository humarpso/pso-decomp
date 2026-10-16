#ifndef PSO_OBJECT_TOBJFOGCOLLISION_H
#define PSO_OBJECT_TOBJFOGCOLLISION_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjFogCollision : public TUnk_804B9870 {
    virtual ~TObjFogCollision();
    virtual void render();
    u32 m_90;
    u32 m_94;
    void draw_volume();
    virtual void run_task();
    s32 check_collision(u16 arg1);};

typedef char TObjFogCollision_size[sizeof(TObjFogCollision) == 0x98 ? 1 : -1];
#endif
