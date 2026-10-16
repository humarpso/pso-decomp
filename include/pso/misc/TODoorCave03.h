#ifndef PSO_MISC_TODOORCAVE03_H
#define PSO_MISC_TODOORCAVE03_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorCave03 : public TUnk_804B0BB8 {
    virtual ~TODoorCave03();
    void* m_d4;
    static void *create(void *arg0);
    static void free_shared_data();
    static void load_resources();
    u8 unk_D8[0xC];
};

typedef char TODoorCave03_size[sizeof(TODoorCave03) == 0xE4 ? 1 : -1];
#endif
