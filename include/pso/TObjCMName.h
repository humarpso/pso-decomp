#ifndef PSO_TOBJCMNAME_H
#define PSO_TOBJCMNAME_H
#include "pso/TObject.h"
#include "types.h"

class TObjCMName : public TObject {
public:
    virtual ~TObjCMName();
    virtual void run_task();
    virtual void render();
};

#endif
