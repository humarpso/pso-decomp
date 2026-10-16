#ifndef PSO_MISC_TUNK_804C8678_H
#define PSO_MISC_TUNK_804C8678_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C8678 : public TObject {
public:
    virtual ~TUnk_804C8678();
    u8 unk_1C[0x188];
};
typedef char TUnk_804C8678_size[sizeof(TUnk_804C8678) == 0x1A4 ? 1 : -1];

#endif
