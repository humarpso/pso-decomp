#include <cstdlib>
#include <dolphin/dolphin.h>
#include <dolphin/os.h>

#include "__os.h"

__declspec(section ".ctors") extern void (* _ctors[])();
__declspec(section ".dtors") extern void (* _dtors[])();

static void __init_cpp(void);
static void __fini_cpp(void);

__declspec(section ".init") asm void __init_hardware(void) {
#include "orig_asm/os/__ppc_eabi_init/__init_hardware.inc"
}

__declspec(section ".init") asm void __flush_cache(void *address, unsigned int size) {
#include "orig_asm/os/__ppc_eabi_init/__flush_cache.inc"
}

void __init_user(void) {
    __init_cpp();
}

static void __init_cpp(void) {
	void (* * constructor)();

	for (constructor = _ctors; *constructor; constructor++) {
		(*constructor)();
	}
}

static void __fini_cpp(void) {
    void (* * destructor)();

    for (destructor = _dtors; *destructor; destructor++) {
        (*destructor)();
    }
}

DECL_WEAK
void abort(void) {
    _ExitProcess();
}

DECL_WEAK
void exit(int status) {
    __fini_cpp();
    _ExitProcess();
}

void _ExitProcess(void) {
    PPCHalt();
}
