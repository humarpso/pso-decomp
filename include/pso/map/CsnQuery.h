#ifndef PSO_MAP_CSNQUERY_H
#define PSO_MAP_CSNQUERY_H

#include "types.h"
#include <stddef.h>

struct CsnModel;
struct CsnVector {
    f32 x, y, z;
};

struct CsnGroup {
    CsnModel* model;
    CsnVector center;
    f32 radius;
    u32 flags;
};

typedef char CsnVectorSize[sizeof(CsnVector) == 0xC ? 1 : -1];
typedef char CsnGroupSize[sizeof(CsnGroup) == 0x18 ? 1 : -1];
typedef char CsnGroupCenterOffset[offsetof(CsnGroup, center) == 4 ? 1 : -1];
typedef char CsnGroupRadiusOffset[offsetof(CsnGroup, radius) == 0x10 ? 1 : -1];
typedef char CsnGroupFlagsOffset[offsetof(CsnGroup, flags) == 0x14 ? 1 : -1];

extern "C" {
CsnGroup* select_ground_query_groups(CsnVector* origin, u32 mask);
}

#endif
