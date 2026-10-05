#ifndef PSO_SDK_COMPACT_MATH
#define PSO_SDK_COMPACT_MATH 1
#endif
#include <dolphin/dolphin.h>
#include <dolphin/os.h>

#include "os/__os.h"

#define SHN_UNDEF 0
#define SHN_LORESERVE 0xff00
#define SHN_LOPROC 0xff00
#define SHN_HIPROC 0xff1f
#define SHN_ABS 0xfff1
#define SHN_COMMON 0xfff2
#define SHN_HIRESERVE 0xffff

#define ELF32_R_SYM(i) ((i) >> 8)
#define ELF32_R_TYPE(i) ((unsigned char)(i))
#define ELF32_R_INFO(s, t) (((s) << 8) + (unsigned char)(t))


#define R_PPC_NONE 0
#define R_PPC_ADDR32 1
#define R_PPC_ADDR24 2
#define R_PPC_ADDR16 3
#define R_PPC_ADDR16_LO 4
#define R_PPC_ADDR16_HI 5
#define R_PPC_ADDR16_HA 6
#define R_PPC_ADDR14 7
#define R_PPC_ADDR14_BRTAKEN 8
#define R_PPC_ADDR14_BRNTAKEN 9
#define R_PPC_REL24 10
#define R_PPC_REL14 11
#define R_PPC_REL14_BRTAKEN 12
#define R_PPC_REL14_BRNTAKEN 13

#define R_PPC_GOT16 14
#define R_PPC_GOT16_LO 15
#define R_PPC_GOT16_HI 16
#define R_PPC_GOT16_HA 17
#define R_PPC_PLTREL24 18
#define R_PPC_COPY 19
#define R_PPC_GLOB_DAT 20
#define R_PPC_JMP_SLOT 21
#define R_PPC_RELATIVE 22

#define R_PPC_LOCAL24PC 23

#define R_PPC_UADDR32 24
#define R_PPC_UADDR16 25
#define R_PPC_REL32 26

#define R_PPC_PLT32 27
#define R_PPC_PLTREL32 28
#define R_PPC_PLT16_LO 29
#define R_PPL_PLT16_HI 30
#define R_PPC_PLT16_HA 31

#define R_PPC_SDAREL16 32
#define R_PPC_SECTOFF 33
#define R_PPC_SECTOFF_LO 34
#define R_PPC_SECTOFF_HI 35
#define R_PPC_SECTOFF_HA 36
#define R_PPC_ADDR30 37

#define R_PPC_EMB_NADDR32 101
#define R_PPC_EMB_NADDR16 102
#define R_PPC_EMB_NADDR16_LO 103
#define R_PPC_EMB_NADDR16_HI 104
#define R_PPC_EMB_NADDR16_HA 105
#define R_PPC_EMB_SDAI16 106
#define R_PPC_EMB_SDA2I16 107
#define R_PPC_EMB_SDA2REL 108
#define R_PPC_EMB_SDA21 109
#define R_PPC_EMB_MRKREF 110
#define R_PPC_EMB_RELSEC16 111
#define R_PPC_EMB_RELST_LO 112
#define R_PPC_EMB_RELST_HI 113
#define R_PPC_EMB_RELST_HA 114
#define R_PPC_EMB_BIT_FLD 115
#define R_PPC_EMB_RELSDA 116

OSModuleQueue __OSModuleInfoList AT_ADDRESS(OS_BASE_CACHED | 0x30C8);
const void* __OSStringTable AT_ADDRESS(OS_BASE_CACHED | 0x30D0);

#define ENQUEUE_INFO(queue, info, link) \
  do {                                  \
    OSModuleInfo* __prev;               \
                                        \
    __prev = (queue)->tail;             \
    if (__prev == NULL)                 \
      (queue)->head = (info);           \
    else                                \
      __prev->link.next = (info);       \
    (info)->link.prev = __prev;         \
    (info)->link.next = NULL;           \
    (queue)->tail = (info);             \
  } while (0)

#define DEQUEUE_INFO(info, queue, link) \
  do {                                  \
    OSModuleInfo* __next;               \
    OSModuleInfo* __prev;               \
                                        \
    __next = (info)->link.next;         \
    __prev = (info)->link.prev;         \
                                        \
    if (__next == NULL)                 \
      (queue)->tail = __prev;           \
    else                                \
      __next->link.prev = __prev;       \
                                        \
    if (__prev == NULL)                 \
      (queue)->head = __next;           \
    else                                \
      __prev->link.next = __next;       \
  } while (0)

#pragma dont_inline on
void OSNotifyLink() {}

void OSNotifyUnlink() {}
#pragma dont_inline reset

void OSSetStringTable(const void * stringTable) {
    __OSStringTable = stringTable;
}

