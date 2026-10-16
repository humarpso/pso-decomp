#ifndef PSO_TBOSS5GRYPHONDEMO_H
#define PSO_TBOSS5GRYPHONDEMO_H
#include "pso/TObject.h"
#include "types.h"

class TBoss5GryphonDemo : public TObject {
public:
    virtual ~TBoss5GryphonDemo();
    virtual void run_task();
    virtual void render();
public:
    void draw_model(void* a1, s32 a2);
    void set_all_entry_flags();
    void *destroy(s16 arg1);
    static void render();
};

#endif
