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
#pragma peephole off
void sndAuxCallbackChorus(u8 reason, Info_803BF884 *info, Work_803BF884 *c) {
    s32 *leftD;
    s32 *rightD;
    s32 *surD;
    s32 *leftS;
    s32 *rightS;
    s32 *surS;
    u32 i;
    u8 nextCurrentLast;
    switch (reason) {
    case 0:
        nextCurrentLast = (c->currentLast + 1) % 3;
        leftD = c->lastLeft[nextCurrentLast];
        rightD = c->lastRight[nextCurrentLast];
        surD = c->lastSur[nextCurrentLast];
        leftS = info->left;
        rightS = info->right;
        surS = info->surround;
        for (i = 0; i < 160; i++) {
            *leftD++ = *leftS++;
            *rightD++ = *rightS++;
            *surD++ = *surS++;
        }
        c->src.pitchHi = (c->pitchOffset >> 16) + 1;
        c->src.pitchLo = (c->pitchOffset & 0xFFFF) << 16;
        if (--c->pitchOffsetPeriodCount == 0) {
            c->pitchOffsetPeriodCount = c->pitchOffsetPeriod;
            c->pitchOffset = -c->pitchOffset;
        }
        for (i = 0; i < 3; i++) {
            c->src.posHi = c->currentPosHi;
            c->src.posLo = c->currentPosLo;
            switch (i) {
            case 0:
                c->src.smpBase = c->lastLeft[0];
                c->src.dest = info->left;
                c->src.old = c->oldLeft;
                break;
            case 1:
                c->src.smpBase = c->lastRight[0];
                c->src.dest = info->right;
                c->src.old = c->oldRight;
                break;
            case 2:
                c->src.smpBase = c->lastSur[0];
                c->src.dest = info->surround;
                c->src.old = c->oldSur;
                break;
            }
            switch (c->src.pitchHi) {
            case 0:
                do_src1(&c->src);
                break;
            case 1:
                do_src2(&c->src);
                break;
            }
        }
        c->currentPosHi = c->src.posHi % 480;
        c->currentPosLo = c->src.posLo;
        c->currentLast = nextCurrentLast;
        break;
    case 1:
        break;
    }
}
#pragma pop

#pragma push
#pragma peephole off
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on

static inline u32 sndAuxCallbackUpdateSettingsChorus_803BFBF0(AuxChorus_803BFBF0 *ch) {
    ch->work.currentPosHi = 0x140 - ((ch->baseDelay - 5) << 5);
    ch->work.currentPosLo = 0;
    ch->work.currentPosHi = (ch->work.currentPosHi + (ch->work.currentLast - 1) * 0xa0) % 0x1e0;
    ch->work.pitchOffsetPeriod = ((ch->period / 5) + 1) & ~1;
    ch->work.pitchOffsetPeriodCount = (u32)ch->work.pitchOffsetPeriod >> 1;
    ch->work.pitchOffset = (ch->variation << 16) / (ch->work.pitchOffsetPeriod * 5);
    return 1;
}

u32 sndAuxCallbackPrepareChorus(AuxChorus_803BFBF0 *chorus) {
    u32 i;
    s32 *lastLeft;
    s32 *lastRight;
    s32 *lastSur;

    chorus->work.lastLeft[0] = (s32 *)salMalloc(0x1680);

    if (chorus->work.lastLeft[0] != 0) {
        chorus->work.lastRight[0] = chorus->work.lastLeft[0] + 0x1e0;
        chorus->work.lastSur[0] = chorus->work.lastRight[0] + 0x1e0;

        for (i = 1; i < 3; ++i) {
            chorus->work.lastLeft[i] = chorus->work.lastLeft[0] + i * 0xa0;
            chorus->work.lastRight[i] = chorus->work.lastRight[0] + i * 0xa0;
            chorus->work.lastSur[i] = chorus->work.lastSur[0] + i * 0xa0;
        }

        lastLeft = chorus->work.lastLeft[0];
        lastRight = chorus->work.lastRight[0];
        lastSur = chorus->work.lastSur[0];
        for (i = 0; i < 0x140; i += 1) {
            *lastLeft++ = 0;
            *lastRight++ = 0;
            *lastSur++ = 0;
        }

        chorus->work.currentLast = 1;
        chorus->work.oldLeft[0] = chorus->work.oldLeft[1] = chorus->work.oldLeft[2] = chorus->work.oldLeft[3] = 0;
        chorus->work.oldRight[0] = chorus->work.oldRight[1] = chorus->work.oldRight[2] = chorus->work.oldRight[3] = 0;
        chorus->work.oldSur[0] = chorus->work.oldSur[1] = chorus->work.oldSur[2] = chorus->work.oldSur[3] = 0;
        chorus->work.src.trigger = 480;
        chorus->work.src.target = 0;
        return sndAuxCallbackUpdateSettingsChorus_803BFBF0(chorus);
    }
    return 0;
}
#pragma pop

}
