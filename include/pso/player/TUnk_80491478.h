#ifndef PSO_PLAYER_TUNK_80491478_H
#define PSO_PLAYER_TUNK_80491478_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80491478 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80491478();
    void *destroy_with_particle_cleanup(s16);
    u8 unk_AC[0x50];
};
typedef char TUnk_80491478_size[sizeof(TUnk_80491478) == 0xFC ? 1 : -1];

#endif
