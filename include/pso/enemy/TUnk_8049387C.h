#ifndef PSO_ENEMY_TUNK_8049387C_H
#define PSO_ENEMY_TUNK_8049387C_H
#include "types.h"
#include "pso/enemy/TObjEneMe1Gee.h"

class TUnk_8049387C : public TObjEneMe1Gee {
public:
    virtual ~TUnk_8049387C();
    u8 unk_474[0x24];
};
typedef char TUnk_8049387C_size[sizeof(TUnk_8049387C) == 0x498 ? 1 : -1];

#endif
