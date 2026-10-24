#ifndef PSO_TOBJCMNAME_H
#define PSO_TOBJCMNAME_H
#include "pso/TObject.h"
#include "types.h"
#include "pso/TMath.h"

extern "C" vec2f creation_name_panel_position[];

struct CharacterAppearanceFields;

class TObjCMName : public TObject {
public:
    CharacterAppearanceFields *appearance;
    s32 initialized;
    void *keyboard;
    s32 ticks;
    s32 active;
    f32 fade;
    virtual ~TObjCMName();
    virtual void run_task();
    virtual void render();
};

typedef char TObjCMNameSize[sizeof(TObjCMName) == 0x34 ? 1 : -1];
typedef char TObjCMNameFadeOffset[offsetof(TObjCMName, fade) == 0x30 ? 1 : -1];

#endif
