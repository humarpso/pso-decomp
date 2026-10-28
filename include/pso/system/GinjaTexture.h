#ifndef PSO_SYSTEM_GINJATEXTURE_H
#define PSO_SYSTEM_GINJATEXTURE_H

#include "pso/system/GinjaMaterialState.h"

extern "C" {
// Releases every loaded texture in `texlist`; -1 if one failed, else 1.
s32 release_texture_list(GinjaTextureList *texlist);
}

#endif
