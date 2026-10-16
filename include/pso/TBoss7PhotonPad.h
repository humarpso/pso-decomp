#ifndef PSO_TBOSS7PHOTONPAD_H
#define PSO_TBOSS7PHOTONPAD_H
#include "pso/TObject.h"
#include "types.h"

class TBoss7PhotonPad : public TObject {
public:
    virtual ~TBoss7PhotonPad();
    virtual void run_task();
    virtual void render();
public:
};

#endif
