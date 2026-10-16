#ifndef PSO_BOSS_TUNK_804835D8_H
#define PSO_BOSS_TUNK_804835D8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804835D8 : public TObject {
public:
    virtual ~TUnk_804835D8();
    u8 unk_1C[0x8];
};
typedef char TUnk_804835D8_size[sizeof(TUnk_804835D8) == 0x24 ? 1 : -1];

#endif
