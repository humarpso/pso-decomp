#ifndef PSO_UNK_TPHOTONGOLLA_H
#define PSO_UNK_TPHOTONGOLLA_H
#include "types.h"
#include "pso/misc/TUnk_804C3248.h"

class TPhotonGolla : public TUnk_804C3248 {
public:
    virtual ~TPhotonGolla();
    virtual void render();
    virtual void run_task();
    u8 unk_158[0x74];
};
typedef char TPhotonGolla_size[sizeof(TPhotonGolla) == 0x1CC ? 1 : -1];

#endif
