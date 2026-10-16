#ifndef PSO_MISC_TUNK_804AFBF8_H
#define PSO_MISC_TUNK_804AFBF8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804AFBF8 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804AFBF8();
    s32 is_in_view_depth(f32);
    void update_anim_phase();
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x4];
    f32 m_b0;
    u8 unk_B4[0x4];
    f32 m_b8;
    u8 unk_BC[0x4];
    f32 m_c0;
    u8 unk_C4[0x4];
};

#endif
