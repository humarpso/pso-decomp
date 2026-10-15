#ifndef PSO_UI_TADTRIALMODEMCHKGC_H
#define PSO_UI_TADTRIALMODEMCHKGC_H

#include "types.h"

struct TAdTrialModemChkGC
{
    static void check_modem_result();
    void render();
    void run_task();
    static s32 init_modem_check_params();
};

#endif
