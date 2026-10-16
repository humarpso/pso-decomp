#ifndef PSO_OBJECT_TOBJQUESTCOLALOCK_H
#define PSO_OBJECT_TOBJQUESTCOLALOCK_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColALock : public TObjQuestColBase {
    virtual ~TObjQuestColALock();};

typedef char TObjQuestColALock_size[sizeof(TObjQuestColALock) == 0xBC ? 1 : -1];
#endif
