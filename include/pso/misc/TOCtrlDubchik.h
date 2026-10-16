#ifndef PSO_MISC_TOCTRLDUBCHIK_H
#define PSO_MISC_TOCTRLDUBCHIK_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TOCtrlDubchik : public TObjEnemy {
    virtual ~TOCtrlDubchik();
    virtual void vfunc_25(u8 *);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual s32 vfunc_20(void *, f32);
    virtual void render();
    u8 unk_374[0xC];
    u32 m_380;
    u8 unk_384[0x4];
    f32 m_388;
    u32 m_38c;
    void* m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    void complete_and_destroy();
    void decay_timer_and_clear_flag();
    void decay_timer_and_finish();
    virtual void run_task();
    static void *create(void *arg0);
    static void destroy_instance();
    static void load_shared_resource();
    static s32 create_font(s32 arg0, s32 arg1, s32 arg2, s32 arg3);};

typedef char TOCtrlDubchik_size[sizeof(TOCtrlDubchik) == 0x3A0 ? 1 : -1];
#endif
