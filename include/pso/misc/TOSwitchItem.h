#ifndef PSO_MISC_TOSWITCHITEM_H
#define PSO_MISC_TOSWITCHITEM_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOSwitchItem : public TOKey {
    virtual ~TOSwitchItem();
    void run_task();
    u32 m_d8;
    void update_anim();
    void render();
    static void *create(void *arg0);
    u8 unk_DC[0x1C];
};

typedef char TOSwitchItem_size[sizeof(TOSwitchItem) == 0xF8 ? 1 : -1];
#endif
