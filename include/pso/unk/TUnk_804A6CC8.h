#ifndef PSO_UNK_TUNK_804A6CC8_H
#define PSO_UNK_TUNK_804A6CC8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6CC8 : public TItemWeapon {
public:
    virtual ~TUnk_804A6CC8();
    virtual void update_idle();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    virtual void update_attack();
    u8 unk_1F8[0x4];
    f32 m_1fc;
    u8 unk_200[0x4];
    f32 m_204;
    u8 unk_208[0x4];
    float m_20c;
    f32 m_210;
    u8 unk_214[0x4];
};

#endif
