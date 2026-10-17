#ifndef PSO_MISC_TBGLIGHTNINGCTRL_H
#define PSO_MISC_TBGLIGHTNINGCTRL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TBGLightningCtrl : public TUnk_804B9870 {
    virtual ~TBGLightningCtrl();
    u32 m_90;
    static void render();
    static void destroy_instance();
};

typedef char TBGLightningCtrl_size[sizeof(TBGLightningCtrl) == 0x94 ? 1 : -1];
#endif
