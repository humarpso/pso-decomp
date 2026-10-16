#ifndef PSO_MISC_TOKEYCOL_H
#define PSO_MISC_TOKEYCOL_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyCol : public TOKey {
    virtual ~TOKeyCol();
    void send_switch_changed(s32 flags);
    void run_task();
    void render();
    static void *create(void *arg0);
    u8 unk_D8[0x10];
};

typedef char TOKeyCol_size[sizeof(TOKeyCol) == 0xE8 ? 1 : -1];
#endif
