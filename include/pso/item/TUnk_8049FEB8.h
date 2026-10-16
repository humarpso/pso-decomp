#ifndef PSO_ITEM_TUNK_8049FEB8_H
#define PSO_ITEM_TUNK_8049FEB8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8049FEB8 : public TObject {
public:
    virtual ~TUnk_8049FEB8();
    u8 unk_1C[0x4];
};
typedef char TUnk_8049FEB8_size[sizeof(TUnk_8049FEB8) == 0x20 ? 1 : -1];

#endif
