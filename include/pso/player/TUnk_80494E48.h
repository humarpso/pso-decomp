#ifndef PSO_PLAYER_TUNK_80494E48_H
#define PSO_PLAYER_TUNK_80494E48_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80494E48 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80494E48();
    u8 unk_AC[0x58];
};
typedef char TUnk_80494E48_size[sizeof(TUnk_80494E48) == 0x104 ? 1 : -1];

#endif
