#ifndef PSO_OBJECT_TOBJQUESTCOLAPC_H
#define PSO_OBJECT_TOBJQUESTCOLAPC_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColApc : public TObjQuestColBase {
    virtual ~TObjQuestColApc();};

typedef char TObjQuestColApc_size[sizeof(TObjQuestColApc) == 0xBC ? 1 : -1];
#endif
