#ifndef PSO_MISC_TUNK_804D0618_H
#define PSO_MISC_TUNK_804D0618_H
#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

class TUnk_804D0618 : public TUnk_804CDFE8 {
public:
    virtual ~TUnk_804D0618();
    u8 unk_1C[0x6C];
};
typedef char TUnk_804D0618_size[sizeof(TUnk_804D0618) == 0x88 ? 1 : -1];

#endif
