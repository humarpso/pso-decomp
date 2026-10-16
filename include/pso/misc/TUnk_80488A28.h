#ifndef PSO_MISC_TUNK_80488A28_H
#define PSO_MISC_TUNK_80488A28_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80488A28 : public TObject {
public:
    virtual ~TUnk_80488A28();
    virtual void vfunc_6();
    virtual void vfunc_7();
    virtual void vfunc_8(void *);
    virtual void vfunc_9(u8 *, u8 *);
    virtual void vfunc_10();
    virtual void post_update_view();
    virtual void run_task();
    u8 unk_1C[0x20];
    f32 m_3c;
    u8 unk_40[0x4];
    f32 m_44;
    u8 unk_48[0x10];
    f32 m_58;
    u8 unk_5C[0x10];
};

#endif
