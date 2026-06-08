#ifndef OSLINK_H
#define OSLINK_H

#include <dolphin/os/OSUtil.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OS_MODULE_VERSION 2

typedef struct OSModuleHeader OSModuleHeader;

typedef u32 OSModuleID;
typedef struct OSModuleQueue OSModuleQueue;
typedef struct OSModuleLink OSModuleLink;
typedef struct OSModuleInfo OSModuleInfo;
typedef struct OSSectionInfo OSSectionInfo;
typedef struct OSImportInfo OSImportInfo;
typedef struct OSRel OSRel;

struct OSModuleQueue {
    OSModuleInfo* head;
    OSModuleInfo* tail;
};

OSModuleQueue __OSModuleList AT_ADDRESS(0x800030C8);
void* __OSStringTable AT_ADDRESS(0x800030D0);

struct OSModuleLink {
    OSModuleInfo* next;
    OSModuleInfo* prev;
};

struct OSSectionInfo {
    u32 offset;
    u32 size;
};

struct OSModuleInfo {
    OSModuleID id;
    OSModuleLink link;
    u32 numSections;
    u32 sectionInfoOffset;
    u32 nameOffset;
    u32 nameSize;
    u32 version;
};

struct OSModuleHeader {
    OSModuleInfo info;

    u32 bssSize;
    u32 relOffset;
    u32 impOffset;
    u32 impSize;
    u8 prologSection;
    u8 epilogSection;
    u8 unresolvedSection;
    u8 bssSection;
    u32 prolog;
    u32 epilog;
    u32 unresolved;

#if (2 <= OS_MODULE_VERSION)
    u32 align;
    u32 bssAlign;
#endif

#if (3 <= OS_MODULE_VERSION)
    u32 fixSize;
#endif
};

#define OSGetSectionInfo(module) ((OSSectionInfo*)(((OSModuleInfo*)(module))->sectionInfoOffset))

#define OS_SECTIONINFO_EXEC 0x1
#define OS_SECTIONINFO_OFFSET(offset) ((offset) & ~0x1)

struct OSImportInfo {
    OSModuleID id;
    u32 offset;
};

struct OSRel {
    u16 offset;
    u8 type;
    u8 section;
    u32 addend;
};

#define R_DOLPHIN_NOP 201
#define R_DOLPHIN_SECTION 202
#define R_DOLPHIN_END 203
#define R_DOLPHIN_MRKREF 204

BOOL OSLink(OSModuleInfo* newModule, void* bss);
BOOL OSLinkFixed(OSModuleInfo* newModule, void* bss);
BOOL OSUnlink(OSModuleInfo* module);
void OSSetStringTable(const void* string_table);
void __OSModuleInit(void);

#ifdef __cplusplus
};
#endif

#endif
