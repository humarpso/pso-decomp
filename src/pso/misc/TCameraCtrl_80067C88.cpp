#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);
int construct_view_controller__11TCameraCtrlFPv(void);

    extern unsigned char lbl_804887F8[];
    extern const float lbl_805D8F60;
void*TCameraCtrl::init() { construct_view_controller__11TCameraCtrlFPv(); *(int*)((char*)this + 0x18) = (int)lbl_804887F8; *(int*)((char*)this + 0x38) = 21; *(float*)((char*)this + 0x58) = lbl_805D8F60; *(int*)((char*)this + 0x114) = 0; this->m_110 = 0; return this; }

void TCameraCtrl__sub_80067CE0(void* p, s32 v) { *(s32*)((char*)p + 0x10c) = v; }

}
