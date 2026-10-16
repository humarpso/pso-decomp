#ifndef PSO_TADSELECTTXTSUBGC_H
#define PSO_TADSELECTTXTSUBGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdSelectTxtSubGC : public TObject {
public:
    virtual ~TAdSelectTxtSubGC();
    void render_status();
    virtual void run_task();
    virtual void render();
};

#endif
