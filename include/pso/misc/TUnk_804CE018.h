#ifndef PSO_MISC_TUNK_804CE018_H
#define PSO_MISC_TUNK_804CE018_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CE018 : public TObject {
public:
    virtual ~TUnk_804CE018();
    f32 get_scale();
    u8 sub_80246948();
    s32 get_array_entry(int);
    virtual void render();
    virtual void run_task();
};

#endif
