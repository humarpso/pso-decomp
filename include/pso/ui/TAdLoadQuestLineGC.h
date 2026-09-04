#ifndef PSO_UI_TADLOADQUESTLINEGC_H
#define PSO_UI_TADLOADQUESTLINEGC_H

#include "pso/TObject.h"
#include <stddef.h>

class TAdLoadQuestLineGC : public TObject {
public:
    virtual void render();
    s32 m_state;
    s32 m_frameCount;
};

typedef char TAdLoadQuestLineGCFrameOffset[(offsetof(TAdLoadQuestLineGC, m_frameCount) == 0x20) ? 1 : -1];
#endif
