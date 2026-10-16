#ifndef PSO_MISC_TUNK_80488E00_H
#define PSO_MISC_TUNK_80488E00_H
#include "types.h"
#include "pso/misc/TUnk_80488A28.h"

class TUnk_80488E00 : public TUnk_80488A28 {
public:
    virtual ~TUnk_80488E00();
    virtual void update_follow_flags();
    virtual void select_follow_camera_offsets();
    virtual void vfunc_14(s32);
    virtual void vfunc_9(u8 *, u8 *);
    s32 predict_obstruction();
    virtual void vfunc_10();
    virtual void vfunc_8(void *);
    virtual void vfunc_6();
    u8 unk_6C[0xA4];
};
typedef char TUnk_80488E00_size[sizeof(TUnk_80488E00) == 0x110 ? 1 : -1];

#endif
