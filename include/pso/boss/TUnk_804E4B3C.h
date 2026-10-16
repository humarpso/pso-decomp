#ifndef PSO_BOSS_TUNK_804E4B3C_H
#define PSO_BOSS_TUNK_804E4B3C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E4B3C : public TObject {
public:
    virtual ~TUnk_804E4B3C();
    u8 unk_1C[0x78];
};
typedef char TUnk_804E4B3C_size[sizeof(TUnk_804E4B3C) == 0x94 ? 1 : -1];

#endif
