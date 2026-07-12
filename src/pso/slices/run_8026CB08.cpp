#include "types.h"

extern "C" {

int __dl__FPv();

s32 fn_8026CB08(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

    extern const float lbl_805DD270;
void TWindowSubComCardList__sub_8026CB44(void* a0, int a1, int a2, int a3) { *(unsigned char*)((char*)a0 + 0x0) = a1; *(unsigned char*)((char*)a0 + 0x1) = a2; *(int*)((char*)a0 + 0x4) = a3; *(float*)((char*)a0 + 0x8) = lbl_805DD270; }

}
