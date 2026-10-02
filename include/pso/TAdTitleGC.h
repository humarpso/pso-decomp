#ifndef PSO_TADTITLEGC_H
#define PSO_TADTITLEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdTitleGC : public TObject {
public:
    virtual ~TAdTitleGC();
    virtual void run_task();
    virtual void render();
};

#endif
