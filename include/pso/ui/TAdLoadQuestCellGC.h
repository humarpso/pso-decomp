#ifndef PSO_UI_TADLOADQUESTCELLGC_H
#define PSO_UI_TADLOADQUESTCELLGC_H

#include "pso/TObject.h"
#include <stddef.h>

class TAdLoadQuestCellGC : public TObject {
public:
    virtual ~TAdLoadQuestCellGC();
    virtual void run_task();
    virtual void render();
    s32 m_state;
    s32 m_frameCount;
public:
    void render_state();
};

typedef char TAdLoadQuestCellGCFrameOffset[(offsetof(TAdLoadQuestCellGC, m_frameCount) == 0x20) ? 1 : -1];
typedef char TAdLoadQuestCellGCSize[sizeof(TAdLoadQuestCellGC) == 0x24 ? 1 : -1];
typedef char TAdLoadQuestCellGCStateOffset[offsetof(TAdLoadQuestCellGC, m_state) == 0x1C ? 1 : -1];
#endif
