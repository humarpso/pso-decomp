#ifndef PSO_MISC_TWINDOWMESSAGEINFOMATION_H
#define PSO_MISC_TWINDOWMESSAGEINFOMATION_H

#include "types.h"
#include "pso/misc/TWindowMessage.h"

struct TWindowMessageInfomation : public TWindowMessage {
    virtual ~TWindowMessageInfomation();
    void render();};

typedef char TWindowMessageInfomation_size[sizeof(TWindowMessageInfomation) == 0x90 ? 1 : -1];
#endif
