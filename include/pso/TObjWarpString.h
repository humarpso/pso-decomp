#ifndef PSO_TOBJWARPSTRING_H
#define PSO_TOBJWARPSTRING_H
#include "pso/TObject.h"
#include "types.h"

class TObjWarpString : public TObject {
public:
    virtual ~TObjWarpString();
    void sub_8019B77C();
    virtual void run_task();
    virtual void render();
public:
    void draw_string(s32 arg1, f32 farg0, f32 farg1);
};

#endif
