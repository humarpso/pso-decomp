#ifndef PSO_TADMULTIOKGC_H
#define PSO_TADMULTIOKGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdMultiOkGC : public TObject {
public:
    virtual ~TAdMultiOkGC();
    virtual void run_task();
    virtual void render();
public:
    void draw_entry(int arg1);
    void update_entry_animation(int arg1);
    void handle_player_buttons(int arg1);
};

#endif
