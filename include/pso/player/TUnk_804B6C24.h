#ifndef PSO_PLAYER_TUNK_804B6C24_H
#define PSO_PLAYER_TUNK_804B6C24_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B6C24 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B6C24();
    virtual void vfunc_79();
    virtual void vfunc_80();
    virtual void vfunc_81();
    virtual void debug_print_item_box_info();
    virtual void vfunc_6(s16 *, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual void render();
    virtual void run_task();
    u8 unk_334[0x2C];
    s32 m_360;
    s32 m_364;
};

#endif
