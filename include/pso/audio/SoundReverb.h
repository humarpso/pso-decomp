#ifndef PSO_SOUND_REVERB_H
#define PSO_SOUND_REVERB_H
#include "types.h"

struct SoundReverbDelay {
    s32 writeOffset, readOffset, byteLength;
    f32* samples;
    f32 last;
};
struct SoundReverb {
    SoundReverbDelay allPass[9];
    SoundReverbDelay comb[9];
    f32 coloration;
    f32 feedback[9];
    f32 lowPassLast[3];
    f32 mix;
    f32 damping;
    s32 preDelayFrames;
    f32 crossTalk;
    f32* preDelay[3];
    f32* preDelayCurrent[3];
    u8 disabled;
    f32 parameterColoration;
    f32 parameterMix;
    f32 parameterTime;
    f32 parameterDamping;
    f32 parameterPreDelay;
    f32 parameterCrossTalk;
};
#endif
