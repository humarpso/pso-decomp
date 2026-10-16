#ifndef PSO_ITEM_TUNK_804A6200_H
#define PSO_ITEM_TUNK_804A6200_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6200 : public TItemWeapon {
public:
    virtual ~TUnk_804A6200();
    void*set_mode_vector();
    virtual void update_attack();
    u8 unk_1F8[0x4];
    s32 m_1fc;
    u8 unk_200[0x4];
};

#endif
