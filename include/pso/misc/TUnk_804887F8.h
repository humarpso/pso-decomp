#ifndef PSO_MISC_TUNK_804887F8_H
#define PSO_MISC_TUNK_804887F8_H
#include "types.h"
#include "pso/misc/TUnk_80488E00.h"

class TUnk_804887F8 : public TUnk_80488E00 {
public:
    virtual ~TUnk_804887F8();
    void*init();
    u8 unk_110[0x20];
};
typedef char TUnk_804887F8_size[sizeof(TUnk_804887F8) == 0x130 ? 1 : -1];

#endif
