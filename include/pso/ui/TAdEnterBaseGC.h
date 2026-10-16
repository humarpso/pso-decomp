#ifndef PSO_UI_TADENTERBASEGC_H
#define PSO_UI_TADENTERBASEGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdEnterBaseGC : public TObject {
    virtual ~TAdEnterBaseGC();
    static void render();
    static void run_task();
    void reset(int a1);
    u8 unk_1C[0x1C];
};

typedef char TAdEnterBaseGC_size[sizeof(TAdEnterBaseGC) == 0x38 ? 1 : -1];
#endif
