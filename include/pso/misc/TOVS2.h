#ifndef PSO_MISC_TOVS2_H
#define PSO_MISC_TOVS2_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TOVS2 : public TUnk_804AFBF8 {
public:
    virtual ~TOVS2();
    virtual void render();
    u8 unk_C8[0x8];
};

#endif
