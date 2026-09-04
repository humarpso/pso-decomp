#ifndef PSO_MISC_RENDERFADESTATE_H
#define PSO_MISC_RENDERFADESTATE_H

#include "types.h"

struct RenderFadeState {
    s32 updateFromCamera(const f32* position);
    s32 isFading() const;
    void restore();
    void fadeOut();

    f32 adjustment;
    u8 unknown04[0x14 - 0x04];
    void* virtualTable;
    s32 restoring;
};

#include <stddef.h>
typedef char RenderFadeAdjustmentOffset[(offsetof(RenderFadeState, adjustment) == 0) ? 1 : -1];
typedef char RenderFadeVtableOffset[(offsetof(RenderFadeState, virtualTable) == 0x14) ? 1 : -1];
typedef char RenderFadeDirectionOffset[(offsetof(RenderFadeState, restoring) == 0x18) ? 1 : -1];

#endif
