#ifndef PSO_PLAYER_TUNK_804EDD20_H
#define PSO_PLAYER_TUNK_804EDD20_H
#include "types.h"
#include "pso/item/TUnk_804EDD44.h"

class TUnk_804EDD20 : public TUnk_804EDD44 {
public:
    virtual ~TUnk_804EDD20();
    u8 unk_70[0x20];
};
typedef char TUnk_804EDD20_size[sizeof(TUnk_804EDD20) == 0x90 ? 1 : -1];

#endif
