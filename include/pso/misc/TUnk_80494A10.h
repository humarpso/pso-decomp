#ifndef PSO_MISC_TUNK_80494A10_H
#define PSO_MISC_TUNK_80494A10_H
#include "types.h"
#include "pso/TDeadSpot.h"

class TUnk_80494A10 : public TDeadSpot {
public:
    virtual ~TUnk_80494A10();
    u8 unk_1C[0xB0];
};
typedef char TUnk_80494A10_size[sizeof(TUnk_80494A10) == 0xCC ? 1 : -1];

#endif
