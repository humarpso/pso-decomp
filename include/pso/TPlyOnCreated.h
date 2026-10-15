#ifndef PSO_TPLYONCREATED_H
#define PSO_TPLYONCREATED_H
#include "pso/TObject.h"
#include "types.h"

class TPlyOnCreated : public TObject {
public:
    virtual ~TPlyOnCreated();
    virtual void run_task();
public:
    static void *create(void *arg0, void *arg1);
};

#endif
