#include "types.h"

void* OSGetCurrentContext(void) {
    return *(void**)0x800000D4;
}
