#ifndef PSO_MISC_TUNK_804D1AD0_H
#define PSO_MISC_TUNK_804D1AD0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804D1AD0 : public TObject {
public:
    virtual ~TUnk_804D1AD0();
    u8 unk_1C[0x10];
};
typedef char TUnk_804D1AD0_size[sizeof(TUnk_804D1AD0) == 0x2C ? 1 : -1];

#endif
