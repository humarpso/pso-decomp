#ifndef PSO_UNK_TUNK_804B8E18_H
#define PSO_UNK_TUNK_804B8E18_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B8E18 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B8E18();
    u8 unk_334[0x70];
};
typedef char TUnk_804B8E18_size[sizeof(TUnk_804B8E18) == 0x3A4 ? 1 : -1];

#endif
