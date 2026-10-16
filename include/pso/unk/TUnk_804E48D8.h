#ifndef PSO_UNK_TUNK_804E48D8_H
#define PSO_UNK_TUNK_804E48D8_H
#include "types.h"
#include "pso/object/TObjAreaWarpForest.h"

class TUnk_804E48D8 : public TObjAreaWarpForest {
public:
    virtual ~TUnk_804E48D8();
    u8 unk_C0[0x20];
};
typedef char TUnk_804E48D8_size[sizeof(TUnk_804E48D8) == 0xE0 ? 1 : -1];

#endif
