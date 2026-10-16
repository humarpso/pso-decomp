#ifndef PSO_UNK_TUNK_804A4F60_H
#define PSO_UNK_TUNK_804A4F60_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A4F60 : public TItemWeapon {
public:
    virtual ~TUnk_804A4F60();
    virtual void update_attack();
    virtual void emit_marker_effects();
    virtual void update_weapon();
    virtual void set_technique_roll(s32);
    u8 unk_1F8[0x84];
};

#endif
