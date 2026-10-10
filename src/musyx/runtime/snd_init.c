#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
#define macTimeQueueRoot ((SYNTH_VOICE_803B19AC *)lbl_805D7420)
#define macActiveMacroRoot ((SYNTH_VOICE_803B19AC *)lbl_805D741C)
#define macRealTime lbl_805D7428
#define FLAGS (*(u64 *)&o->fh)
#define HEAD (*(Voice_803B2128 **)&lbl_805D741C)
#define synthVoice ((SYNTH_VOICE_803B2438 *)synthVoice)
#define vidCurrentId (*(u32 *)&lbl_805D7438)
#define vidRoot (*(VID_LIST_SV **)&lbl_805D743C)
#define vidFree (*(VID_LIST_SV **)&lbl_805D7440)
#define salNumVoices lbl_805D74C5
#define salMaxStudioNum lbl_805D74C4
#define dspARAMZeroBuffer lbl_805D7458
#define dspCmdList lbl_805D7478
#define dspSurround lbl_805D7484
#define dspVoice lbl_805D748C
#define dspITDBuffer lbl_805D7488
#define dspHrtfHistoryBuffer (*(void **)&lbl_805D7480)
#define s3dCallCnt (*(u8 *)&lbl_805D7498)
#define s3dEmitterRoot (*(Emitter_S3D **)&lbl_805D749C)
#define s3dListenerRoot (*(Listener_S3D **)&lbl_805D74A0)
#define s3dRoomRoot (*(Room_S3D **)&lbl_805D74A4)
#define s3dDoorRoot (*(Door_S3D **)&lbl_805D74A8)
#define snd_used_studios (*(u32 *)&lbl_805D74AC)
#define snd_base_studio (*(u8 *)&lbl_805D74B0)
#define snd_max_studios (*(u8 *)&lbl_805D74B1)
#define s3dUseMaxVoices (*(u8 *)&lbl_805D74B2)
#define startGroup startGroup_S3D
#define startListNum startListNum_S3D
#define runList runList_S3D
#define startGroupNum lbl_805D74B3
#define startListNumnum lbl_805D74B4
#define runListNum lbl_805D74B5
extern "C" {

#define synthInfo (*(SynthInfo_803BAB54 *)&synthInfo)
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
static inline s32 DoInit_803BAB54(u32 mixFrq, u32 aramSize, u32 numVoices, u32 flags) {
    u32 ret;
    ret = 0;
    dataInitStack();
    dataInit(0, (void *)aramSize);
    seqInit();
    synthIdleWaitActive = 0;
    synthInit(mixFrq, numVoices);
    streamInit();
    vsInit();
    s3dInit(flags);
    sndActive = 1;
    return ret;
}
s32 sndInit(u8 voices, u8 music, u8 sfx, u8 studios, u32 flags, u32 aramSize) {
    s32 ret;
    u32 frq;
    ret = 0;
    sndActive = 0;
    if (voices <= 64) {
        synthInfo.voiceNum = voices;
    } else {
        synthInfo.voiceNum = 64;
    }
    if (studios <= 8) {
        synthInfo.studioNum = studios;
    } else {
        synthInfo.studioNum = 8;
    }
    synthInfo.maxMusic = music;
    synthInfo.maxSFX = sfx;
    frq = 32000;
    if ((ret = hwInit(&frq, synthInfo.voiceNum, synthInfo.studioNum, flags)) == 0) {
        ret = DoInit_803BAB54(32000, aramSize, synthInfo.voiceNum, flags);
    }
    return ret;
}
#pragma pop

}
