#ifndef PSO_MISC_TOKEYANCIENT03_H
#define PSO_MISC_TOKEYANCIENT03_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyAncient03 : public TOKey {
    virtual ~TOKeyAncient03();
    virtual s32 is_confirm_pressed();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_19();
    virtual void vfunc_25();
    u8 unk_D8[0x4];
    u32 m_dc;
    void send_switch_changed(s32 flags);
    void run_task();
    void render();
    static void *create(void *arg0);
    static void cleanup_refs();
    static void load_resources();
    u8 unk_E0[0x1C];
};

typedef char TOKeyAncient03_size[sizeof(TOKeyAncient03) == 0xFC ? 1 : -1];
#endif
