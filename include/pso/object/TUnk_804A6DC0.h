#ifndef PSO_OBJECT_TUNK_804A6DC0_H
#define PSO_OBJECT_TUNK_804A6DC0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6DC0 : public TItemWeapon {
public:
    virtual ~TUnk_804A6DC0();
    virtual void emit_marker_effects();
    u8 unk_1F8[0x10];
};

#endif
