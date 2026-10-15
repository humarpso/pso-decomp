#ifndef PSO_OBJECT_TOBJVOLOPTCAGE_H
#define PSO_OBJECT_TOBJVOLOPTCAGE_H

#include "types.h"

struct TObjVoloptCage
{
    u16 m_1c;
    u8 _pad1E[0xA];
    u16 m_28;
    u16 m_2a;
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u8 _pad84[0x2A2];
    s16 m_326;
    u8 _pad328[0x10];
    u16 m_338;
    u8 _pad33A[0x3A];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x10];
    u32 m_390;
    void update_state();
    void run_task();
    void update_breakup();
    void update_collision_state();
    static void destroy();
    static void init_break_model();
    void render();
};

#endif
