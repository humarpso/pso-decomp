#ifndef PSO_ENEMY_TUNK_804E14E8_H
#define PSO_ENEMY_TUNK_804E14E8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804E14E8 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804E14E8();
    u8 unk_AC[0x60];
};
typedef char TUnk_804E14E8_size[sizeof(TUnk_804E14E8) == 0x10C ? 1 : -1];

#endif
