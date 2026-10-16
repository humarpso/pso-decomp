#ifndef PSO_MISC_TUNK_804CCA0C_H
#define PSO_MISC_TUNK_804CCA0C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCA0C : public TObject {
public:
    virtual ~TUnk_804CCA0C();
    u8 unk_1C[0x28];
};
typedef char TUnk_804CCA0C_size[sizeof(TUnk_804CCA0C) == 0x44 ? 1 : -1];

#endif
