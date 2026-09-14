#ifndef PSO_OBJECT_TOBJMAPWARPFOREST_H
#define PSO_OBJECT_TOBJMAPWARPFOREST_H
#include "types.h"
struct ForestWarpMotion { u32 data,frameCount; };
struct TObjMapWarpForest {
    u8 base[0xFC];
    f32 frame;
    void* baseModel;
    void* beamModel;
    ForestWarpMotion* motion;
    void* textures;
    void run_task();
};
typedef char ForestWarpSize[sizeof(TObjMapWarpForest)==0x110?1:-1];
#endif
