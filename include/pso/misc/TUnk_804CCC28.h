#ifndef PSO_MISC_TUNK_804CCC28_H
#define PSO_MISC_TUNK_804CCC28_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCC28 : public TObject {
public:
    virtual ~TUnk_804CCC28();
    u8 unk_1C[0x1C];
};
typedef char TUnk_804CCC28_size[sizeof(TUnk_804CCC28) == 0x38 ? 1 : -1];

#endif
