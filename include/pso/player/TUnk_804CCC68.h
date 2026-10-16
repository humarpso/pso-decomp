#ifndef PSO_PLAYER_TUNK_804CCC68_H
#define PSO_PLAYER_TUNK_804CCC68_H
#include "types.h"
#include "pso/effect/TEffect.h"

struct TechniqueContactActor;
struct TechniqueContactBody;

class TUnk_804CCC68 : public TEffect {
public:
    virtual ~TUnk_804CCC68();
    f32 range;
    f32 traveled;
    f32 previous[3];
    u8 beforeLevel[0x40];
    s16 level;
    s16 band;
    u16 sourceId;
    u8 unk_CA[0x2];
    f32 power;
    u8 parameters[0x28];
    TechniqueContactBody* contact;
    u8 beforeProxy[0x2c];
    TechniqueContactActor* proxy;
    f32 halfWidth;
};

#endif
