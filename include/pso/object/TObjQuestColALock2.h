#ifndef PSO_OBJECT_TOBJQUESTCOLALOCK2_H
#define PSO_OBJECT_TOBJQUESTCOLALOCK2_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColALock2 : public TObjQuestColBase {
    virtual ~TObjQuestColALock2();
    u8 unk_BC[0x8];
};

typedef char TObjQuestColALock2_size[sizeof(TObjQuestColALock2) == 0xC4 ? 1 : -1];
#endif
