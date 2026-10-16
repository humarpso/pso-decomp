#ifndef PSO_ENEMY_TUNK_8048FE08_H
#define PSO_ENEMY_TUNK_8048FE08_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TUnk_8048FE08 : public TUnk_804928CC {
public:
    virtual ~TUnk_8048FE08();
    u8 unk_B0[0x24];
};
typedef char TUnk_8048FE08_size[sizeof(TUnk_8048FE08) == 0xD4 ? 1 : -1];

#endif
