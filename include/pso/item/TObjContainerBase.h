#ifndef PSO_ITEM_TOBJCONTAINERBASE_H
#define PSO_ITEM_TOBJCONTAINERBASE_H

#include "types.h"
#include "pso/player/TUnk_804B6C24.h"

struct TObjContainerBase : public TUnk_804B6C24 {
    virtual ~TObjContainerBase();
    static int check_accuracy_hit();
    void render();
    f32 receive_physical_hit();
    f32 receive_technique_hit(s32 arg1, s32 *arg2);};

typedef char TObjContainerBase_size[sizeof(TObjContainerBase) == 0x368 ? 1 : -1];
#endif
