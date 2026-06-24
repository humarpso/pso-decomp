#ifndef PSO_TOBJDFRECBALL_H
#define PSO_TOBJDFRECBALL_H

#include "pso/TObject.h"
#include "types.h"

class TObjDFRecBall : public TObject {
public:
    u8 _pad1C[0x28];
 void* m_44;
public:
    virtual ~TObjDFRecBall();
    virtual void run_task();
};

#endif
