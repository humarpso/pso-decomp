#ifndef PSO_OBJECT_TOBJLIVECAMERA_H
#define PSO_OBJECT_TOBJLIVECAMERA_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjLiveCamera : public TUnk_804B9870 {
    virtual ~TObjLiveCamera();
};

typedef char TObjLiveCamera_size[sizeof(TObjLiveCamera) == 0x90 ? 1 : -1];
#endif
