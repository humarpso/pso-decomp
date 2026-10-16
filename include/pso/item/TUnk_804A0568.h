#ifndef PSO_ITEM_TUNK_804A0568_H
#define PSO_ITEM_TUNK_804A0568_H
#include "types.h"
#include "pso/item/TItemTimerEvent.h"

class TUnk_804A0568 : public TItemTimerEvent {
public:
    virtual ~TUnk_804A0568();
    virtual void vfunc_6();
    u8 unk_2C[0x4];
};
typedef char TUnk_804A0568_size[sizeof(TUnk_804A0568) == 0x30 ? 1 : -1];

#endif
