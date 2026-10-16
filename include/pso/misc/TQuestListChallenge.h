#ifndef PSO_MISC_TQUESTLISTCHALLENGE_H
#define PSO_MISC_TQUESTLISTCHALLENGE_H

#include "types.h"
#include "pso/TShopWindowBase.h"

struct TQuestListChallenge : public TShopWindowBase {
    virtual ~TQuestListChallenge();
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    u8 _pad4C[0x4];
    u32 m_50;
    u32 m_54;
    u32 m_58;
    u8 unk_40[0x1C];
};

typedef char TQuestListChallenge_size[sizeof(TQuestListChallenge) == 0x5C ? 1 : -1];
#endif
