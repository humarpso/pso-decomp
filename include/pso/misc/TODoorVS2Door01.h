#ifndef PSO_MISC_TODOORVS2DOOR01_H
#define PSO_MISC_TODOORVS2DOOR01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorVS2Door01 : public TUnk_804B0BB8 {
    virtual ~TODoorVS2Door01();
    virtual void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
    u8 unk_D4[0x4];
};

typedef char TODoorVS2Door01_size[sizeof(TODoorVS2Door01) == 0xD8 ? 1 : -1];
#endif
