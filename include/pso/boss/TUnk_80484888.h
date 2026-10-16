#ifndef PSO_BOSS_TUNK_80484888_H
#define PSO_BOSS_TUNK_80484888_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484888 : public TObject {
public:
    virtual ~TUnk_80484888();
    u8 unk_1C[0x2C];
};
typedef char TUnk_80484888_size[sizeof(TUnk_80484888) == 0x48 ? 1 : -1];

#endif
