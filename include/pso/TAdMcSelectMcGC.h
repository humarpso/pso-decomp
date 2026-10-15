#ifndef PSO_TADMCSELECTMCGC_H
#define PSO_TADMCSELECTMCGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdMcSelectMcGC : public TObject {
public:
    virtual ~TAdMcSelectMcGC();
public:
    void draw_status_window();
    void render();
    void run_task();
};

#endif
