#include "types.h"
extern "C" {
f64 TAdEndText__sub_803A23E8(f64 x, f64 y);
}

extern "C" {

f64 TAdEndText__sub_803A23E8(f64 x, f64 y) {
    *(s32 *)&x = (*(s32 *)&x & 0x7fffffff) | (*(s32 *)&y & 0x80000000);
    return x;
}

}
