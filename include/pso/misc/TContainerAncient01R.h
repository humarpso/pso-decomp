#ifndef PSO_MISC_TCONTAINERANCIENT01R_H
#define PSO_MISC_TCONTAINERANCIENT01R_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TContainerAncient01R : public TUnk_804806E8 {
    virtual ~TContainerAncient01R();
    virtual void vfunc_6(s16 *, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual void render();
    virtual void run_task();
    static void init_table_entries();
    u8 unk_334[0x40];
};

typedef char TContainerAncient01R_size[sizeof(TContainerAncient01R) == 0x374 ? 1 : -1];
#endif
