#ifndef PSO_MISC_TUNK_804C3248_H
#define PSO_MISC_TUNK_804C3248_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804C3248 : public TObjMotion {
public:
    virtual ~TUnk_804C3248();
    virtual void enter_scene();
    virtual void update_if_active();
    u8 unk_FC[0x4C];
    s32 m_148;
    u8 unk_14C[0x4];
    f32 m_150;
    u8 unk_154[0x4];
};

#endif
