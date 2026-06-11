#ifndef W_MATH_H
#define W_MATH_H

#include "MSL_C/MSL_Common/float.h"

#if !defined(BUGFIXES) && !defined(FIX_SQRT_LINKAGE)
#define SQRTF_LINKAGE extern
#else
#define SQRTF_LINKAGE static
#endif

SQRTF_LINKAGE inline float sqrtf(float x) {
    static const double _half = .5;
    static const double _three = 3.0;
    volatile float y;

    if (x > 0.0f) {
        double guess = __frsqrte((double)x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        y = (float)(x * guess);
        return y;
    }

    return x;
}

#ifdef SQRTF_LINKAGE
#undef SQRTF_LINKAGE
#endif

#ifndef FABS_DECLARED
#define FABS_DECLARED
extern inline double fabs(double x) {
    return __fabs(x);
}
#endif

inline float fabsf(float x) {
    return (float)fabs((double)x);
}

#define INFINITY (*(float*)__float_huge)
#define NAN (*(float*)__float_nan)
#define HUGE_VALF (*(float*)__float_huge)

extern inline double sqrt(double x) {
    if (x > 0.0) {
        double guess = __frsqrte(x);
        guess = .5 * guess * (3.0 - guess * guess * x);
        guess = .5 * guess * (3.0 - guess * guess * x);
        guess = .5 * guess * (3.0 - guess * guess * x);
        guess = .5 * guess * (3.0 - guess * guess * x);
        return x * guess;
    } else if (x == 0.0f) {
        return 0.0;
    } else if (x) {
        return NAN;
    }
    return INFINITY;
}

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
