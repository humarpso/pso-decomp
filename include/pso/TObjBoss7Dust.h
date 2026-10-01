#ifndef PSO_TOBJBOSS7DUST_H
#define PSO_TOBJBOSS7DUST_H
#include "pso/TObject.h"
#include "types.h"

class TObjBoss7Dust : public TObject {
public:
    virtual ~TObjBoss7Dust();
    virtual void run_task();
    virtual void render();
};

#endif
