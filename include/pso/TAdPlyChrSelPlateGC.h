#ifndef PSO_TADPLYCHRSELPLATEGC_H
#define PSO_TADPLYCHRSELPLATEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdPlyChrSelPlateGC : public TObject {
public:
    virtual ~TAdPlyChrSelPlateGC();
    virtual void run_task();
    virtual void render();
};

#endif
