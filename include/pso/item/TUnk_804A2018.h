#ifndef PSO_ITEM_TUNK_804A2018_H
#define PSO_ITEM_TUNK_804A2018_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804A2018 : public TObject {
public:
    virtual ~TUnk_804A2018();
    u8 unk_1C[0x10];
};
typedef char TUnk_804A2018_size[sizeof(TUnk_804A2018) == 0x2C ? 1 : -1];

#endif
