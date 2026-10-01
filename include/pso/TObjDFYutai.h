#ifndef PSO_TOBJDFYUTAI_H
#define PSO_TOBJDFYUTAI_H
#include "pso/TObject.h"
#include "types.h"

class TObjDFYutai : public TObject {
public:
    virtual ~TObjDFYutai();
    virtual void run_task();
    virtual void render();
};

#endif
