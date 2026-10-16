#ifndef PSO_PLAYER_TUNK_804928CC_H
#define PSO_PLAYER_TUNK_804928CC_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804928CC : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804928CC();
    virtual void vfunc_14();
    virtual s32 vfunc_15(void *, s32, void *, f32);
    virtual void vfunc_16(void *, void *);
    virtual void vfunc_17();
    virtual s32 vfunc_18(void *, void *, f32);
    virtual void vfunc_19(void *);
    virtual void vfunc_20(void *, f32);
    virtual void vfunc_21(void *, f32 *, void *);
    virtual void vfunc_22(void *, f32 *);
    u8 unk_AC[0x4];
};
typedef char TUnk_804928CC_size[sizeof(TUnk_804928CC) == 0xB0 ? 1 : -1];

#endif
