#ifndef PSO_MISC_TUNK_80488838_H
#define PSO_MISC_TUNK_80488838_H
#include "types.h"
#include "pso/misc/TUnk_80488A28.h"

class TUnk_80488838 : public TUnk_80488A28 {
public:
    virtual ~TUnk_80488838();
    u8 unk_6C[0x8];
};
typedef char TUnk_80488838_size[sizeof(TUnk_80488838) == 0x74 ? 1 : -1];

#endif
