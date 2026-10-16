#ifndef PSO_PLAYER_TUNK_80484A94_H
#define PSO_PLAYER_TUNK_80484A94_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80484A94 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80484A94();
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x34];
};
typedef char TUnk_80484A94_size[sizeof(TUnk_80484A94) == 0xE0 ? 1 : -1];

#endif
