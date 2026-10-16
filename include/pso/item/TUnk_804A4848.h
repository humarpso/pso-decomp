#ifndef PSO_ITEM_TUNK_804A4848_H
#define PSO_ITEM_TUNK_804A4848_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4848 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4848();
    virtual void update_weapon();
    virtual void update_attack();
    virtual void reserved_53();
    u8 unk_1C[0x1F0];
};

#endif
