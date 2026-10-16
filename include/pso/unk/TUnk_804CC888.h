#ifndef PSO_UNK_TUNK_804CC888_H
#define PSO_UNK_TUNK_804CC888_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC888 : public TObject {
public:
    virtual ~TUnk_804CC888();
    u8 unk_1C[0x20];
};
typedef char TUnk_804CC888_size[sizeof(TUnk_804CC888) == 0x3C ? 1 : -1];

#endif
