#ifndef PSO_MISC_TWINDOWCTRLCLIPOUT_H
#define PSO_MISC_TWINDOWCTRLCLIPOUT_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowCtrlClipOut : public TObject {
    virtual ~TWindowCtrlClipOut();
    virtual void render();};

typedef char TWindowCtrlClipOut_size[sizeof(TWindowCtrlClipOut) == 0x1C ? 1 : -1];
#endif
