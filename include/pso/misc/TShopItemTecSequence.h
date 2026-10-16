#ifndef PSO_MISC_TSHOPITEMTECSEQUENCE_H
#define PSO_MISC_TSHOPITEMTECSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TShopItemTecSequence : public TShopSequence {
    virtual ~TShopItemTecSequence();
    u8 unk_1C[0x1C];
};

typedef char TShopItemTecSequence_size[sizeof(TShopItemTecSequence) == 0x38 ? 1 : -1];
#endif
