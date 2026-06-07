#ifndef DOLPHIN_DVD_H
#define DOLPHIN_DVD_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DVDCommandBlock DVDCommandBlock;
typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock* block);

struct DVDCommandBlock {
    DVDCommandBlock* next;
    DVDCommandBlock* prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void* addr;
    u32 currTransferSize;
    u32 transferredSize;
    void* id;
    DVDCBCallback callback;
    void* userData;
};

typedef struct DVDFileInfo {
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    DVDCBCallback callback;
} DVDFileInfo;

typedef struct DVDDir {
    u32 entryNum;
    u32 location;
    u32 next;
} DVDDir;

typedef struct DVDDirEntry {
    u32 entryNum;
    BOOL isDir;
    char* name;
} DVDDirEntry;

BOOL DVDOpen(const char* fileName, DVDFileInfo* fileInfo);
BOOL DVDClose(DVDFileInfo* fileInfo);
s32 DVDReadPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, s32 prio);

#define DVDRead(fileInfo, addr, length, offset) \
    DVDReadPrio((fileInfo), (addr), (length), (offset), 2)

BOOL DVDOpenDir(const char* dirName, DVDDir* dir);
BOOL DVDReadDir(DVDDir* dir, DVDDirEntry* dirent);
BOOL DVDCloseDir(DVDDir* dir);

#ifdef __cplusplus
}
#endif

#endif
