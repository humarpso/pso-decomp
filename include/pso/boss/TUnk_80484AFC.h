#ifndef PSO_BOSS_TUNK_80484AFC_H
#define PSO_BOSS_TUNK_80484AFC_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80484AFC : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80484AFC();
    u8 unk_AC[0x44];
};
typedef char TUnk_80484AFC_size[sizeof(TUnk_80484AFC) == 0xF0 ? 1 : -1];

#endif
