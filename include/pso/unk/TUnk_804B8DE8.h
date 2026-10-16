#ifndef PSO_UNK_TUNK_804B8DE8_H
#define PSO_UNK_TUNK_804B8DE8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804B8DE8 : public TObject {
public:
    virtual ~TUnk_804B8DE8();
    u8 unk_1C[0x3C];
};
typedef char TUnk_804B8DE8_size[sizeof(TUnk_804B8DE8) == 0x58 ? 1 : -1];

#endif
