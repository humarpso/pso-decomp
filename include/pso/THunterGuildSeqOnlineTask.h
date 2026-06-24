#ifndef PSO_THUNTERGUILDSEQONLINETASK_H
#define PSO_THUNTERGUILDSEQONLINETASK_H

#include "pso/TObject.h"
#include "types.h"

class THunterGuildSeqOnlineTask : public TObject {
public:
    virtual ~THunterGuildSeqOnlineTask();
    virtual void run_task();
};

#endif
