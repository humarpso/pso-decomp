#ifndef PSO_OBJECT_TOBJQUESTCOL2_H
#define PSO_OBJECT_TOBJQUESTCOL2_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestCol2 : public TObjQuestColBase {
    virtual ~TObjQuestCol2();
    virtual int vfunc_15();
    u8 unk_BC[0x8];
};

typedef char TObjQuestCol2_size[sizeof(TObjQuestCol2) == 0xC4 ? 1 : -1];
#endif
