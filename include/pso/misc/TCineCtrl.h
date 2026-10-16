#ifndef PSO_MISC_TCINECTRL_H
#define PSO_MISC_TCINECTRL_H

#include "types.h"
#include "pso/TObject.h"

struct TCineCtrl : public TObject {
    virtual ~TCineCtrl();
    void render();
    static void reset_state(s32 arg0);
    static void reset(s32 arg0);
    void run_task();
    u8 unk_1C[0x14];
};

typedef char TCineCtrl_size[sizeof(TCineCtrl) == 0x30 ? 1 : -1];
#endif
