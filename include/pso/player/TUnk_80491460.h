#ifndef PSO_PLAYER_TUNK_80491460_H
#define PSO_PLAYER_TUNK_80491460_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80491460 : public TObject {
public:
    virtual ~TUnk_80491460();
    u8 unk_1C[0x50];
};
typedef char TUnk_80491460_size[sizeof(TUnk_80491460) == 0x6C ? 1 : -1];

#endif
