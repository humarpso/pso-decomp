#ifndef PSO_MISC_TUNK_804AFBF8_H
#define PSO_MISC_TUNK_804AFBF8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804AFBF8 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804AFBF8();
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x1C];
};

#endif
