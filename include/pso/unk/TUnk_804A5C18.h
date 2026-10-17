#ifndef PSO_UNK_TUNK_804A5C18_H
#define PSO_UNK_TUNK_804A5C18_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5C18 : public TItemWeapon {
public:
    virtual ~TUnk_804A5C18();
    virtual void emit_marker_effects();
    virtual void update_attack();
    u8 unk_1F8[0x4];
    s32 m_1fc;
    u8 unk_200[0x4];
    s32 m_204;
    u8 unk_208[0x4];
    s32 m_20c;
    u8 unk_210[0x4];
    s32 m_214;
    u8 unk_218[0x4];
    s32 m_21c;
    s32 m_220;
    u8 unk_224[0x4];
};

#endif
