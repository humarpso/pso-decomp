#ifndef PSO_TOBJSUISOCHIP_H
#define PSO_TOBJSUISOCHIP_H
#include "pso/TObjChip.h"
#include "types.h"

class TObjSuisoChip : public TObjChip {
public:
    virtual ~TObjSuisoChip();
    virtual s32 init_chips();
    virtual s32 spawn_chips(u8 *);
    virtual void vfunc_8();
    virtual void tick_chips();
    virtual void vfunc_10();
    virtual void vfunc_11();
    virtual void vfunc_12();
    virtual void draw_chips();
};

#endif
