#ifndef PSO_MISC_TUNK_804ED5B0_H
#define PSO_MISC_TUNK_804ED5B0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804ED5B0 : public TObject {
public:
    virtual ~TUnk_804ED5B0();
    u8 unk_1C[0x4];
};
typedef char TUnk_804ED5B0_size[sizeof(TUnk_804ED5B0) == 0x20 ? 1 : -1];

#endif
