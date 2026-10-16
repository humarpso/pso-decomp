#ifndef PSO_MISC_TODOORCAVE02_H
#define PSO_MISC_TODOORCAVE02_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorCave02 : public TUnk_804B0BB8 {
    virtual ~TODoorCave02();
    s32 draw_parts(void *arg1_);
    void render();
    static void *create(void *arg0);
    static void free_globals();
    static void load_resources();
    u8 unk_D4[0x10];
};

typedef char TODoorCave02_size[sizeof(TODoorCave02) == 0xE4 ? 1 : -1];
#endif
