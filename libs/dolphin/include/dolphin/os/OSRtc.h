#ifndef DOLPHIN_OSRTC_H
#define DOLPHIN_OSRTC_H

#include <dolphin/types.h>
#include <dolphin/exi.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OS_SOUND_MODE_MONO 0
#define OS_SOUND_MODE_STEREO 1

#define OS_PROGRESSIVE_MODE_OFF 0
#define OS_PROGRESSIVE_MODE_ON 1

#define OS_BOOT_MODE_DEBUG  (0 << 7)
#define OS_BOOT_MODE_RETAIL (1 << 7)

#define RTC_CMD_READ 0x20000000
#define RTC_CMD_WRITE 0xA0000000

#define RTC_SRAM_ADDR 0x00000100
#define OS_EURGB60_OFF 0
#define OS_EURGB60_ON 1

#define OS_VIDEO_MODE_NTSC 0
#define OS_VIDEO_MODE_PAL 1
#define OS_VIDEO_MODE_MPAL 2

#define RTC_SRAM_SIZE 64
#define SRAM_SIZE RTC_SRAM_SIZE

#define RTC_CHAN EXI_CHAN_0
#define RTC_DEVICE 1
#define RTC_FREQUENCY 3

typedef struct OSSram {
  u16 checkSum;
  u16 checkSumInv;
  u32 ead0;
  u32 ead1;
  u32 counterBias;
  s8 displayOffsetH;
  u8 ntd;
  u8 language;
  u8 flags;
} OSSram;

typedef struct OSSramEx {
  u8 flashID[2][12];
  u32 wirelessKeyboardID;
  u16 wirelessPadID[4];
  u8 dvdErrorCode;
  u8 pad0;
  u8 flashIDCheckSum[2];
  u16 gbs;
  u8 pad1[2];
} OSSramEx;

typedef struct SramControlBlock {
  u8 sram[RTC_SRAM_SIZE];
  u32 offset;
  BOOL enabled;
  BOOL locked;
  BOOL sync;
  void (*callback)(void);
} SramControlBlock;

typedef SramControlBlock SramControl;

static inline BOOL ReadSram(void* buffer);
static void WriteSramCallback(s32 chan, OSContext* ctx);
static BOOL WriteSram(void* buffer, u32 offset, u32 size);
extern void __OSInitSram();
static inline void* LockSram(u32 offset);
extern OSSram* __OSLockSram();
extern OSSramEx* __OSLockSramEx();
static BOOL UnlockSram(BOOL commit, u32 offset);
extern BOOL __OSSyncSram();
extern u32 OSGetSoundMode();
extern void OSSetSoundMode(u32 mode);
extern u32 OSGetProgressiveMode();
extern void OSSetProgressiveMode(u32 on);
extern void __OSSetBootMode(u8 mode);
extern u16 OSGetGbsMode(void);
extern void OSSetGbsMode(u16 mode);
extern u16 OSGetWirelessID(s32 chan);
extern void OSSetWirelessID(s32 chan, u16 id);

#define GET_SOUNDMODE(flags) ((flags) & (1 << 2))
#define CLR_SOUNDMODE(flags) ((flags) & (~(1 << 2)))
#define SET_SOUNDMODE(mode) (((mode) & 1) << 2)

#define GET_PROGMODE(flags) ((flags) & (1 << 7))
#define CLR_PROGMODE(flags) ((flags) & (~(1 << 7)))
#define SET_PROGMODE(mode) (((mode) & 1) << 7)

#define GET_BOOTMODE(flags) ((flags) & (1 << 7))
#define CLR_BOOTMODE(flags) ((flags) & (~(1 << 7)))
#define SET_BOOTMODE(mode) (mode)

#ifdef __cplusplus
}
#endif

#endif
