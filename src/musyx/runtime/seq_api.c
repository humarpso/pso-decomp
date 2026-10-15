#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

void sndSeqSpeed(s32 arg0, s16 arg1) {
    hwDisableIrq();
    seqSpeed(arg0, arg1);
    hwEnableIrq();
}

void sndSeqContinue(s32 arg0) {
    hwDisableIrq();
    seqContinue((s32)(arg0));
    hwEnableIrq();
}

void sndSeqMute(s32 arg0, s32 arg1, s32 arg2) {
    hwDisableIrq();
    seqMute(arg0, arg1, arg2);
    hwEnableIrq();
}

void sndSeqVolume(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    hwDisableIrq();
    seqVolume(arg0, arg1, arg2, arg3);
    hwEnableIrq();
}
u16 seqGetMIDIPriority(u8 arg0, u8 arg1) {
    extern RecoveredGlobal_803AA0C0_lbl_80556E88 lbl_80556E88;
    return *(u16 *)((s8 *)((u8 *)(((u8 *)(&lbl_80556E88.value) + ((arg0 << 5) & 0x1FE0))) + ((arg1 * 2) & 0x1FE)) + 0);
}

}
