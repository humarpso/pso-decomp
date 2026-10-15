#ifndef PSO_TTECCTRL_H
#define PSO_TTECCTRL_H
#include "pso/TObject.h"
#include "types.h"

class TTecCtrl : public TObject {
public:
    virtual ~TTecCtrl();
public:
    static void render();
    static void run_task();
    static s32 classify_distance_band(s32 arg0, s32 arg1, s32 arg2);
};

#endif
