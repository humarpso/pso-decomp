#ifndef PSO_UNK_TUNK_804B8DE8_H
#define PSO_UNK_TUNK_804B8DE8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804B8DE8 : public TObject {
public:
    virtual ~TUnk_804B8DE8();
    u8 unk_1C[0x4];
    f32 m_20;
    u8 unk_24[0x10];
    s32 m_34;
    u8 unk_38[0x4];
    s32 m_3c;
    u8 unk_40[0x4];
    s32 m_44;
    u8 unk_48[0x4];
    s32 m_4c;
    u8 unk_50[0x4];
    s32 m_54;
};
typedef char TUnk_804B8DE8_size[sizeof(TUnk_804B8DE8) == 0x58 ? 1 : -1];

#endif
