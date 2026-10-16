#ifndef PSO_MISC_TTECGIZONDE_H
#define PSO_MISC_TTECGIZONDE_H

#include "types.h"
#include "pso/player/TUnk_804CCC68.h"

struct TTecGiZonde : public TUnk_804CCC68 {
    virtual ~TTecGiZonde();
    s32 find_chain_targets();
    void create(void *arg1, void *arg2, void *arg3);
    void run_task();
    static void render();
    void init_parameters();
    u8 unk_130[0x5C];
    void deliver_chain_hits();
};

typedef char TTecGiZonde_size[sizeof(TTecGiZonde) == 0x18C ? 1 : -1];
#endif
