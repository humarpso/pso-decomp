#include "types.h"
#include "pso/misc/TUnk_804CE7E8.h"

extern "C" {

extern s32 lbl_805D38B0;

void TUnk_804CE7E8::sub_80248B7C(s16 arg1) {
    *(s32 *)((s8 *)this + 0) = (s32) lbl_805D38B0;
    *(s16 *)((s8 *)this + 0x20) = arg1;
}

}
