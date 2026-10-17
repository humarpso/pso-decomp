#ifndef PSO_PLAYER_TUNK_80491460_H
#define PSO_PLAYER_TUNK_80491460_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80491460 : public TObject {
public:
    virtual ~TUnk_80491460();
    s32 try_hit_target(int);
    u8 unk_1C[0x3C];
    f32 m_58;
    u8 unk_5C[0x4];
    s32 m_60;
    u8 unk_64[0x8];
};
typedef char TUnk_80491460_size[sizeof(TUnk_80491460) == 0x6C ? 1 : -1];

#endif
