#ifndef PSO_ITEM_TUNK_804A0668_H
#define PSO_ITEM_TUNK_804A0668_H
#include "types.h"
#include "pso/item/TItemTimerEvent.h"

class TUnk_804A0668 : public TItemTimerEvent {
public:
    virtual ~TUnk_804A0668();
    virtual void vfunc_7();
    virtual void vfunc_6();
};
typedef char TUnk_804A0668_size[sizeof(TUnk_804A0668) == 0x2C ? 1 : -1];

#endif
