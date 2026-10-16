#ifndef PSO_ITEM_TUNK_804CC048_H
#define PSO_ITEM_TUNK_804CC048_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC048 : public TObject {
public:
    virtual ~TUnk_804CC048();
    u8 unk_1C[0x108C];
};
typedef char TUnk_804CC048_size[sizeof(TUnk_804CC048) == 0x10A8 ? 1 : -1];

#endif
