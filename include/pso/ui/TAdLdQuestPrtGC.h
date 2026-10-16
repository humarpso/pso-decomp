#ifndef PSO_UI_TADLDQUESTPRTGC_H
#define PSO_UI_TADLDQUESTPRTGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdLdQuestPrtGC : public TObject {
    virtual ~TAdLdQuestPrtGC();
    u8 _pad1C[0x40];
    u32 m_5c;
    u8 _pad60[0x4];
    u32 m_64;
    u32 m_68;
    u8 _pad6C[0x4];
    u32 m_70;
    u32 m_74;
    u8 _pad78[0x4];
    u32 m_7c;
    u32 m_80;
    u8 _pad84[0x4];
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x4];
    u32 m_94;
    u32 m_98;
    u8 _pad9C[0x4];
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0x4];
    u32 m_ac;
    u32 m_b0;
    u8 _padB4[0x4];
    u32 m_b8;
    u32 m_bc;
    u32 m_c0;
    u32 m_c4;
    static void render();
    int get_abs();
    u8 unk_C8[0x90];
};

typedef char TAdLdQuestPrtGC_size[sizeof(TAdLdQuestPrtGC) == 0x158 ? 1 : -1];
#endif
