#ifndef PSO_TOBJCMNAME_H
#define PSO_TOBJCMNAME_H
#include "pso/TObject.h"
#include "pso/misc/CharacterAppearance.h"
#include "types.h"

struct TKeyBoardControl;

class TObjCMName : public TObject {
public:
    CharacterAppearanceFields *appearance;
    s32 opened;
    TKeyBoardControl *keyboard;
    s32 ticks;
    s32 active;
    f32 fade;
    virtual ~TObjCMName();
    virtual void run_task();
    virtual void render();
};

#endif
