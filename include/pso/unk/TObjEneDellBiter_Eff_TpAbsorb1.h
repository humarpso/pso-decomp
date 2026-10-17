#ifndef PSO_UNK_TOBJENEDELLBITER_EFF_TPABSORB1_H
#define PSO_UNK_TOBJENEDELLBITER_EFF_TPABSORB1_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TObjEneDellBiter_Eff_TpAbsorb1 : public TUnk_804928CC {
public:
    virtual ~TObjEneDellBiter_Eff_TpAbsorb1();
    u8 unk_B0[0x4];
    f32 m_b4;
    u8 unk_B8[0x4];
    s32 m_bc;
    u8 unk_C0[0x4];
    f32 m_c4;
    u8 unk_C8[0x4];
    void * m_cc;
};
typedef char TObjEneDellBiter_Eff_TpAbsorb1_size[sizeof(TObjEneDellBiter_Eff_TpAbsorb1) == 0xD0 ? 1 : -1];

#endif
