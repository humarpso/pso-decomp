#ifndef PSO_UI_TADENTERPASSWORDGC_H
#define PSO_UI_TADENTERPASSWORDGC_H

#include "types.h"
#include "pso/ui/TAdEnterBaseGC.h"

struct TAdEnterPasswordGC : public TAdEnterBaseGC {
    virtual ~TAdEnterPasswordGC();
    void render();
    void run_task();
    u8 unk_38[0xC];
};

typedef char TAdEnterPasswordGC_size[sizeof(TAdEnterPasswordGC) == 0x44 ? 1 : -1];
#endif
