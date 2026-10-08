#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct C18_8007AA70 { u8 bytes[0x18]; };

struct C6C_8007AA70 { u8 bytes[0x6c]; };

struct P_8007AA70 { u32 w[2]; };

struct S_8007AA70 {
    P_8007AA70 ab;
    C18_8007AA70 c;
    C6C_8007AA70 d;
    u8 e0, e1, e2, e3;
};

extern "C" {
int TWindowSubComCard__sub_8007AA70(S_8007AA70 *arg0, S_8007AA70 *arg1);
}

extern "C" {

s32 forward_return_arg__17TWindowSubComCardFi(s32 arg0, S_8007AA70 * _w1);

s32 forward_return_arg__17TWindowSubComCardFi(s32 arg0, S_8007AA70 * _w1) {
    TWindowSubComCard__sub_8007AA70((S_8007AA70 *)(arg0), (S_8007AA70 *)(_w1));
    return arg0;
}
int TWindowSubComCard__sub_8007AA70(S_8007AA70 *arg0, S_8007AA70 *arg1) {
    *arg0 = *arg1;
    return (int)arg0;
}

}
