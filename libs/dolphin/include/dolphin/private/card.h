#ifndef CARD_H
#define CARD_H

#include "types.h"
#include "dolphin/card.h"
#include "dolphin/dvd.h"
#include "dolphin/os/OSAlarm.h"
#include "dolphin/os/OSThread.h"
#include "dolphin/dsp.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CARDDir {
    u8 gameName[4];
    u8 company[2];
    u8 _padding0;
    u8 bannerFormat;
    u8 fileName[CARD_FILENAME_MAX];
    u32 time;
    u32 iconAddr;
    u16 iconFormat;
    u16 iconSpeed;
    u8 permission;
    u8 copyTimes;
    u16 startBlock;
    u16 length;
    u8 _padding1[2];
    u32 commentAddr;
} CARDDir;

s32 __CARDGetStatusEx(s32 chan, s32 fileNo, CARDDir* dirent);
s32 __CARDSetStatusExAsync(s32 chan, s32 fileNo, CARDDir* dirent, CARDCallback callback);
s32 __CARDSetStatusEx(s32 chan, s32 fileNo, CARDDir* dirent);

#ifdef __cplusplus
}
#endif

#endif
