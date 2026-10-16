#ifndef PSO_OBJECT_TOBJCITY_SEASON_EASTEREGG_H
#define PSO_OBJECT_TOBJCITY_SEASON_EASTEREGG_H

#include "types.h"
#include "pso/object/TUnk_804B5E48.h"

struct TObjCity_Season_EasterEgg : public TUnk_804B5E48 {
    virtual ~TObjCity_Season_EasterEgg();

    u8 unk_B4[0xC];
};

typedef char TObjCity_Season_EasterEgg_size[sizeof(TObjCity_Season_EasterEgg) == 0xC0 ? 1 : -1];
#endif
