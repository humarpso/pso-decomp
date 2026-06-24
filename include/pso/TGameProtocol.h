#ifndef PSO_TGAMEPROTOCOL_H
#define PSO_TGAMEPROTOCOL_H

#include "pso/TObject.h"
#include "types.h"

class TGameProtocol : public TObject {
public:
    virtual ~TGameProtocol();
    virtual void run_task();
};

#endif
