#ifndef PSO_PLAYER_TUNK_8049F130_H
#define PSO_PLAYER_TUNK_8049F130_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8049F130 : public TObject {
public:
    virtual ~TUnk_8049F130();
    u8 unk_1C[0x14];
};
typedef char TUnk_8049F130_size[sizeof(TUnk_8049F130) == 0x30 ? 1 : -1];

#endif
