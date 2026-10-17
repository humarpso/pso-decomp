#ifndef PSO_ENEMY_TOBJENEBM3FLYNEST_CARRYFLY_H
#define PSO_ENEMY_TOBJENEBM3FLYNEST_CARRYFLY_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneBm3FlyNest_CarryFly : public TObject {
public:
    virtual ~TObjEneBm3FlyNest_CarryFly();
    u8 unk_1C[0x4];
    f32 m_20;
    u8 unk_24[0x4];
    s32 m_28;
    u8 unk_2C[0x4];
    s32 m_30;
    u8 unk_34[0x4];
    s32 * m_38;
    u8 unk_3C[0x4];
    s32 m_40;
    u8 unk_44[0x4];
    u8 * m_48;
    u8 unk_4C[0x4];
    f32 m_50;
    u8 unk_54[0x4];
    f32 m_58;
    u8 unk_5C[0x4];
    f32 m_60;
    u8 unk_64[0x4];
};
typedef char TObjEneBm3FlyNest_CarryFly_size[sizeof(TObjEneBm3FlyNest_CarryFly) == 0x68 ? 1 : -1];

#endif
