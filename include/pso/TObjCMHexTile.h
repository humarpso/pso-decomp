#ifndef PSO_TOBJCMHEXTILE_H
#define PSO_TOBJCMHEXTILE_H
#include "pso/TObject.h"
#include "types.h"

class TObjCMHexTile : public TObject {
public:
    virtual ~TObjCMHexTile();
    virtual void render();
    virtual void run_task();
};

#endif
