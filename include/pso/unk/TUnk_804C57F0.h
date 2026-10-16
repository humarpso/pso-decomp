#ifndef PSO_UNK_TUNK_804C57F0_H
#define PSO_UNK_TUNK_804C57F0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C57F0 : public TObject {
public:
    virtual ~TUnk_804C57F0();
    virtual void render();
    u8 unk_1C[0x10];
};
typedef char TUnk_804C57F0_size[sizeof(TUnk_804C57F0) == 0x2C ? 1 : -1];

#endif
