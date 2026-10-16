#ifndef PSO_MISC_TUNK_804CE7D0_H
#define PSO_MISC_TUNK_804CE7D0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CE7D0 : public TObject {
public:
    virtual ~TUnk_804CE7D0();
    u8 unk_1C[0x8];
};
typedef char TUnk_804CE7D0_size[sizeof(TUnk_804CE7D0) == 0x24 ? 1 : -1];

#endif
