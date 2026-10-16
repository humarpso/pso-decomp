#ifndef PSO_UNK_TOBJNPCBRINGER_H
#define PSO_UNK_TOBJNPCBRINGER_H
#include "types.h"
#include "pso/npc/TObjNpcBase.h"

class TObjNpcBringer : public TObjNpcBase {
public:
    virtual ~TObjNpcBringer();
};
typedef char TObjNpcBringer_size[sizeof(TObjNpcBringer) == 0x3B8 ? 1 : -1];

#endif
