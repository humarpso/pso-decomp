#ifndef PSO_TADCHRSELMOVEPLATEGC_H
#define PSO_TADCHRSELMOVEPLATEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdChrSelMovePlateGC : public TObject {
public:
    virtual ~TAdChrSelMovePlateGC();
    virtual void run_task();
    virtual void render();
public:
    void clear_entries();
    void init_plate_rects();
};

#endif
