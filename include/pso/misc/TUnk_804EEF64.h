#ifndef PSO_MISC_TUNK_804EEF64_H
#define PSO_MISC_TUNK_804EEF64_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EEF64 : public TObject {
public:
    virtual ~TUnk_804EEF64();
    void sub_8033645C();
    u8 unk_1C[0x30];
};
typedef char TUnk_804EEF64_size[sizeof(TUnk_804EEF64) == 0x4C ? 1 : -1];

#endif
