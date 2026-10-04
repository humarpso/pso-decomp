#include "musyx/runtime/musyx_runtime_b.h"

#define synthInfo_voiceNum (((u8 *)lbl_80557348)[0x210])
#define synthVoice lbl_805D73B0
#define CLAMP(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define SLOTS_803BD694 (*(Slot_803BD694 **)&lbl_805D748C)
#define OSCachedToPhysical(caddr) ((u32)((u8 *)(caddr) - 0x80000000))
extern "C" {

#pragma push
#pragma dont_inline off
static void DLsetdelay(SoundReverbDelay * dl, s32 lag) {
    dl->readOffset = dl->writeOffset - (lag * 4);
    while (dl->readOffset < 0) {
        dl->readOffset += dl->byteLength;
    }
}

static void DLcreate(SoundReverbDelay * dl, s32 max_byteLength) {
    dl->byteLength = (max_byteLength * 4);
    dl->samples = TLobby__sub_803BE7B0( max_byteLength << 2);
    memset(dl->samples, 0, max_byteLength << 2);
    dl->last = 0.0f;
    DLsetdelay(dl, max_byteLength >> 1);
    dl->writeOffset = 0;
    dl->readOffset = 0;
}

s32 create_sound_reverb_state(SoundReverb * rv, float coloration, float time, float mix, float damping, float preDelay, float crossTalk) {
    u8 i;
    u8 k;
    extern s32 lbl_804F9360[];

    if ((coloration < 0.0f ) || (coloration > 1.0f )
     || (time       < 0.01f) || (time       > 10.0f)
     || (mix        < 0.0f ) || (mix        > 1.0f )
     || (crossTalk  < 0.0f ) || (crossTalk  > 1.0f )
     || (damping    < 0.0f ) || (damping    > 1.0f )
     || (preDelay   < 0.0f ) || (preDelay   > 0.1f )) {
        return 0;
    }
    memset(rv, 0, 0x1C4);
    for(k = 0; k < 3; k++) {
        for(i = 0; i < 3; i++) {
            DLcreate(&rv->comb[i + (k * 3)], lbl_804F9360[i] + 2);
            DLsetdelay(&rv->comb[i + (k * 3)], lbl_804F9360[i]);
            rv->feedback[i + (k * 3)] = powf(10.0f, (lbl_804F9360[i] * -3) / (32000.0f * time));
        }
        for(i = 0; i < 2; i++) {
            DLcreate(&rv->allPass[i + (k * 3)], lbl_804F9360[i + 3] + 2);
            DLsetdelay(&rv->allPass[i + (k * 3)], lbl_804F9360[i + 3]);
        }
        DLcreate(&rv->allPass[2 + (k * 3)], lbl_804F9360[k + 5] + 2);
        DLsetdelay(&rv->allPass[2 + (k * 3)], lbl_804F9360[k + 5]);
        rv->lowPassLast[k] = 0.0f;
    }
    rv->coloration = coloration;
    rv->mix = mix;
    rv->crossTalk = crossTalk;
    rv->damping = damping;
    if (rv->damping < 0.05f) {
        rv->damping = 0.05f;
    }
    rv->damping = (1.0f - (0.05f + (0.8f * rv->damping)));
    if (0.0f != preDelay) {
        rv->preDelayFrames = (32000.0f * preDelay);
        for(i = 0; i < 3; i++) {
            rv->preDelay[i] = TLobby__sub_803BE7B0( rv->preDelayFrames * 4);
            memset(rv->preDelay[i], 0, rv->preDelayFrames * 4);
            rv->preDelayCurrent[i] = rv->preDelay[i];
        }
    } else {
        rv->preDelayFrames = 0;
        for(i = 0; i < 3; i++) {
            rv->preDelayCurrent[i] = 0;
            rv->preDelay[i] = 0;
        }
    }
    return 1;
}

#pragma pop
#pragma push
#pragma peephole off
void process_sound_reverb_callback(void *arg0, void *arg1, void *arg2, S_803BF408 *arg3) {
    u8 i;
    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            if (0.0f != arg3->f1A8) {
                f32 t = 0.5f * arg3->f1A8;
                TLobby__sub_803BED6C(arg0, arg1, t, 1.0f - t);
            }
            process_sound_reverb_block(arg0, arg3, 0);
            break;
        case 1:
            process_sound_reverb_block(arg1, arg3, 1);
            break;
        case 2:
            process_sound_reverb_block(arg2, arg3, 2);
            break;
        }
    }
}
#pragma pop

}
