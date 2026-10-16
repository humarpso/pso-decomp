#ifndef PSO_ITEM_TUNK_804E355C_H
#define PSO_ITEM_TUNK_804E355C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E355C : public TObject {
public:
    virtual ~TUnk_804E355C();
    virtual void vfunc_6(s32 *);
    u8 unk_1C[0x8];
    f32 m_24;
    float m_28;
    u8 unk_2C[0x4];
    float m_30;
    u8 unk_34[0xC];
    f32 m_40;
    u8 unk_44[0x68];
    s32 m_ac;
    u8 unk_B0[0x14];
};

#endif
