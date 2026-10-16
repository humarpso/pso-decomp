#ifndef PSO_MISC_TOCONTAINERANCIENTITEMCOMMON_H
#define PSO_MISC_TOCONTAINERANCIENTITEMCOMMON_H

#include "types.h"
#include "pso/player/TUnk_804B08BC.h"

struct TOContainerAncientItemCommon : public TUnk_804B08BC {
    virtual ~TOContainerAncientItemCommon();
    s32 create();};

typedef char TOContainerAncientItemCommon_size[sizeof(TOContainerAncientItemCommon) == 0x368 ? 1 : -1];
#endif
