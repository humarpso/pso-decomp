#ifndef PSO_OBJECT_TUNK_804E0910_H
#define PSO_OBJECT_TUNK_804E0910_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E0910 : public TObjPathObj {
public:
    virtual ~TUnk_804E0910();
    virtual void vfunc_13(s32);
    void *deleting_dtor_pathobj(s16);
    virtual void vfunc_14();
    u8 unk_98[0x4];
    s32 m_9c;
    u8 unk_A0[0x4];
    f32 m_a4;
    f32 m_a8;
    u8 unk_AC[0xC];
    s32 m_b8;
    u8 unk_BC[0x4];
    s32 m_c0;
    u8 unk_C4[0x4];
    s32 m_c8;
};
typedef char TUnk_804E0910_size[sizeof(TUnk_804E0910) == 0xCC ? 1 : -1];

#endif
