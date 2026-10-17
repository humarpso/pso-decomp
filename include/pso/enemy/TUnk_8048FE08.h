#ifndef PSO_ENEMY_TUNK_8048FE08_H
#define PSO_ENEMY_TUNK_8048FE08_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TUnk_8048FE08 : public TUnk_804928CC {
public:
    virtual ~TUnk_8048FE08();
    virtual void render();
    void*init(int, int, int);
    void sub_8009A11C();
    u8 unk_B0[0x4];
    int m_b4;
    u8 unk_B8[0x4];
    float m_bc;
    u8 unk_C0[0x4];
    int m_c4;
    u8 unk_C8[0x4];
    float m_cc;
    u8 unk_D0[0x4];
};
typedef char TUnk_8048FE08_size[sizeof(TUnk_8048FE08) == 0xD4 ? 1 : -1];

#endif
