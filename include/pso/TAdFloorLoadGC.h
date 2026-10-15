#ifndef PSO_TADFLOORLOADGC_H
#define PSO_TADFLOORLOADGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdFloorLoadGC : public TObject {
public:
    virtual ~TAdFloorLoadGC();
    virtual void run_task();
    virtual void render();
public:
    static void render();
    static void run_task();
};

#endif
