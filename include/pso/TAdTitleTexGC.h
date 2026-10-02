#ifndef PSO_TADTITLETEXGC_H
#define PSO_TADTITLETEXGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdTitleTexGC : public TObject {
public:
    virtual ~TAdTitleTexGC();
    virtual void run_task();
    virtual void render();
};

#endif
