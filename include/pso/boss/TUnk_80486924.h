#ifndef PSO_BOSS_TUNK_80486924_H
#define PSO_BOSS_TUNK_80486924_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_80486924 : public TObjEnemy {
public:
    virtual ~TUnk_80486924();
    u8 unk_374[0xDC];
};
typedef char TUnk_80486924_size[sizeof(TUnk_80486924) == 0x450 ? 1 : -1];

#endif
