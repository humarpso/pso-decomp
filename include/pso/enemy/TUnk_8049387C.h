#ifndef PSO_ENEMY_TUNK_8049387C_H
#define PSO_ENEMY_TUNK_8049387C_H
#include "types.h"
#include "pso/enemy/TObjEneMe1Gee.h"

class TUnk_8049387C : public TObjEneMe1Gee {
public:
    virtual ~TUnk_8049387C();
    void sub_800CB764(s32);
    void sub_800C84C8();
    u8 unk_474[0x24];
};

#endif
