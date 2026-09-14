#ifndef PSO_OBJECT_TOBJCMAUTOMKDATA_H
#define PSO_OBJECT_TOBJCMAUTOMKDATA_H
#include "pso/TObject.h"
#include "pso/misc/CharacterAppearance.h"
class TObjCMAutoMkData : public TObject {
public:
    CharacterAppearanceFields* appearance;
    s32 state,ticks;
    s16 red,green,blue,padding;
    f32 width,height,fade;
    virtual ~TObjCMAutoMkData();
    virtual void run_task();
    virtual void render();
};
#endif
