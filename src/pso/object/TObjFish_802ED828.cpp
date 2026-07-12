#include "types.h"

extern "C" {

void TObjFish__sub_802ED828(s32 arg0);
void TObjFish__sub_802ED868(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void TObjFish__sub_802ED828(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TObjFish__sub_802ED868(void) {  }

}
