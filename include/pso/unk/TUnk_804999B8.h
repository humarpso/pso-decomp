#ifndef PSO_UNK_TUNK_804999B8_H
#define PSO_UNK_TUNK_804999B8_H
#include "types.h"
#include "pso/boss/TUnk_804999E8.h"

class TUnk_804999B8 : public TUnk_804999E8 {
public:
    virtual ~TUnk_804999B8();
    u8 unk_24[0x4];
};
typedef char TUnk_804999B8_size[sizeof(TUnk_804999B8) == 0x28 ? 1 : -1];

#endif
