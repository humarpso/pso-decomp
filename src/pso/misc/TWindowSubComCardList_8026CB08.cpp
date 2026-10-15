#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"

extern "C" {

int __dl__FPv();

s32 delete_if_allocated(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

    extern const float lbl_805DD270;
void TWindowSubComCardList::init(int a1, int a2, int a3) { *(unsigned char*)((char*)this + 0x0) = a1; *(unsigned char*)((char*)this + 0x1) = a2; *(int*)((char*)this + 0x4) = a3; *(float*)((char*)this + 0x8) = lbl_805DD270; }

}
