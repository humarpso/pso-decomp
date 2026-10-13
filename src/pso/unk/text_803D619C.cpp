#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803C5850_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803C588C_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 gcrna_error_text;
extern s32 gcrna_error_callback;
extern s32 gcrna_error_context;
M2C_UNK memset(void *, int, int);
void gcrna_error_shutdown(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 gcrna_error_text;
extern s32 gcrna_error_callback;
extern s32 gcrna_error_context;
void gcrna_error_initialize(void);
s32 calc_binomial_coefficient__12TBoss8DragonFii(s32 n, s32 k);
extern f32 lbl_805D76A8;
f32 fn_803D6308(f32 x);
}

extern "C" {

typedef char RecoveredGlobal_803C5850_lbl_80572020_size[sizeof(RecoveredGlobal_803C5850_lbl_80572020) == 0x100 ? 1 : -1];
void gcrna_error_shutdown(void) {
    memset((void *) (&gcrna_error_text.value), (int) (0), (int) (0x100));
    gcrna_error_callback = 0;
    gcrna_error_context = 0;
}
void gcrna_error_initialize(void) {
    memset((void *) (&gcrna_error_text.value), (int) (0), (int) (0x100));
    gcrna_error_callback = 0;
    gcrna_error_context = 0;
}
#pragma push
#pragma optimize_for_size off
#pragma scheduling off
#pragma peephole off
s32 calc_binomial_coefficient__12TBoss8DragonFii(s32 n, s32 k) {
    s32 d = 1;
    s32 r = 1;
    s32 i;
    for (i = k; i != 0; i--) {
        d *= i;
        r *= n - i + 1;
    }
    return r / d;
}
#pragma pop

inline int __fpclassifyf_803D6308(float __value) {
    switch (*(int *)&__value & 0x7f800000) {
    case 0x7f800000:
        if ((*(int *)&__value & 0x7fffff) != 0) {
            return 1;
        }
        return 2;
    case 0:
        if ((*(int *)&__value & 0x7fffff) != 0) {
            return 5;
        }
        return 3;
    }
    return 4;
}
inline float modff_803D6308(float x, float *iptr) {
    float frac;
    long i;
    switch (__fpclassifyf_803D6308(x)) {
    case 1:
    case 3:
        *iptr = x;
        return x;
    case 2:
        *iptr = x;
        return 0.0f;
    case 5:
        *iptr = 0.0f;
        return x;
    }
    i = (long) x;
    frac = x - (float) i;
    if (*(int *)&frac == 0 || (*(int *)&x & 0x7f800000) >= 0x4b800000) {
        *iptr = x;
        return 0.0f;
    }
    *iptr = (float) i;
    return frac;
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma peephole off
#pragma scheduling off
f32 fn_803D6308(f32 x) {
    return modff_803D6308(x, &lbl_805D76A8);
}
#pragma pop

typedef char RecoveredGlobal_803C588C_lbl_80572020_size[sizeof(RecoveredGlobal_803C588C_lbl_80572020) == 0x100 ? 1 : -1];

}
