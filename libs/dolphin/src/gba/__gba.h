#ifndef _DOLPHIN_GBA_PRIV_H_
#define _DOLPHIN_GBA_PRIV_H_

#include <dolphin.h>
#include <dolphin/os.h>
#include <dolphin/dsp.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GBA_CHAN0 0
#define GBA_CHAN1 1
#define GBA_CHAN2 2
#define GBA_CHAN3 3
#define GBA_MAX_CHAN 4

#define GBA_JSTAT_MASK 0x3A
#define GBA_JSTAT_FLAGS_SHIFT 4
#define GBA_JSTAT_FLAGS_MASK 0x30
#define GBA_JSTAT_PSF1 0x20
#define GBA_JSTAT_PSF0 0x10
#define GBA_JSTAT_SEND 0x08
#define GBA_JSTAT_RECV 0x02

#define GBA_READY 0
#define GBA_NOT_READY 1
#define GBA_BUSY 2
#define GBA_JOYBOOT_UNKNOWN_STATE 3
#define GBA_JOYBOOT_ERR_INVALID 4

#define GBA_JOYBOOT_PROGRAM_SIZE_MAX 0x40000

typedef void (*GBACallback)(s32 chan, s32 ret);
typedef void (*GBATransferCallback)(s32 chan);

void GBAInit(void);
s32 GBAGetStatus(s32 chan, u8* status);
s32 GBAGetStatusAsync(s32 chan, u8* status, GBACallback callback);
s32 GBAReset(s32 chan, u8* status);
s32 GBAResetAsync(s32 chan, u8* status, GBACallback callback);
s32 GBAGetProcessStatus(s32 chan, u8* percentp);
s32 GBARead(s32 chan, u8* dst, u8* status);
s32 GBAReadAsync(s32 chan, u8* dst, u8* status, GBACallback callback);
s32 GBAWrite(s32 chan, u8* src, u8* status);
s32 GBAWriteAsync(s32 chan, u8* src, u8* status, GBACallback callback);
s32 GBAJoyBoot(s32 chan, s32 palette_color, s32 palette_speed, u8* programp, s32 length, u8* status);
s32 GBAJoyBootAsync(s32 chan, s32 palette_color, s32 palette_speed, u8* programp, s32 length, u8* status,
                    GBACallback callback);

typedef struct GBASecParam {
    u8 readbuf[4];
    s32 paletteColor;
    s32 paletteSpeed;
    s32 length;
    u32* out;
    u8 _padding0[12];
    u32 keyA;
    s32 keyB;
    u8 _padding1[24];
} GBASecParam;

typedef struct GBABootInfo {
    s32 paletteColor;
    s32 paletteSpeed;
    u8* programp;
    s32 length;
    u8* status;
    GBACallback callback;
    u8 readbuf[4];
    u8 writebuf[4];
    int i;
    OSTick start;
    OSTime begin;
    BOOL firstXfer;
    int curOffset;
    u32 crc;
    u32 dummyWord[7];
    u32 keyA;
    s32 keyB;
    u32 initialCode;
    int realLength;
} GBABootInfo;

typedef struct GBAControl {
    u8 output[5];
    u8 input[5];
    u32 outputBytes;
    u32 inputBytes;
    u8* status;
    void* ptr;
    GBACallback callback;
    s32 ret;
    OSThreadQueue threadQueue;
    OSTime delay;
    GBATransferCallback proc;
    GBABootInfo bootInfo;
    DSPTaskInfo task;
    GBASecParam* param;
} GBAControl;

extern GBAControl __GBA[4];
extern BOOL __GBAReset;

void __GBASyncCallback(s32 chan, s32 ret);
s32 __GBASync(s32 chan);
OSTime __GBASetDelay(s32 chan, OSTime delay);
s32 __GBATransfer(s32 chan, u32 outputBytes, u32 inputBytes, GBATransferCallback proc);
void __GBAX01(s32 chan, s32 ret);
void __GBAX02(s32 chan, u8* readbuf);

#ifdef __cplusplus
}
#endif

#endif
