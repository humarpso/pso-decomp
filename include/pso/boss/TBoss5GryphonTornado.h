#ifndef PSO_BOSS_TBOSS5GRYPHONTORNADO_H
#define PSO_BOSS_TBOSS5GRYPHONTORNADO_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss5GryphonTornado : public TObject {
    virtual ~TBoss5GryphonTornado();
    u32 m_1c;
    u32 m_20;
    u16 m_24;
    u8 _pad26[0x2];
    void* m_28;
    u8 _pad2C[0x20];
    u32 m_4c;
    u32 m_50;
    u32 m_54;
    u32 m_58;
    virtual void render();
    virtual void run_task();};

typedef char TBoss5GryphonTornado_size[sizeof(TBoss5GryphonTornado) == 0x5C ? 1 : -1];
#endif
