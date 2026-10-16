#ifndef PSO_MISC_TUNK_804CF0B8_H
#define PSO_MISC_TUNK_804CF0B8_H
#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

class TUnk_804CF0B8 : public TUnk_804CDFE8 {
public:
    virtual ~TUnk_804CF0B8();
    u8 unk_1C[0x7C];
};
typedef char TUnk_804CF0B8_size[sizeof(TUnk_804CF0B8) == 0x98 ? 1 : -1];

#endif
