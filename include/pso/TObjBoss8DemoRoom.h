#ifndef PSO_TOBJBOSS8DEMOROOM_H
#define PSO_TOBJBOSS8DEMOROOM_H
#include "pso/TObject.h"
#include "types.h"

class TObjBoss8DemoRoom : public TObject {
public:
    virtual ~TObjBoss8DemoRoom();
    virtual void run_task();
    virtual void render();
};

#endif
