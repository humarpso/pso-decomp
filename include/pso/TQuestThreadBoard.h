#ifndef PSO_TQUESTTHREADBOARD_H
#define PSO_TQUESTTHREADBOARD_H

#include "pso/TObject.h"
#include "types.h"

class TQuestThreadBoard : public TObject {
public:
    u8 _pad1C[0xC];
 void* m_28;
 void* m_2c;

    virtual ~TQuestThreadBoard();
    virtual void run_task();
};

#endif
