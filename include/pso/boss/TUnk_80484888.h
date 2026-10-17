#ifndef PSO_BOSS_TUNK_80484888_H
#define PSO_BOSS_TUNK_80484888_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484888 : public TObject {
public:
    virtual ~TUnk_80484888();
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x4];
    f32 m_28;
    u8 unk_2C[0xC];
    s32 m_38;
    u8 unk_3C[0x4];
    s32 m_40;
    u8 unk_44[0x4];
};
typedef char TUnk_80484888_size[sizeof(TUnk_80484888) == 0x48 ? 1 : -1];

#endif
