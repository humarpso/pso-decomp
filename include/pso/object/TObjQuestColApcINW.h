#ifndef PSO_OBJECT_TOBJQUESTCOLAPCINW_H
#define PSO_OBJECT_TOBJQUESTCOLAPCINW_H

#include "types.h"
#include "pso/object/TObjQuestColBase.h"

struct TObjQuestColApcINW : public TObjQuestColBase {
    virtual ~TObjQuestColApcINW();
    u8 unk_BC[0x4];
    void* m_c0;
    u8 unk_C4[0x8];
};

typedef char TObjQuestColApcINW_size[sizeof(TObjQuestColApcINW) == 0xCC ? 1 : -1];
#endif
