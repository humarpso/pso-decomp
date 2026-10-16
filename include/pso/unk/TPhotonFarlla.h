#ifndef PSO_UNK_TPHOTONFARLLA_H
#define PSO_UNK_TPHOTONFARLLA_H
#include "types.h"
#include "pso/misc/TUnk_804C3248.h"

class TPhotonFarlla : public TUnk_804C3248 {
public:
    virtual ~TPhotonFarlla();
    u8 unk_158[0x50];
};
typedef char TPhotonFarlla_size[sizeof(TPhotonFarlla) == 0x1A8 ? 1 : -1];

#endif
