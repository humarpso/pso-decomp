#include "math_ppc.h"
#include "fdlibm.h"

#ifndef DECL_WEAK
#define DECL_WEAK __declspec(weak)
#endif

double nan(const char* arg) {}

DECL_WEAK float acosf(float x) {
    return acos(x);
}

DECL_WEAK float cosf(float x) {
    return cos(x);
}

DECL_WEAK float sinf(float x) {
    return sin(x);
}

DECL_WEAK float tanf(float x) {
    return tan(x);
}
