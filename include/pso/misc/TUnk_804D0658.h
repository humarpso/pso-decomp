#ifndef PSO_MISC_TUNK_804D0658_H
#define PSO_MISC_TUNK_804D0658_H
#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

class TUnk_804D0658 : public TUnk_804CDFE8 {
public:
    virtual ~TUnk_804D0658();
    u8 unk_1C[0x64];
};
typedef char TUnk_804D0658_size[sizeof(TUnk_804D0658) == 0x80 ? 1 : -1];

#endif
