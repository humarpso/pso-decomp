#ifndef PSO_MISC_TWINDOWDD_WS_WORD_H
#define PSO_MISC_TWINDOWDD_WS_WORD_H
#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

class TWindowDD_WS_Word : public TUnk_804CE018 {
public:
    virtual ~TWindowDD_WS_Word();
    s32 sub_80341AC0();
    s32 can_scroll(s32);
    void *destroy(s16);
    u8 sub_80342268();
    u8 sub_80342254();
    u8 unk_1C[0x44];
    s32 m_60;
    u8 unk_64[0x4];
    s32 m_68;
    u8 unk_6C[0x8];
    s32 m_74;
    u8 unk_78[0x8];
    void * m_80;
    u8 unk_84[0xC];
};
typedef char TWindowDD_WS_Word_size[sizeof(TWindowDD_WS_Word) == 0x90 ? 1 : -1];

#endif
