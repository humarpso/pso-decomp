#ifndef PSO_MISC_TWINDOWMESSAGEQUEST_H
#define PSO_MISC_TWINDOWMESSAGEQUEST_H

#include "types.h"
#include "pso/misc/TWindowMessage.h"

struct TWindowMessageQuest : public TWindowMessage {
    virtual ~TWindowMessageQuest();
    u8 unk_90[0x4];
};

typedef char TWindowMessageQuest_size[sizeof(TWindowMessageQuest) == 0x94 ? 1 : -1];
#endif