static BOOL Relocate(OSModuleHeader* newModule, OSModuleHeader* module) {
  OSModuleID idNew;
  OSImportInfo* imp;
  OSRel* rel;
  OSSectionInfo* si;
  OSSectionInfo* siFlush;
  u32* p;
  u32 offset;
  u32 x;

  idNew = newModule ? newModule->info.id : 0;
  for (imp = (OSImportInfo*)module->impOffset;
       imp < (OSImportInfo*)(module->impOffset + module->impSize); imp++) {
    if (imp->id == idNew) {
      goto Found;
    }
  }
  return FALSE;

Found:
  siFlush = 0;
  for (rel = (OSRel*)imp->offset; rel->type != R_DOLPHIN_END; rel++) {
    (u8*)p += rel->offset;
    if (idNew) {
      si = &OSGetSectionInfo(newModule)[rel->section];
      offset = OS_SECTIONINFO_OFFSET(si->offset);
    } else {
      offset = 0;
    }
    switch (rel->type) {
    case R_PPC_NONE:
      break;
    case R_PPC_ADDR32:
      x = offset + rel->addend;
      *p = x;
      break;
    case R_PPC_ADDR24:
      x = offset + rel->addend;
      *p = (*p & ~0x03fffffc) | (x & 0x03fffffc);
      break;
    case R_PPC_ADDR16:
      x = offset + rel->addend;
      *(u16*)p = (u16)(x & 0xffff);
      break;
    case R_PPC_ADDR16_LO:
      x = offset + rel->addend;
      *(u16*)p = (u16)(x & 0xffff);
      break;
    case R_PPC_ADDR16_HI:
      x = offset + rel->addend;
      *(u16*)p = (u16)(((x >> 16) & 0xffff));
      break;
    case R_PPC_ADDR16_HA:
      x = offset + rel->addend;
      *(u16*)p = (u16)(((x >> 16) + ((x & 0x8000) ? 1 : 0)) & 0xffff);
      break;
    case R_PPC_REL24:
      x = offset + rel->addend - (u32)p;
      *p = (*p & ~0x03fffffc) | (x & 0x03fffffc);
      break;
    case R_DOLPHIN_NOP:
      break;
    case R_DOLPHIN_SECTION:
      si = &OSGetSectionInfo(module)[rel->section];
      p = (u32*)OS_SECTIONINFO_OFFSET(si->offset);
      if (siFlush) {
        offset = OS_SECTIONINFO_OFFSET(siFlush->offset);
        DCFlushRange((void*)offset, siFlush->size);
        ICInvalidateRange((void*)offset, siFlush->size);
      }
      siFlush = (si->offset & OS_SECTIONINFO_EXEC) ? si : 0;
      break;
    default:
      OSReport("OSLink: unknown relocation type %3d\n", rel->type);
      break;
    }
  }

  if (siFlush) {
    offset = OS_SECTIONINFO_OFFSET(siFlush->offset);
    DCFlushRange((void*)offset, siFlush->size);
    ICInvalidateRange((void*)offset, siFlush->size);
  }

  return TRUE;
}

BOOL OSLink(OSModuleInfo* newModule, void* bss) {
  u32 i;
  OSSectionInfo* si;
  OSModuleHeader* moduleHeader;
  OSModuleInfo* moduleInfo;
  OSImportInfo* imp;

  ASSERTLINE(0xEB, newModule->version <= 2);

  moduleHeader = (OSModuleHeader*)newModule;

  if (2 < newModule->version ||
      2 <= newModule->version &&
          (moduleHeader->align && (u32)newModule % moduleHeader->align != 0 ||
           moduleHeader->bssAlign && (u32)bss % moduleHeader->bssAlign != 0))
  {
    return FALSE;
  }

  ENQUEUE_INFO(&__OSModuleInfoList, newModule, link);

  memset(bss, 0, moduleHeader->bssSize);
  newModule->sectionInfoOffset += (u32)moduleHeader;
  moduleHeader->relOffset += (u32)moduleHeader;
  moduleHeader->impOffset += (u32)moduleHeader;

  for (i = 0; i < newModule->numSections; i++) {
    si = &OSGetSectionInfo(newModule)[i];
    if (si->offset != 0) {
      si->offset += (u32)moduleHeader;
    } else if (si->size != 0) {
      si->offset = (u32)bss;
      bss = (void*)((u32)bss + si->size);
    }
  }
  for (imp = (OSImportInfo*)moduleHeader->impOffset;
       imp < (OSImportInfo*)(moduleHeader->impOffset + moduleHeader->impSize); imp++) {
    imp->offset += (u32)moduleHeader;
  }
  if (moduleHeader->prologSection != SHN_UNDEF) {
    moduleHeader->prolog +=
        OS_SECTIONINFO_OFFSET(OSGetSectionInfo(newModule)[moduleHeader->prologSection].offset);
  }
  if (moduleHeader->epilogSection != SHN_UNDEF) {
    moduleHeader->epilog +=
        OS_SECTIONINFO_OFFSET(OSGetSectionInfo(newModule)[moduleHeader->epilogSection].offset);
  }
  if (moduleHeader->unresolvedSection != SHN_UNDEF) {
    moduleHeader->unresolved +=
        OS_SECTIONINFO_OFFSET(OSGetSectionInfo(newModule)[moduleHeader->unresolvedSection].offset);
  }
  if (__OSStringTable) {
    newModule->nameOffset += (u32)__OSStringTable;
  }

  Relocate(0, moduleHeader);

  for (moduleInfo = __OSModuleInfoList.head; moduleInfo; moduleInfo = moduleInfo->link.next) {
    Relocate(moduleHeader, (OSModuleHeader*)moduleInfo);
    if (moduleInfo != newModule) {
      Relocate((OSModuleHeader*)moduleInfo, moduleHeader);
    }
  }

  OSNotifyLink();

  return TRUE;
}

