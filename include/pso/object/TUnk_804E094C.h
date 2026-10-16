#ifndef PSO_OBJECT_TUNK_804E094C_H
#define PSO_OBJECT_TUNK_804E094C_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E094C : public TObjPathObj {
public:
    virtual ~TUnk_804E094C();
    virtual void vfunc_14();
    u8 unk_98[0x4];
    s32 m_9c;
    u8 unk_A0[0x8];
    f32 m_a8;
    u8 unk_AC[0xC];
    s32 m_b8;
    u8 unk_BC[0x4];
    s32 m_c0;
    u8 unk_C4[0x8];
};
typedef char TUnk_804E094C_size[sizeof(TUnk_804E094C) == 0xCC ? 1 : -1];

#endif
