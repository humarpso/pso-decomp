#ifndef PSO_UI_TADTRIALMODEMCHKGC_H
#define PSO_UI_TADTRIALMODEMCHKGC_H

#include "types.h"
#include "pso/ui/TAdWarningBaseGC.h"

struct TAdTrialModemChkGC : public TAdWarningBaseGC {
    virtual ~TAdTrialModemChkGC();
    static void check_modem_result();
    virtual void render();
    virtual void run_task();
    static s32 init_modem_check_params();};

typedef char TAdTrialModemChkGC_size[sizeof(TAdTrialModemChkGC) == 0x30 ? 1 : -1];
#endif
