#ifndef PSO_ENEMY_TUNK_8048FE64_H
#define PSO_ENEMY_TUNK_8048FE64_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8048FE64 : public TObject {
public:
    virtual ~TUnk_8048FE64();
    u8 unk_1C[0x30];
    f32 m_4c;
    u8 unk_50[0x4];
};
typedef char TUnk_8048FE64_size[sizeof(TUnk_8048FE64) == 0x54 ? 1 : -1];

#endif
