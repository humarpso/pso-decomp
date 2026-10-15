#ifndef PSO_TOBJBOSS8PILLER_H
#define PSO_TOBJBOSS8PILLER_H
#include "pso/TObject.h"
#include "types.h"

class TObjBoss8Piller : public TObject {
public:
    virtual ~TObjBoss8Piller();
    virtual void run_task();
    virtual void render();
public:
    static void free_held_object();
    static void load_resource_descriptor();
};

#endif
