#ifndef PSO_MISC_TUNK_804B2578_H
#define PSO_MISC_TUNK_804B2578_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B2578 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B2578();
    virtual void vfunc_79();
    virtual void vfunc_80();
    virtual f32 vfunc_81();
    void set_scale(f32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_22(void *, f32);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual s32 vfunc_20(void *, f32);
    virtual void render();
    virtual void run_task();
    u8 unk_334[0xC];
    u32 m_340;
    u8 unk_344[0xC];
    f32 m_350;
    u8 unk_354[0x4];
    u32 m_358;
};

#endif
