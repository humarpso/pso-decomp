#ifndef PSO_ITEM_TUNK_804A4338_H
#define PSO_ITEM_TUNK_804A4338_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4338 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4338();
    u8 unk_1C[0x170];
};
typedef char TUnk_804A4338_size[sizeof(TUnk_804A4338) == 0x18C ? 1 : -1];

#endif
