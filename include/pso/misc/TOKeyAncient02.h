#ifndef PSO_MISC_TOKEYANCIENT02_H
#define PSO_MISC_TOKEYANCIENT02_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyAncient02 : public TOKey {
    virtual ~TOKeyAncient02();
    void render();
    static void *create(void *arg0);
    static void free_static();
    static void load_resources();
    u8 unk_D8[0x18];
};

typedef char TOKeyAncient02_size[sizeof(TOKeyAncient02) == 0xF0 ? 1 : -1];
#endif
