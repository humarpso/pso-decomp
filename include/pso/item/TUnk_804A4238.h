#ifndef PSO_ITEM_TUNK_804A4238_H
#define PSO_ITEM_TUNK_804A4238_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4238 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4238();
    u8 unk_1C[0x170];
};
typedef char TUnk_804A4238_size[sizeof(TUnk_804A4238) == 0x18C ? 1 : -1];

#endif
