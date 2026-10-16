#ifndef PSO_MISC_TUNK_80488A28_H
#define PSO_MISC_TUNK_80488A28_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80488A28 : public TObject {
public:
    virtual ~TUnk_80488A28();
    u8 unk_1C[0x50];
};
typedef char TUnk_80488A28_size[sizeof(TUnk_80488A28) == 0x6C ? 1 : -1];

#endif
