#ifndef PSO_TPLAYERFOOTSTAMP_H
#define PSO_TPLAYERFOOTSTAMP_H
#include "pso/TObject.h"
#include "types.h"

class TPlayerFootStamp : public TObject {
public:
    virtual ~TPlayerFootStamp();
public:
    static void *create(void *arg0, void *arg1);
    static void free_instance();
    void render();
    void run_task();
};

#endif
