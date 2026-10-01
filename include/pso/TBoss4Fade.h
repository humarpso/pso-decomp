#ifndef PSO_TBOSS4FADE_H
#define PSO_TBOSS4FADE_H
#include "pso/TObject.h"
#include "types.h"

class TBoss4Fade : public TObject {
public:
    virtual ~TBoss4Fade();
    virtual void run_task();
    virtual void render();
};

#endif
