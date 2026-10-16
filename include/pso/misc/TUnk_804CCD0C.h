#ifndef PSO_MISC_TUNK_804CCD0C_H
#define PSO_MISC_TUNK_804CCD0C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCD0C : public TObject {
public:
    virtual ~TUnk_804CCD0C();
    u8 unk_1C[0x18];
};
typedef char TUnk_804CCD0C_size[sizeof(TUnk_804CCD0C) == 0x34 ? 1 : -1];

#endif
