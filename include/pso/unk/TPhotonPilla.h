#ifndef PSO_UNK_TPHOTONPILLA_H
#define PSO_UNK_TPHOTONPILLA_H
#include "types.h"
#include "pso/misc/TUnk_804C3248.h"

class TPhotonPilla : public TUnk_804C3248 {
public:
    virtual ~TPhotonPilla();
    u8 unk_158[0x54];
};
typedef char TPhotonPilla_size[sizeof(TPhotonPilla) == 0x1AC ? 1 : -1];

#endif
