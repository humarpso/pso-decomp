#ifndef PSO_CAMERA_FOLLOW_CAMERA_CONTROLLER_H
#define PSO_CAMERA_FOLLOW_CAMERA_CONTROLLER_H
#include "types.h"
#include <stddef.h>

struct FollowVector { f32 x, y, z; };
struct FollowActor {
    u8 prefix[0x38];
    FollowVector position;
};
struct FollowController {
    u8 prefix[0x1C];
    FollowActor *actor;
    u8 unknown20[0xBC];
    FollowVector position_offset;
};
struct FollowView {
    u8 prefix[0xD4];
    FollowVector split_positions[4];
    u8 unknown104[0x74];
    FollowVector position, target;
};
typedef char FollowActorPositionOffset[offsetof(FollowActor, position) == 0x38 ? 1 : -1];
typedef char FollowControllerActorOffset[offsetof(FollowController, actor) == 0x1C ? 1 : -1];
typedef char FollowControllerPositionOffset[offsetof(FollowController, position_offset) == 0xDC ? 1 : -1];
typedef char FollowViewSplitOffset[offsetof(FollowView, split_positions) == 0xD4 ? 1 : -1];
typedef char FollowViewPositionOffset[offsetof(FollowView, position) == 0x178 ? 1 : -1];
typedef char FollowViewTargetOffset[offsetof(FollowView, target) == 0x184 ? 1 : -1];

extern "C" s32 conversation_camera_obstructed(FollowController *, s32 heading);
#endif
