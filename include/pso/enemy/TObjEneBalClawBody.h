#ifndef PSO_ENEMY_TOBJENEBALCLAWBODY_H
#define PSO_ENEMY_TOBJENEBALCLAWBODY_H

#include "types.h"
#include "pso/enemy/TObjEneBalClaw.h"

struct TObjEneBalClawBody : public TObjEneBalClaw {
    virtual ~TObjEneBalClawBody();
    u32 m_3dc;
    u32 m_3e0;
    u32 m_3e4;
    u32 m_3e8;
    u8 unk_3D0[0x34];
};

typedef char TObjEneBalClawBody_size[sizeof(TObjEneBalClawBody) == 0x404 ? 1 : -1];
#endif
