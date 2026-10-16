#ifndef PSO_ITEM_TUNK_804A0608_H
#define PSO_ITEM_TUNK_804A0608_H
#include "types.h"
#include "pso/item/TItemTimerEvent.h"

class TUnk_804A0608 : public TItemTimerEvent {
public:
    virtual ~TUnk_804A0608();
    void *init_timer_event();
    virtual void vfunc_6();
};
typedef char TUnk_804A0608_size[sizeof(TUnk_804A0608) == 0x2C ? 1 : -1];

#endif
