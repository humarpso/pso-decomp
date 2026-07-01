#include "types.h"

extern "C" {

void* TItemList__sub_801D5CB8(void* a0);
int TObjPlayer__sub_801C2098(void);

    extern const float lbl_805DC3D4;
void* TItemList__sub_801D5CB8(void* a0) { TObjPlayer__sub_801C2098(); *(float*)((char*)a0 + 0xc) = lbl_805DC3D4; *(float*)((char*)a0 + 0x8) = lbl_805DC3D4; *(float*)((char*)a0 + 0x4) = lbl_805DC3D4; return a0; }

}
