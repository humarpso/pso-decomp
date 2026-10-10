#ifndef PSO_ANIMATION_ACTOR_ANIMATION_STATE_H
#define PSO_ANIMATION_ACTOR_ANIMATION_STATE_H

#include "types.h"

struct AnimationAction {
    s16 mode;
    s16 nextAction;
    s32 motionIndex;
    f32 speed;
    u32 flags;
};

struct AnimationMotion {
    u8 unknown0[4];
    u32 frameCount;
};

struct ActorAnimationState {
    u8 unknown0[0xB0];
    u32 flags;
    u32 actionFlags;
    s16 requestedAction;
    s16 currentAction;
    s16 previousAction;
    u8 unknownBE[2];
    f32 frame;
    f32 frameCount;
    f32 speed;
    f32 blendSpeed;
    f32 overrideSpeed;
    f32 overrideBlendSpeed;
    AnimationAction *actions;
    u8 unknownDC[8];
    AnimationMotion *blendSource;
    AnimationMotion *blendTarget;
    f32 sourceFrame;
    f32 targetFrame;
    s16 mode;
    s16 nextMode;
    AnimationMotion *motion;
};

#endif
