#ifndef PSO_UI_TADEXNETCONFIRMGC_H
#define PSO_UI_TADEXNETCONFIRMGC_H

#include "types.h"

struct TAdExNetConfirmGC
{
    static s32 is_confirmed();
    void render();
    void run_task();
};

#endif
