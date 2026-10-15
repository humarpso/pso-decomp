#ifndef PSO_TOBJTAILSTAILSMOVE_H
#define PSO_TOBJTAILSTAILSMOVE_H

#include "pso/TObject.h"
#include "types.h"

class TObjTailsTailsMove : public TObject {
public:
    virtual ~TObjTailsTailsMove();
    virtual void run_task();
public:
    static void *create(void *arg0);
};

#endif
