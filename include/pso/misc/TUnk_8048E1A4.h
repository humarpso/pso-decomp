#ifndef PSO_MISC_TUNK_8048E1A4_H
#define PSO_MISC_TUNK_8048E1A4_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_8048E1A4 : public TUnk_804806E8 {
public:
    virtual ~TUnk_8048E1A4();
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_22(void *, f32);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual s32 vfunc_20(void *, f32);
    virtual void render();
    virtual void run_task();
    u8 unk_334[0x34];
};
typedef char TUnk_8048E1A4_size[sizeof(TUnk_8048E1A4) == 0x368 ? 1 : -1];

#endif
