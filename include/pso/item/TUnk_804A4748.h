#ifndef PSO_ITEM_TUNK_804A4748_H
#define PSO_ITEM_TUNK_804A4748_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4748 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4748();
    u8 unk_1C[0x1D8];
};
typedef char TUnk_804A4748_size[sizeof(TUnk_804A4748) == 0x1F4 ? 1 : -1];

#endif
