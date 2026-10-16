#ifndef PSO_ITEM_TUNK_804A05C8_H
#define PSO_ITEM_TUNK_804A05C8_H
#include "types.h"
#include "pso/item/TItemTimerEvent.h"

class TUnk_804A05C8 : public TItemTimerEvent {
public:
    virtual ~TUnk_804A05C8();
    virtual void vfunc_6();
    u8 unk_2C[0x4];
};
typedef char TUnk_804A05C8_size[sizeof(TUnk_804A05C8) == 0x30 ? 1 : -1];

#endif
