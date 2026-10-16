#ifndef PSO_MISC_TUNK_804949F4_H
#define PSO_MISC_TUNK_804949F4_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804949F4 : public TObject {
public:
    virtual ~TUnk_804949F4();
    virtual void vfunc_6();
    u8 unk_1C[0x1C];
};
typedef char TUnk_804949F4_size[sizeof(TUnk_804949F4) == 0x38 ? 1 : -1];

#endif
