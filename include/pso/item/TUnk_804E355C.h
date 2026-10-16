#ifndef PSO_ITEM_TUNK_804E355C_H
#define PSO_ITEM_TUNK_804E355C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E355C : public TObject {
public:
    virtual ~TUnk_804E355C();
    virtual void vfunc_6(s32 *);
    void *destroy_attack_collision(s16);
    u8 has_game_join_id();
    s32 resolve_attack_col_hit(u8 *);
    u8 unk_1C[0x8];
    f32 m_24;
    float m_28;
    u8 unk_2C[0x4];
    float m_30;
    u8 unk_34[0xC];
    f32 m_40;
    u8 unk_44[0x60];
    s32 m_a4;
    u16 m_a8;
    u8 unk_AA[0x2];
    s32 m_ac;
    u8 unk_B0[0x4];
    f32 m_b4;
    u8 unk_B8[0xC];
};

#endif
