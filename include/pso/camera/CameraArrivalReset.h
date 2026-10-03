#ifndef PSO_CAMERA_ARRIVAL_RESET_H
#define PSO_CAMERA_ARRIVAL_RESET_H
#include "pso/camera/FollowCameraController.h"
struct ArrivalCameraPose {
    u8 prefix[0x30];
    s32 heading;
    u8 unknown34[8];
    FollowVector position;
    FollowVector target;
};
struct ArrivalCameraActor {
    u8 prefix[0x38];
    FollowVector position;
    u8 unknown44[0x1C];
    s32 heading;
};
typedef char ArrivalPoseHeading[offsetof(ArrivalCameraPose,heading)==0x30?1:-1];
typedef char ArrivalPosePosition[offsetof(ArrivalCameraPose,position)==0x3C?1:-1];
typedef char ArrivalPoseTarget[offsetof(ArrivalCameraPose,target)==0x48?1:-1];
typedef char ArrivalActorHeading[offsetof(ArrivalCameraActor,heading)==0x60?1:-1];
extern "C" void reset_follow_camera_after_warp(ArrivalCameraPose *, const ArrivalCameraActor *);
#endif
