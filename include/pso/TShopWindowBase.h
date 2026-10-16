#ifndef PSO_TSHOPWINDOWBASE_H
#define PSO_TSHOPWINDOWBASE_H
#include "pso/TObject.h"
#include "types.h"

class TShopWindowBase : public TObject {
public:
    virtual ~TShopWindowBase();
    virtual void run_task();
public:
    static f32 get_scale();
    s32 get_child_field1c();
};

#endif
