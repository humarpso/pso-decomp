#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);
void* init__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_8006E714(void);

    extern unsigned char lbl_804887F8[];
    extern const float lbl_805D8F60;
void* init__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_8006E714(); *(int*)((char*)a0 + 0x18) = (int)lbl_804887F8; *(int*)((char*)a0 + 0x38) = 21; *(float*)((char*)a0 + 0x58) = lbl_805D8F60; *(int*)((char*)a0 + 0x114) = 0; *(int*)((char*)a0 + 0x110) = 0; return a0; }

void TCameraCtrl__sub_80067CE0(void* p, s32 v) { *(s32*)((char*)p + 0x10c) = v; }

}
