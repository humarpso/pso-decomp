#ifndef PSO_ITEM_TUNK_804F0BF0_H
#define PSO_ITEM_TUNK_804F0BF0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F0BF0 : public TObject {
public:
    virtual ~TUnk_804F0BF0();
    u8 unk_1C[0x4C];
};
typedef char TUnk_804F0BF0_size[sizeof(TUnk_804F0BF0) == 0x68 ? 1 : -1];

#endif
