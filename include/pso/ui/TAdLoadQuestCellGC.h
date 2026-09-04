#ifndef PSO_UI_TADLOADQUESTCELLGC_H
#define PSO_UI_TADLOADQUESTCELLGC_H

#include "pso/TObject.h"
#include <stddef.h>

class TAdLoadQuestCellGC : public TObject {
public:
    virtual void render();
    s32 m_state;
    s32 m_frameCount;
};

typedef char TAdLoadQuestCellGCFrameOffset[(offsetof(TAdLoadQuestCellGC, m_frameCount) == 0x20) ? 1 : -1];
#endif
