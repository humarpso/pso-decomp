#ifndef PSO_MISC_TUNK_804CC9D4_H
#define PSO_MISC_TUNK_804CC9D4_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804CC9D4 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804CC9D4();
    u8 unk_AC[0x8];
};
typedef char TUnk_804CC9D4_size[sizeof(TUnk_804CC9D4) == 0xB4 ? 1 : -1];

#endif
