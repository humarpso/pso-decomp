#include <dolphin/dolphin.h>
#include "__ppc_eabi_linker.h"

static u8 Debug_BBA;

extern void InitMetroTRK();
extern void exit(int);
extern int main(int argc, char* argv[]);
extern void __init_user(void);
extern void InitMetroTRK_BBA(void);
extern void DBInit();

__declspec(section ".init") extern void __check_pad3(void);
__declspec(section ".init") extern void __set_debug_bba(void);
__declspec(section ".init") extern u8 __get_debug_bba(void);
__declspec(section ".init") extern void __start(void);
__declspec(section ".init") extern void __init_registers(void);
__declspec(section ".init") extern void __init_data(void);
__declspec(section ".init") extern void __init_hardware(void);
__declspec(section ".init") extern void __flush_cache(void* addr, u32 size);

extern u8 Debug_BBA;

__declspec(section ".init") void __check_pad3(void) {
    if ((*(u16*)0x800030E4 & 0xEEF) == 0xEEF) {
        OSResetSystem(0, 0, 0);
    }
}

void __set_debug_bba(void) {
    Debug_BBA = 1;
}

__declspec(section ".init") u8 __get_debug_bba(void) {
    return Debug_BBA;
}

__declspec(section ".init") asm void __start(void) {
#include "orig_asm/os/__start/__start.inc"
}

__declspec(section ".init") asm void __init_registers(void) {
#include "orig_asm/os/__start/__init_registers.inc"
}

inline static void __copy_rom_section(void* dst, const void* src, u32 size)
{
    if (size && (dst != src)) {
        memcpy(dst, src, size);
        __flush_cache(dst, size);
    }
}

inline static void __init_bss_section(void* dst, u32 size)
{
    if (size) {
        memset(dst, 0, size);
    }
}

__declspec(section ".init") void __init_data() {
    __rom_copy_info* dci;
    __bss_init_info* bii;

    dci = _rom_copy_info;
    while (TRUE) {
        if (dci->size == 0)
            break;
        __copy_rom_section(dci->addr, dci->rom, dci->size);
        dci++;
    }

    bii = _bss_init_info;
    while (TRUE) {
        if (bii->size == 0)
            break;
        __init_bss_section(bii->addr, bii->size);
        bii++;
    }
}

__declspec(section ".init") asm void __init_hardware() {
#include "orig_asm/os/__start/__init_hardware.inc"
}

__declspec(section ".init") asm void __flush_cache() {
#include "orig_asm/os/__start/__flush_cache.inc"
}
