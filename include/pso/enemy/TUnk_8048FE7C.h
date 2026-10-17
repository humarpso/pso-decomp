#ifndef PSO_ENEMY_TUNK_8048FE7C_H
#define PSO_ENEMY_TUNK_8048FE7C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8048FE7C : public TObject {
public:
    TUnk_8048FE7C(TObject *arg1, u8 *arg2, f32 farg0);
    virtual ~TUnk_8048FE7C();
    void sub_8009A640();
    void sub_8009A598();
    u8 unk_1C[0x10];
    f32 m_2c;
    u8 unk_30[0x4];
    s32 m_34;
    u8 unk_38[0x4];
    f32 m_3c;
    u8 unk_40[0xC0];
};
typedef char TUnk_8048FE7C_size[sizeof(TUnk_8048FE7C) == 0x100 ? 1 : -1];

#endif
