#include "types.h"

asm char* strncpy(char* dst, const char* src, int n) {
#include "orig_asm/runtime/string/strncpy.inc"
}

asm int strncmp(const char* s1, const char* s2, int n) {
#include "orig_asm/runtime/string/strncmp.inc"
}
