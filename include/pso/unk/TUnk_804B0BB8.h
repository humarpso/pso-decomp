#ifndef PSO_UNK_TUNK_804B0BB8_H
#define PSO_UNK_TUNK_804B0BB8_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TUnk_804B0BB8 : public TUnk_804AFBF8 {
public:
    virtual ~TUnk_804B0BB8();
    u8 unk_C8[0xC];
};
typedef char TUnk_804B0BB8_size[sizeof(TUnk_804B0BB8) == 0xD4 ? 1 : -1];

#endif
