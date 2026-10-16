#ifndef PSO_MISC_TODOORMACHINE02_H
#define PSO_MISC_TODOORMACHINE02_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorMachine02 : public TUnk_804B0BB8 {
    virtual ~TODoorMachine02();
    void* m_d4;
    virtual void render();
    static void *create(void *arg0);
    static void free_statics();
    static void load_resources();
    u8 unk_D8[0xC];
};

typedef char TODoorMachine02_size[sizeof(TODoorMachine02) == 0xE4 ? 1 : -1];
#endif
