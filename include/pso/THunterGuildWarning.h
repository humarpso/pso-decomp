#ifndef PSO_THUNTERGUILDWARNING_H
#define PSO_THUNTERGUILDWARNING_H

#include "pso/TObject.h"
#include "types.h"

class THunterGuildWarning : public TObject {
public:
    virtual ~THunterGuildWarning();
    virtual void run_task();
};

#endif
