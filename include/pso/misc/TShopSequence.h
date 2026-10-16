#ifndef PSO_MISC_TSHOPSEQUENCE_H
#define PSO_MISC_TSHOPSEQUENCE_H

#include "types.h"
#include "pso/TShopWindowBase.h"

struct TShopSequence : public TShopWindowBase {
    virtual ~TShopSequence();
    virtual void vfunc_6();
    virtual void restore_player_state();
    virtual void close_window();
    virtual void vfunc_7();
    virtual void vfunc_8();
    virtual void vfunc_9();
    virtual int vfunc_10();};

#endif
