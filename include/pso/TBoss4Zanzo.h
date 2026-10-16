#ifndef PSO_TBOSS4ZANZO_H
#define PSO_TBOSS4ZANZO_H
#include "pso/TObject.h"
#include "types.h"

class TBoss4Zanzo : public TObject {
public:
    virtual ~TBoss4Zanzo();
    virtual void render();
    virtual void run_task();
};

#endif
