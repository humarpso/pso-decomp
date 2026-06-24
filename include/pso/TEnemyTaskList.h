#ifndef PSO_TENEMYTASKLIST_H
#define PSO_TENEMYTASKLIST_H

#include "pso/TObject.h"
#include "types.h"

class TEnemyTaskList : public TObject {
public:
    u8 _pad1C[0x8];
 void* m_24;
 void* m_28;
public:
    virtual ~TEnemyTaskList();
};

#endif
