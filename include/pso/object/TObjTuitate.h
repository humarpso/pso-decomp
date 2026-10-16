#ifndef PSO_OBJECT_TOBJTUITATE_H
#define PSO_OBJECT_TOBJTUITATE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjTuitate : public TUnk_804AF8A0 {
    virtual ~TObjTuitate();
    u32 m_c8;
    void render();
    void run_task();
    u8 unk_B0[0x1C];
};

typedef char TObjTuitate_size[sizeof(TObjTuitate) == 0xCC ? 1 : -1];
#endif
