#include <dolphin/base/PPCArch.h>

#ifdef __cplusplus
extern "C" {
#endif

void __init_user();
void __init_cpp();
void _ExitProcess();

typedef void (*voidfunctionptr)();
extern voidfunctionptr _ctors[];

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
