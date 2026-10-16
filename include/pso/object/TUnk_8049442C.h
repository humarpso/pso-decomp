#ifndef PSO_OBJECT_TUNK_8049442C_H
#define PSO_OBJECT_TUNK_8049442C_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_8049442C : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_8049442C();
    void *destroy(s16);
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x10];
    s32 m_bc;
    u8 unk_C0[0x4];
    s32 m_c4;
    u8 unk_C8[0x28];
};
typedef char TUnk_8049442C_size[sizeof(TUnk_8049442C) == 0xF0 ? 1 : -1];

#endif
