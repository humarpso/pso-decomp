#ifndef PSO_ITEM_TUNK_804A3E20_H
#define PSO_ITEM_TUNK_804A3E20_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A3E20 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A3E20();
    u8 unk_1C[0x1EC];
};
typedef char TUnk_804A3E20_size[sizeof(TUnk_804A3E20) == 0x208 ? 1 : -1];

#endif
