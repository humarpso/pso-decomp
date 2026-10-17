#ifndef PSO_OBJECT_TOBJQUESTCOLA_H
#define PSO_OBJECT_TOBJQUESTCOLA_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColA : public TObjQuestColBase {
    virtual ~TObjQuestColA();
    virtual int vfunc_15();
    virtual int vfunc_16();
};

typedef char TObjQuestColA_size[sizeof(TObjQuestColA) == 0xBC ? 1 : -1];
#endif
