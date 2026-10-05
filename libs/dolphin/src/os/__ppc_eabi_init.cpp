#include <dolphin/base/PPCArch.h>

#ifdef __cplusplus
extern "C" {
#endif

void __init_user();
void __init_cpp();
void _ExitProcess();

typedef void (*voidfunctionptr)();
extern voidfunctionptr _ctors[];

void __OSPSInit(void);
void __OSCacheInit(void);

__declspec(section ".init") asm void __init_hardware(void) {
#include "orig_asm/os/__ppc_eabi_init/__init_hardware.inc"
}

__declspec(section ".init") asm void __flush_cache(void* address, unsigned int size) {
#include "orig_asm/os/__ppc_eabi_init/__flush_cache.inc"
}

void __init_user(void) {
    __init_cpp();
}

#pragma peephole off
void __init_cpp(void) {
    voidfunctionptr* constructor;
    for (constructor = _ctors; *constructor; constructor++) {
        (*constructor)();
    }
}
#pragma peephole reset

void _ExitProcess(void) {
    PPCHalt();
}

#ifdef __cplusplus
}
#endif
