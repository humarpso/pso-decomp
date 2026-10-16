#ifndef PSO_MISC_TCONTAINERANCIENT01_H
#define PSO_MISC_TCONTAINERANCIENT01_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TContainerAncient01 : public TUnk_804806E8 {
    virtual ~TContainerAncient01();
    virtual void vfunc_6(s16 *, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    u8 unk_334[0x4];
    s16 m_338;
    u8 unk_33A[0x2];
    f32 m_33c;
    u8 unk_340[0x4];
    f32 m_344;
    u8 unk_348[0x4];
    f32 m_34c;
    u8 unk_350[0x4];
    f32 m_354;
    u8 unk_358[0x4];
    u32 m_35c;
    void* m_360;
    void reset_hp();
    void update_spawning();
    void check_open_trigger();
    void init_positions();
    void open_container();
    static void spawn_effect(void* p, void* a1, void* a2);
    void reset_state();
    void update_wait_for_player();
    void init_state_vectors();
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void release_static_resource();
    static void load_resources();
    static void trigger_spawn(void* p, void* a1, void* a2);
    static s32 is_global_state_in_table();
    u8 unk_364[0x4];
    f32 m_368;
    u8 unk_36C[0x4];
};

typedef char TContainerAncient01_size[sizeof(TContainerAncient01) == 0x370 ? 1 : -1];
#endif
