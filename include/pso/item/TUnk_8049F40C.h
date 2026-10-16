#ifndef PSO_ITEM_TUNK_8049F40C_H
#define PSO_ITEM_TUNK_8049F40C_H
#include "types.h"
#include "pso/item/TUnk_8049F42C.h"

class TUnk_8049F40C : public TUnk_8049F42C {
public:
    virtual ~TUnk_8049F40C();
    u8 unk_1C[0xC];
};
typedef char TUnk_8049F40C_size[sizeof(TUnk_8049F40C) == 0x28 ? 1 : -1];

#endif
