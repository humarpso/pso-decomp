#ifndef PSO_MISC_TUNK_804EE470_H
#define PSO_MISC_TUNK_804EE470_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EE470 : public TObject {
public:
    virtual ~TUnk_804EE470();
    u8 unk_1C[0x4];
};
typedef char TUnk_804EE470_size[sizeof(TUnk_804EE470) == 0x20 ? 1 : -1];

#endif
