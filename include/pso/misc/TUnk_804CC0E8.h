#ifndef PSO_MISC_TUNK_804CC0E8_H
#define PSO_MISC_TUNK_804CC0E8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC0E8 : public TObject {
public:
    virtual ~TUnk_804CC0E8();
    u8 unk_1C[0x2C];
};
typedef char TUnk_804CC0E8_size[sizeof(TUnk_804CC0E8) == 0x48 ? 1 : -1];

#endif
