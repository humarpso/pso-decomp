#ifndef PSO_MISC_TOKEYCAVE01_H
#define PSO_MISC_TOKEYCAVE01_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyCave01 : public TOKey {
    virtual ~TOKeyCave01();
    virtual s32 is_confirm_pressed();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_19();
    virtual void vfunc_25();
    u8 unk_D8[0x4];
    u32 m_dc;
    u32 m_e0;
    void send_switch_changed(s32 flags);
    void run_task();
    void render();
    static void *create(void *arg0);
    static void free_objects();
    static void load_resources();
    u8 unk_E4[0x1C];
};

typedef char TOKeyCave01_size[sizeof(TOKeyCave01) == 0x100 ? 1 : -1];
#endif
