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
    virtual void render();
    virtual void run_task();
    u8 unk_334[0x28];
};
typedef char TUnk_804B2578_size[sizeof(TUnk_804B2578) == 0x35C ? 1 : -1];

#endif
