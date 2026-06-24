#ifndef PSO_TOCHATSENSORCAPTURE_H
#define PSO_TOCHATSENSORCAPTURE_H

#include "pso/TObject.h"
#include "types.h"

class TOChatSensorCapture : public TObject {
public:
 u8 _pad1c[0x10];
 void* m_arr[4];

public:
    virtual ~TOChatSensorCapture();
    virtual void run_task();
};

#endif
