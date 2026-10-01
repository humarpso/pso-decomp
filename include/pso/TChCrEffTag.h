#ifndef PSO_TCHCREFFTAG_H
#define PSO_TCHCREFFTAG_H
#include "pso/TObject.h"
#include "types.h"

class TChCrEffTag : public TObject {
public:
    virtual void run_task();
    s32 heading;
    f32 width,targetWidth;
    TObject* label;
    virtual ~TChCrEffTag();
    virtual void render();
};

#endif
