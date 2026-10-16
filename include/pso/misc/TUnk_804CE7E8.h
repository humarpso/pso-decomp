#ifndef PSO_MISC_TUNK_804CE7E8_H
#define PSO_MISC_TUNK_804CE7E8_H
#include "types.h"
#include "pso/misc/TUnk_804D0618.h"

class TUnk_804CE7E8 : public TUnk_804D0618 {
public:
    virtual ~TUnk_804CE7E8();
    u8 unk_88[0x4];
};
typedef char TUnk_804CE7E8_size[sizeof(TUnk_804CE7E8) == 0x8C ? 1 : -1];

#endif
