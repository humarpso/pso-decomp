#ifndef PSO_PLAYER_TUNK_804928CC_H
#define PSO_PLAYER_TUNK_804928CC_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804928CC : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804928CC();
    u8 unk_AC[0x4];
};
typedef char TUnk_804928CC_size[sizeof(TUnk_804928CC) == 0xB0 ? 1 : -1];

#endif
