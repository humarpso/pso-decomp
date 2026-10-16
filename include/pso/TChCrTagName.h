#ifndef PSO_TCHCRTAGNAME_H
#define PSO_TCHCRTAGNAME_H
#include "pso/TChCrTag.h"
#include "types.h"

class TChCrTagName : public TChCrTag {
public:
    virtual ~TChCrTagName();
    virtual void render();
    virtual void run_task();
};

#endif
