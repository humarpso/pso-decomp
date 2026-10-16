#ifndef PSO_UI_TADSNAKPASSCONFIRMGC_H
#define PSO_UI_TADSNAKPASSCONFIRMGC_H

#include "types.h"
#include "pso/ui/TAdYesNoBaseGC.h"

struct TAdSnAkPassConfirmGC : public TAdYesNoBaseGC {
    virtual ~TAdSnAkPassConfirmGC();
    u32 m_48;
    s32 get_confirm_state();
    virtual void render();
    virtual void run_task();};

typedef char TAdSnAkPassConfirmGC_size[sizeof(TAdSnAkPassConfirmGC) == 0x4C ? 1 : -1];
#endif
