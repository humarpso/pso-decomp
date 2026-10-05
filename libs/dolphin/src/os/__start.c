#include <dolphin/types.h>
#include <stddef.h>
void OSResetSystem(int, u32, BOOL);
void InitMetroTRK(void);
void DBInit(void);
void OSInit(void);
void exit(int);
void* memcpy(void*, const void*, size_t);
void* memset(void*, int, size_t);
void __init_hardware(void);
void __flush_cache(void*, size_t);
void __init_user(void);
extern u8 _stack_addr[];
extern u8 _SDA_BASE_[];
extern u8 _SDA2_BASE_[];
typedef struct RomSection { void* romOfs; void* virtualOfs; size_t size; } RomSection;
typedef struct BssSection { void* virtualOfs; size_t size; } BssSection;
__declspec(section ".init") extern RomSection _rom_copy_info[];
__declspec(section ".init") extern BssSection _bss_init_info[];
__declspec(section ".init") static void __init_registers(void);
__declspec(section ".init") static void __init_data(void);

int main(int argc, char** argv);

__declspec(section ".init") static void __check_pad3(void) {
    if ((*(u16*)0x800030E4 & 0xEEF) == 0xEEF) {
        OSResetSystem(0, 0, 0);
    }
}

__declspec(section ".init") __declspec(weak) asm void __start(void) {
#include "orig_asm/os/__start/__start.inc"
}

__declspec(section ".init") static asm void __init_registers(void) {
#include "orig_asm/os/__start/__init_registers.inc"
}

inline void __copy_rom_section(void* dst, const void* src, size_t size) {
    if (size && (dst != src)) {
        memcpy(dst, src, size);
        __flush_cache(dst, size);
    }
}

inline void __init_bss_section(void* dst, size_t size) {
    if (size) {
        memset(dst, 0, size);
    }
}

__declspec(section ".init") static void __init_data(void) {
    RomSection* rs;
    BssSection* bs;

    rs = _rom_copy_info;
    while (1) {
        if (rs->size == 0) {
            break;
        }

        __copy_rom_section(rs->virtualOfs, rs->romOfs, rs->size);
        rs++;
    }

    bs = _bss_init_info;
    while (1) {
        if (bs->size == 0) {
            break;
        }

        __init_bss_section(bs->virtualOfs, bs->size);
        bs++;
    }
}
