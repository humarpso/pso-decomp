#ifndef PSO_OBJECT_TUNK_804E0898_H
#define PSO_OBJECT_TUNK_804E0898_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E0898 : public TObjPathObj {
public:
    virtual ~TUnk_804E0898();
    void update_lobby_pigeon_visibility();
    void select_lobby_pigeon_model();
    virtual void vfunc_14();
    virtual void vfunc_13(s32);
    u8 unk_98[0x8];
    s32 m_a0;
    u8 unk_A4[0x3C];
};
typedef char TUnk_804E0898_size[sizeof(TUnk_804E0898) == 0xE0 ? 1 : -1];

#endif
