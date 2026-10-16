#ifndef PSO_OBJECT_TOBJQUESTCOLAPCIN_H
#define PSO_OBJECT_TOBJQUESTCOLAPCIN_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColApcIN : public TObjQuestColBase {
    virtual ~TObjQuestColApcIN();
    u8 unk_BC[0x4];
};

typedef char TObjQuestColApcIN_size[sizeof(TObjQuestColApcIN) == 0xC0 ? 1 : -1];
#endif
