#ifndef PSO_MISC_TCONTAINERANCIENT01R_H
#define PSO_MISC_TCONTAINERANCIENT01R_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TContainerAncient01R : public TUnk_804806E8 {
    virtual ~TContainerAncient01R();
    virtual int vfunc_21(void *, void *, void *, float);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_22(void *, f32);
    void open_container();
    void check_open_trigger();
    void update_spawning();
    s32 sub_8018A688();
    void reset_hp();
    virtual void vfunc_6(s16 *, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual void render();
    virtual void run_task();
    static void init_table_entries();
    u8 unk_334[0x4];
    s16 m_338;
    u8 unk_33A[0x26];
    s32 m_360;
    u8 unk_364[0x4];
    f32 m_368;
    u8 unk_36C[0x8];
};

typedef char TContainerAncient01R_size[sizeof(TContainerAncient01R) == 0x374 ? 1 : -1];
#endif