static BOOL Undo(OSModuleHeader* newModule, OSModuleHeader* module) {
  OSModuleID idNew;
  OSImportInfo* imp;
  OSRel* rel;
  OSSectionInfo* si;
  OSSectionInfo* siFlush;
  u32* p;
  u32 offset;
  u32 x;

  ASSERTLINE(0x147, newModule);
  idNew = newModule->info.id;
  ASSERTLINE(0x149, idNew);

  for (imp = (OSImportInfo*)module->impOffset;
       imp < (OSImportInfo*)(module->impOffset + module->impSize); imp++) {
    if (imp->id == idNew) {
      goto Found;
    }
  }
  return FALSE;

Found:
  siFlush = 0;
  for (rel = (OSRel*)imp->offset; rel->type != R_DOLPHIN_END; rel++) {
    (u8*)p += rel->offset;
    si = &OSGetSectionInfo(newModule)[rel->section];
    offset = OS_SECTIONINFO_OFFSET(si->offset);
    x = 0;
    switch (rel->type) {
    case R_PPC_NONE:
      break;
    case R_PPC_ADDR32:
      *p = x;
      break;
    case R_PPC_ADDR24:
      *p = (*p & ~0x03fffffc) | (x & 0x03fffffc);
      break;
    case R_PPC_ADDR16:
      *(u16*)p = (u16)(x & 0xffff);
      break;
    case R_PPC_ADDR16_LO:
      *(u16*)p = (u16)(x & 0xffff);
      break;
    case R_PPC_ADDR16_HI:
      *(u16*)p = (u16)(((x >> 16) & 0xffff));
      break;
    case R_PPC_ADDR16_HA:
      *(u16*)p = (u16)(((x >> 16) + ((x & 0x8000) ? 1 : 0)) & 0xffff);
      break;
    case R_PPC_REL24:
      if (module->unresolvedSection != SHN_UNDEF) {
        x = (u32)module->unresolved - (u32)p;
      }
      *p = (*p & ~0x03fffffc) | (x & 0x03fffffc);
      break;
    case R_DOLPHIN_NOP:
      break;
    case R_DOLPHIN_SECTION:
      si = &OSGetSectionInfo(module)[rel->section];
      p = (u32*)OS_SECTIONINFO_OFFSET(si->offset);
      if (siFlush) {
        offset = OS_SECTIONINFO_OFFSET(siFlush->offset);
        DCFlushRange((void*)offset, siFlush->size);
        ICInvalidateRange((void*)offset, siFlush->size);
      }
      siFlush = (si->offset & OS_SECTIONINFO_EXEC) ? si : 0;
      break;
    default:
      OSReport("OSUnlink: unknown relocation type %3d\n", rel->type);
      break;
    }
  }

  if (siFlush) {
    offset = OS_SECTIONINFO_OFFSET(siFlush->offset);
    DCFlushRange((void*)offset, siFlush->size);
    ICInvalidateRange((void*)offset, siFlush->size);
  }

  return TRUE;
}

BOOL OSUnlink(OSModuleInfo* oldModule) {
  OSModuleHeader* moduleHeader;
  OSModuleInfo* moduleInfo;

  ASSERTLINE(0x1AA, oldModule->version == OS_MODULE_VERSION);
  moduleHeader = (OSModuleHeader*)oldModule;

  DEQUEUE_INFO(oldModule, &__OSModuleInfoList, link);

  for (moduleInfo = __OSModuleInfoList.head; moduleInfo; moduleInfo = moduleInfo->link.next) {
    Undo(moduleHeader, (OSModuleHeader*)moduleInfo);
  }

  OSNotifyUnlink();

  return TRUE;
}

void __OSModuleInit(void) {
  __OSModuleInfoList.head = __OSModuleInfoList.tail = 0;
  __OSStringTable = 0;
}
