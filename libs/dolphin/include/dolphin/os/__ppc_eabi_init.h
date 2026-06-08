#ifndef PPC_EABI_INIT_H
#define PPC_EABI_INIT_H

#include <dolphin/types.h>

#ifdef __cplusplus
extern "C"{
#endif

typedef void (*voidfunctionptr)(void);
__declspec(section ".ctors") extern voidfunctionptr _ctors[];
__declspec(section ".dtors") extern voidfunctionptr _dtors[];

#define DECL_ROM_SECTION(x)                                                    \
    extern u8 _f##x[];                                                         \
    extern u8 _f##x##_rom[];                                                   \
    extern u8 _e##x[];

#define DECL_BSS_SECTION(x)                                                    \
    extern u8 _f##x[];                                                         \
    extern u8 _e##x[];

extern u8 _db_stack_addr[];
extern u8 _db_stack_end[];

extern u8 __ArenaLo[];
extern u8 __ArenaHi[];

extern u8 _stack_addr[];
extern u8 _stack_end[];

extern u8 _SDA_BASE_[];
extern u8 _SDA2_BASE_[];

DECL_ROM_SECTION(_init);
DECL_ROM_SECTION(extab);
DECL_ROM_SECTION(extabindex);
DECL_ROM_SECTION(_text);
DECL_ROM_SECTION(_ctors);
DECL_ROM_SECTION(_dtors);
DECL_ROM_SECTION(_rodata);
DECL_ROM_SECTION(_data);
DECL_ROM_SECTION(_sdata);
DECL_ROM_SECTION(_sdata2);
DECL_ROM_SECTION(_stack);

DECL_BSS_SECTION(_bss);
DECL_BSS_SECTION(_sbss);
DECL_BSS_SECTION(_sbss2);

void __init_hardware(void);
void __flush_cache(void*, size_t);
void __init_user(void);
void _ExitProcess(void);

typedef struct RomSection {
    void* romOfs;
    void* virtualOfs;
    size_t size;
} RomSection;

typedef struct BssSection {
    void* virtualOfs;
    size_t size;
} BssSection;

typedef struct ExtabIndexInfo {
    void* etiStart;
    void* etiEnd;
    void* codeStart;
    u32 codeSize;
} ExtabIndexInfo;

__declspec(section ".init") extern  RomSection _rom_copy_info[];
__declspec(section ".init") extern  BssSection _bss_init_info[];
__declspec(section ".init") extern  ExtabIndexInfo _eti_init_info[];

#ifdef __cplusplus
}
#endif
#endif
