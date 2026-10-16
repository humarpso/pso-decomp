#ifndef PSO_MISC_TSHOPEQUIPMENTGEARSEQUENCE_H
#define PSO_MISC_TSHOPEQUIPMENTGEARSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TShopEquipmentGearSequence : public TShopSequence {
    virtual ~TShopEquipmentGearSequence();
    virtual void vfunc_11();
    u8 unk_1C[0x1C];
};

typedef char TShopEquipmentGearSequence_size[sizeof(TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
#endif
