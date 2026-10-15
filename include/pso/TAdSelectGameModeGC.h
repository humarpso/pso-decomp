#ifndef PSO_TADSELECTGAMEMODEGC_H
#define PSO_TADSELECTGAMEMODEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdSelectGameModeGC : public TObject {
public:
    virtual ~TAdSelectGameModeGC();
public:
    static int get_mode_data();
    static void enable_camera();
    void free_sub_ctrls();
    static void render();
    static int call_enable_camera(void* p);
};

#endif
