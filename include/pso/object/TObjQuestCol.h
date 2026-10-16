#ifndef PSO_OBJECT_TOBJQUESTCOL_H
#define PSO_OBJECT_TOBJQUESTCOL_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestCol : public TObjQuestColBase {
    virtual ~TObjQuestCol();
    s32 update_trigger_state(f32 farg0);};

typedef char TObjQuestCol_size[sizeof(TObjQuestCol) == 0xBC ? 1 : -1];
#endif
