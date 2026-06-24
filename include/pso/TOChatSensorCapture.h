#ifndef PSO_TOCHATSENSORCAPTURE_H
#define PSO_TOCHATSENSORCAPTURE_H

#include "pso/TObject.h"
#include "types.h"

class TOChatSensorCapture : public TObject {
public:
    virtual ~TOChatSensorCapture();
    virtual void run_task();
};

#endif
