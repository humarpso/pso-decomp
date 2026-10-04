#include "musyx/runtime/musyx_runtime_b.h"

#define synthInfo_voiceNum (((u8 *)lbl_80557348)[0x210])
#define synthVoice lbl_805D73B0
#define CLAMP(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define SLOTS_803BD694 (*(Slot_803BD694 **)&lbl_805D748C)
extern "C" {

#define userCallback lbl_805D74E8
#define salAIBufferBase lbl_805D74EC
#define salDspIsDone (*(volatile u32 *)&lbl_805D74F0)
#define salLogicIsWaiting (*(volatile u32 *)&lbl_805D74F4)
#define salLogicActive (*(volatile u32 *)&lbl_805D74F8)
#define salLastTick (*(volatile u32 *)&lbl_805D74FC)
#define salAIBufferIndex lbl_805D750C
#define OSCachedToPhysical(caddr) ((u32)((u8 *)(caddr) - 0x80000000))
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
static inline void callUserCallback_803BE320(void) {
    if (salLogicActive) {
        return;
    }
    salLogicActive = 1;
    OSEnableInterrupts();

    userCallback();
    OSDisableInterrupts();

    salLogicActive = 0;
}

void TLobby__sub_803BE320(void) {
    salAIBufferIndex = (salAIBufferIndex + 1) % 4;
    AIInitDMA(OSCachedToPhysical(salAIBufferBase) + (salAIBufferIndex * 0x280), 0x280);
    salLastTick = OSGetTick();

    if (salDspIsDone) {
        callUserCallback_803BE320();
    } else {
        salLogicIsWaiting = 1;
    }
}

void TLobby__sub_803BE3C4(void) {
    lbl_805D74F0 = 1;
    lbl_805D7500 = 1;
}

void TLobby__sub_803BE3D4(void) {
    u8 _[8];

    salDspIsDone = 1;
    if (salLogicIsWaiting) {
        salLogicIsWaiting = 0;
        callUserCallback_803BE320();
    }
}

u32 TLobby__sub_803BE43C(void (*callback)(void), u32 unk, u32 *outFreq) {
    if ((salAIBufferBase = (Rec_803BE528 *)TLobby__sub_803BE7B0(0x280 * 4)) != 0) {
        memset(salAIBufferBase, 0, 0x280 * 4);
        DCFlushRange(salAIBufferBase, 0x280 * 4);
        salAIBufferIndex = 1;
        salLogicIsWaiting = 0;
        salDspIsDone = 1;
        salLogicActive = 0;
        userCallback = callback;
        AIRegisterDMACallback(TLobby__sub_803BE320);
        AIInitDMA(OSCachedToPhysical(salAIBufferBase) + (salAIBufferIndex * 0x280), 0x280);
        lbl_80557348[1] = 0x20;
        *outFreq = 32000;
        return 1;
    }

    return 0;
}
#pragma pop

void TLobby__sub_803BE508(void) {
    AIStartDMA();
}

Rec_803BE528 *TLobby__sub_803BE528(void) {
    return &lbl_805D74EC[(u8)((lbl_805D750C + 2) % 4)];
}

typedef struct DSPTaskInfo_803BE554 {
    u32 state;
    u32 priority;
    u32 flags;
    u16 *iram_mmem_addr;
    u32 iram_length;
    u32 iram_addr;
    u16 *dram_mmem_addr;
    u32 dram_length;
    u32 dram_addr;
    u16 dsp_init_vector;
    u16 dsp_resume_vector;
    void (*init_cb)(void *);
    void (*res_cb)(void *);
    void (*done_cb)(void *);
    void (*req_cb)(void *);
    DSPTaskInfo_803BE554 *next;
    DSPTaskInfo_803BE554 *prev;
    s64 t_context;
    s64 t_task;
} DSPTaskInfo_803BE554;

void DSPInit(void);
void DSPAddTask(void *);
extern u8 lbl_804F7980[];
extern u16 lbl_805D4648;

static DSPTaskInfo_803BE554 dsp_task_803BE554 __attribute__((aligned(8)));
static u16 dram_image_803BE554[4096] __attribute__((aligned(32)));

#define dsp_task dsp_task_803BE554
#define dram_image dram_image_803BE554
#define dspSlave lbl_804F7980
#define dspSlaveLength lbl_805D4648
#define salDspInitIsDone (*(volatile u32 *)&lbl_805D7500)

u32 TLobby__sub_803BE554(u32 flags) {
    dsp_task.iram_mmem_addr = (u16 *)dspSlave;
    dsp_task.iram_length = dspSlaveLength;
    dsp_task.iram_addr = 0;
    dsp_task.dram_mmem_addr = (u16 *)dram_image;
    dsp_task.dram_length = 0x2000;
    dsp_task.dram_addr = 0;
    dsp_task.dsp_init_vector = 0x10;
    dsp_task.dsp_resume_vector = 0x30;
    dsp_task.init_cb = (void (*)(void *))TLobby__sub_803BE3C4;
    dsp_task.res_cb = (void (*)(void *))TLobby__sub_803BE3D4;
    dsp_task.done_cb = 0;
    dsp_task.req_cb = 0;
    dsp_task.priority = 0;
    DSPInit();
    DSPAddTask(&dsp_task);
    salDspInitIsDone = 0;
    sound_enable_irq();
    while (!salDspInitIsDone)
        ;
    sound_disable_irq();
    return 1;
}

#undef dsp_task
#undef dram_image
#undef dspSlave
#undef dspSlaveLength
#undef salDspInitIsDone

void TLobby__sub_803BE614(s32 arg0) {
    s32 temp_r31;
    update_sound_dsp_voices((void *) (arg0), (int) (TLobby__sub_803BE688()));
    temp_r31 = lbl_805D7478;
    lbl_805D74F0 = 0;
    PPCSync();
    DSPSendMailToDSP((void *) (lbl_805D7474 | 0xBABE0000));
    do {
    } while (DSPCheckMailToDSP() != 0U);
    DSPSendMailToDSP((void *) (temp_r31));
    do {
    } while (DSPCheckMailToDSP() != 0U);
}

u32 TLobby__sub_803BE688(void) {
    return (u32)((OSGetTick() - lbl_805D74FC) * 8) / (*(u32 *)0x800000F8 / 4 / 125000);
}

#pragma push
#pragma scheduling off
void TLobby__sub_803BE6D4(void) {
    lbl_805D7508 = OSDisableInterrupts();
    lbl_805D7504 = 1;
}
#pragma pop

void sound_enable_irq(void) {
    if (--lbl_805D7504 == 0) {
        OSRestoreInterrupts(lbl_805D7508);
    }
}

void sound_disable_irq(void) {
    if (lbl_805D7504++ == 0) {
        lbl_805D7508 = OSDisableInterrupts();
    }
}

void TLobby__sub_803BE770(void) {
    OSDisableInterrupts();
}

void TLobby__sub_803BE790(void) {
    OSEnableInterrupts();
}

void (*lbl_805D74E8)(void);
Rec_803BE528 *lbl_805D74EC;
s32 lbl_805D74F0;
s32 lbl_805D74F4;
s32 lbl_805D74F8;
s32 lbl_805D74FC;
s32 lbl_805D7500;
u16 lbl_805D7504;
s32 lbl_805D7508;
u8 lbl_805D750C;

}
