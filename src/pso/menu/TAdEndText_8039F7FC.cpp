#include "types.h"

extern "C" {
f64 TAdEndText__sub_803A23E8(f64 x, f64 y);
f64 TAdEndText__sub_803A0EA8(f64 x, f64 y);
f64 TAdEndText__sub_803A0EA8(f64 x, f64 y);
s32 TAdEndText__sub_803A0B08(f64 x, f64 *y);
f64 TLobby__sub_803A1DF0(f64 x, f64 y, s32 iy);
f64 TLobby__sub_803A2410(f64 x);
}

extern "C" {

#pragma push
#pragma fp_contract on
__declspec(section ".sdata2") extern const f64 lbl_805E0958;
__declspec(section ".sdata2") extern const f64 lbl_805E0960;
__declspec(section ".sdata2") extern const f64 lbl_805E0968;
__declspec(section ".sdata2") extern const f64 lbl_805E0970;
__declspec(section ".sdata2") extern const f64 lbl_805E0978;
__declspec(section ".sdata2") extern const f64 lbl_805E0980;
__declspec(section ".sdata2") extern const f64 lbl_805E0988;
__declspec(section ".sdata2") extern const f64 lbl_805E0990;
__declspec(section ".sdata2") extern const f64 lbl_805E0998;
#define __HI_803A0EA8(x) *(int *)&x
#define __LO_803A0EA8(x) *(1 + (int *)&x)
f64 TAdEndText__sub_803A0EA8(f64 x, f64 y) {
    f64 a, hz, z, r, qx;
    int ix;
    ix = __HI_803A0EA8(x) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if (((int)x) == 0)
            return lbl_805E0958;
    }
    z = x * x;
    r = z * (lbl_805E0960 + z * (lbl_805E0968 + z * (lbl_805E0970 + z * (lbl_805E0978 + z * (lbl_805E0980 + lbl_805E0988 * z)))));
    if (ix < 0x3FD33333)
        return lbl_805E0958 - (lbl_805E0990 * z - (z * r - x * y));
    else {
        if (ix > 0x3fe90000) {
            qx = lbl_805E0998;
        } else {
            __HI_803A0EA8(qx) = ix - 0x00200000;
            __LO_803A0EA8(qx) = 0;
        }
        hz = lbl_805E0990 * z - qx;
        a = lbl_805E0958 - qx;
        return a - (hz - (z * r - x * y));
    }
}
#pragma pop

f64 TAdEndText__sub_803A23E8(f64 x, f64 y) {
    *(s32 *)&x = (*(s32 *)&x & 0x7fffffff) | (*(s32 *)&y & 0x80000000);
    return x;
}
__declspec(section ".sdata2") extern const f64 lbl_805E0A88;
f64 TLobby__sub_803A2410(f64 x) {
    f64 y[2];
    s32 n, ix;
    ix = *(s32 *)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return TAdEndText__sub_803A0EA8(x, lbl_805E0A88);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = TAdEndText__sub_803A0B08(x, y);
        switch (n & 3) {
        case 0:
            return TAdEndText__sub_803A0EA8(y[0], y[1]);
        case 1:
            return -TLobby__sub_803A1DF0(y[0], y[1], 1);
        case 2:
            return -TAdEndText__sub_803A0EA8(y[0], y[1]);
        default:
            return TLobby__sub_803A1DF0(y[0], y[1], 1);
        }
    }
}

}
