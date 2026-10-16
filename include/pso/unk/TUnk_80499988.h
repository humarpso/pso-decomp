#ifndef PSO_UNK_TUNK_80499988_H
#define PSO_UNK_TUNK_80499988_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80499988 : public TObject {
public:
    virtual ~TUnk_80499988();
    u8 unk_1C[0x14];
};
typedef char TUnk_80499988_size[sizeof(TUnk_80499988) == 0x30 ? 1 : -1];

#endif
