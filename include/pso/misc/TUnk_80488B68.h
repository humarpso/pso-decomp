#ifndef PSO_MISC_TUNK_80488B68_H
#define PSO_MISC_TUNK_80488B68_H
#include "types.h"
#include "pso/misc/TUnk_80488A28.h"

class TUnk_80488B68 : public TUnk_80488A28 {
public:
    virtual ~TUnk_80488B68();
    u8 unk_6C[0x38];
};
typedef char TUnk_80488B68_size[sizeof(TUnk_80488B68) == 0xA4 ? 1 : -1];

#endif
