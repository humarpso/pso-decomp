#ifndef PSO_UNK_TUNK_804A6CC8_H
#define PSO_UNK_TUNK_804A6CC8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6CC8 : public TItemWeapon {
public:
    virtual ~TUnk_804A6CC8();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    virtual void update_attack();
    u8 unk_1F8[0x20];
};

#endif
