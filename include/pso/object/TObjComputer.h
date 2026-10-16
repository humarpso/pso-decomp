#ifndef PSO_OBJECT_TOBJCOMPUTER_H
#define PSO_OBJECT_TOBJCOMPUTER_H

#include "types.h"
#include "pso/object/TObjMesBase.h"

struct TObjComputer : public TObjMesBase {
    virtual ~TObjComputer();
    u32 m_bc;
    u8 _padC0[0x4];
    u32 m_c4;
    s32 draw_model();
    virtual void render();
    void *create();
    static void free_resources();};

typedef char TObjComputer_size[sizeof(TObjComputer) == 0xC8 ? 1 : -1];
#endif
