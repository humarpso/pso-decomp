#ifndef PSO_UI_TADPSOPASSSAVEGC_H
#define PSO_UI_TADPSOPASSSAVEGC_H

#include "types.h"
#include "pso/ui/TAdYesNoBaseGC.h"

struct TAdPsoPassSaveGC : public TAdYesNoBaseGC {
    virtual ~TAdPsoPassSaveGC();
    void render();
    void run_task();};

typedef char TAdPsoPassSaveGC_size[sizeof(TAdPsoPassSaveGC) == 0x48 ? 1 : -1];
#endif
