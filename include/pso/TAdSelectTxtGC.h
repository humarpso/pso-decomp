#ifndef PSO_TADSELECTTXTGC_H
#define PSO_TADSELECTTXTGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdSelectTxtGC : public TObject {
public:
    virtual ~TAdSelectTxtGC();
    void init_slot_entries(void *, void *);
    virtual void run_task();
    virtual void render();
public:
    void reset_state();
    static void render();
};

#endif
