#ifndef PSO_MISC_TUNK_804B27D8_H
#define PSO_MISC_TUNK_804B27D8_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TUnk_804B27D8 : public TUnk_804AFBF8 {
public:
    virtual ~TUnk_804B27D8();
    u8 unk_C8[0x1C];
};
typedef char TUnk_804B27D8_size[sizeof(TUnk_804B27D8) == 0xE4 ? 1 : -1];

#endif
