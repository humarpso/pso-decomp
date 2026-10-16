#ifndef PSO_MISC_TWINDOWMESSAGELOG_H
#define PSO_MISC_TWINDOWMESSAGELOG_H

#include "types.h"
#include "pso/misc/TWindowMessage.h"

struct TWindowMessageLog : public TWindowMessage {
    virtual ~TWindowMessageLog();
    u8 unk_90[0x8];
};

typedef char TWindowMessageLog_size[sizeof(TWindowMessageLog) == 0x98 ? 1 : -1];
#endif
