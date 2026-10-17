#ifndef PSO_TOBJCHIP_H
#define PSO_TOBJCHIP_H
#include "pso/TObject.h"
#include "types.h"

class TObjChip : public TObject {
public:
    virtual ~TObjChip();
    void update(void *);
    void tick_chips(void *);
    s32 spawn_chips(void *, void *);
    void render(void *);
    s32 init_chips(void *);
    void draw_chips(void *);
    void dispatch_vt9(void *);
};

#endif
