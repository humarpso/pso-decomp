#ifndef PSO_TADBACKTXTGC_H
#define PSO_TADBACKTXTGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdBackTxtGC : public TObject {
public:
    virtual ~TAdBackTxtGC();
    void draw_character_background_frame(s32, s32);
    virtual void render();
    virtual void run_task();
};

#endif
