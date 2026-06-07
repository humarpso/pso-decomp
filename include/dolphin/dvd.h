#ifndef DOLPHIN_DVD_H
#define DOLPHIN_DVD_H

#include "types.h"

typedef struct DVDFileInfo {
    u8 pad[0x3C];
} DVDFileInfo;

BOOL DVDOpen(const char* fileName, DVDFileInfo* fileInfo);
BOOL DVDClose(DVDFileInfo* fileInfo);
s32 DVDReadPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, s32 prio);

#endif
