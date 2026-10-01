#include "types.h"

extern "C" {
f64 TAdEndText__sub_803A287C(f64 x, f64 *iptr);
f64 TAdEndText__sub_803A0EA8(f64 x, f64 y);
s32 TAdEndText__sub_803A0B08(f64 x, f64 *y);
f64 TLobby__sub_803A1DF0(f64 x, f64 y, s32 iy);
f64 TLobby__sub_803A2AFC(f64 x);
}

extern "C" {

#define __HI_803A287C(x) *(int *)&x
#define __LO_803A287C(x) *(1 + (int *)&x)
f64 TAdEndText__sub_803A287C(f64 x, f64 *iptr) {
    int i0, i1, j0;
    int i;
    i0 = __HI_803A287C(x);
    i1 = __LO_803A287C(x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            __HI_803A287C(*iptr) = i0 & 0x80000000;
            __LO_803A287C(*iptr) = 0;
            return x;
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                *iptr = x;
                __HI_803A287C(x) = i0 & 0x80000000;
                __LO_803A287C(x) = 0;
                return x;
            } else {
                __HI_803A287C(*iptr) = i0 & (~i);
                __LO_803A287C(*iptr) = 0;
                return x - *iptr;
            }
        }
    } else if (j0 > 51) {
        *iptr = x;
        __HI_803A287C(x) = i0 & 0x80000000;
        __LO_803A287C(x) = 0;
        return x;
    } else {
        u32 u = ((u32)(0xffffffff)) >> (j0 - 20);
        if ((i1 & u) == 0) {
            *iptr = x;
            __HI_803A287C(x) = i0 & 0x80000000;
            __LO_803A287C(x) = 0;
            return x;
        } else {
            __HI_803A287C(*iptr) = i0;
            __LO_803A287C(*iptr) = i1 & (~u);
            return x - *iptr;
        }
    }
}
__declspec(section ".sdata2") extern const f64 lbl_805E0AD0;
f64 TLobby__sub_803A2AFC(f64 x) {
    f64 y[2];
    s32 n, ix;
    ix = *(s32 *)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return TLobby__sub_803A1DF0(x, lbl_805E0AD0, 0);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = TAdEndText__sub_803A0B08(x, y);
        switch (n & 3) {
        case 0:
            return TLobby__sub_803A1DF0(y[0], y[1], 1);
        case 1:
            return TAdEndText__sub_803A0EA8(y[0], y[1]);
        case 2:
            return -TLobby__sub_803A1DF0(y[0], y[1], 1);
        default:
            return -TAdEndText__sub_803A0EA8(y[0], y[1]);
        }
    }
}

}
