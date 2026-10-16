#ifndef PSO_MISC_TUNK_8048E790_H
#define PSO_MISC_TUNK_8048E790_H
#include "types.h"
#include "pso/misc/TUnk_8048E728.h"

class TUnk_8048E790 : public TUnk_8048E728 {
public:
    virtual ~TUnk_8048E790();
    virtual void render();
    u8 unk_C0[0x20];
};
typedef char TUnk_8048E790_size[sizeof(TUnk_8048E790) == 0xE0 ? 1 : -1];

#endif
