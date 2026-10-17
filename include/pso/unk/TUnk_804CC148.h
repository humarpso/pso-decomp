#ifndef PSO_UNK_TUNK_804CC148_H
#define PSO_UNK_TUNK_804CC148_H
#include "types.h"
#include "pso/effect/TEffect.h"

class TUnk_804CC148 : public TEffect {
public:
    TUnk_804CC148(s32 arg1, s32 arg2, s32 arg4);
    virtual ~TUnk_804CC148();
    virtual void vfunc_6(void *);
    virtual void tick_lifetime();
    virtual void vfunc_8(void *);
    virtual void vfunc_9();
    void find_area_contact(s32);
    void apply_technique_to_area_targets();
    void *destroy_technique_base(s16);
    void sub_8022C008();
    void count_if_within_range();
    virtual void render();
    virtual void run_task();
    u8 unk_70[0x8];
    s16 m_78;
    u8 unk_7A[0x2];
    f32 m_7c;
    u8 unk_80[0x4];
    f32 m_84;
    f32 m_88;
    u8 unk_8C[0x4];
    f32 m_90;
    u8 unk_94[0x14];
    s16 m_a8;
    u8 unk_AA[0x2];
    s32 m_ac;
    u8 unk_B0[0x4];
    u16 m_b4;
    u8 unk_B6[0x32];
    u32 m_e8;
};

#endif
