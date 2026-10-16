#ifndef PSO_MISC_TUNK_804CC800_H
#define PSO_MISC_TUNK_804CC800_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC800 : public TObject {
public:
    virtual ~TUnk_804CC800();
    u8 unk_1C[0x30];
};
typedef char TUnk_804CC800_size[sizeof(TUnk_804CC800) == 0x4C ? 1 : -1];

#endif
