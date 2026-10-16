#ifndef PSO_PLAYER_TUNK_804B1B80_H
#define PSO_PLAYER_TUNK_804B1B80_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TUnk_804B1B80 : public TUnk_804AFBF8 {
public:
    virtual ~TUnk_804B1B80();
    u8 unk_C8[0x10];
};
typedef char TUnk_804B1B80_size[sizeof(TUnk_804B1B80) == 0xD8 ? 1 : -1];

#endif
