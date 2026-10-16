#ifndef PSO_UNK_TUNK_80494E10_H
#define PSO_UNK_TUNK_80494E10_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80494E10 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80494E10();
    u8 unk_AC[0x54];
};
typedef char TUnk_80494E10_size[sizeof(TUnk_80494E10) == 0x100 ? 1 : -1];

#endif
