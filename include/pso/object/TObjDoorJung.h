#ifndef PSO_OBJECT_TOBJDOORJUNG_H
#define PSO_OBJECT_TOBJDOORJUNG_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TObjDoorJung : public TUnk_804B0BB8 {
    virtual ~TObjDoorJung();
    void clamp_state();
    virtual void update_door_switch_state();
    virtual void run_task();
    virtual void render();
    u8 unk_D4[0x4];
    static void free_buffers();
    s32 find_entry_by_name(const char *name);
    void free_children(void *arg1);
};

typedef char TObjDoorJung_size[sizeof(TObjDoorJung) == 0xD8 ? 1 : -1];
#endif
