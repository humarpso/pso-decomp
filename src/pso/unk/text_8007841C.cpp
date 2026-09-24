#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Sub_8007841C { s32 w[5]; };

struct Pair_8007841C { s32 w[2]; };

struct Rec_8007841C { Pair_8007841C ab; Sub_8007841C c; Sub_8007841C d; u16 e; };

extern "C" {
Rec_8007841C *fn_8007841C(Rec_8007841C *dst, Rec_8007841C *src);
}

extern "C" {

Rec_8007841C *fn_8007841C(Rec_8007841C *dst, Rec_8007841C *src) {
    dst->ab = src->ab;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    return dst;
}

}
