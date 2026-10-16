#ifndef PSO_UNK_TUNK_80499970_H
#define PSO_UNK_TUNK_80499970_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80499970 : public TObject {
public:
    virtual ~TUnk_80499970();
    void step_fade_opacity_decrease();
    u8 unk_1C[0x10];
};
typedef char TUnk_80499970_size[sizeof(TUnk_80499970) == 0x2C ? 1 : -1];

#endif
