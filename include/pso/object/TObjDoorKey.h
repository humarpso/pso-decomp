#ifndef PSO_OBJECT_TOBJDOORKEY_H
#define PSO_OBJECT_TOBJDOORKEY_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TObjDoorKey : public TOKey {
    virtual ~TObjDoorKey();
    virtual void update_armed_switch();
    virtual void vfunc_17();
    virtual void vfunc_16();
    virtual void vfunc_19();
    virtual void debug_draw_key_id();
    u32 m_d8;
    u32 m_dc;
    void render();
    s32 draw_active_beam();
    s32 draw_inactive_badge();
    void run_task();
    static void free_key();
    static void load_resources();
    u8 unk_E0[0x1C];
};

typedef char TObjDoorKey_size[sizeof(TObjDoorKey) == 0xFC ? 1 : -1];
#endif
