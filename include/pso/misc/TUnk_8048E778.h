#ifndef PSO_MISC_TUNK_8048E778_H
#define PSO_MISC_TUNK_8048E778_H
#include "types.h"
#include "pso/misc/TUnk_8048E728.h"

class TUnk_8048E778 : public TUnk_8048E728 {
public:
    virtual ~TUnk_8048E778();
    virtual void render();
    u8 unk_C0[0x10];
};
typedef char TUnk_8048E778_size[sizeof(TUnk_8048E778) == 0xD0 ? 1 : -1];

#endif
