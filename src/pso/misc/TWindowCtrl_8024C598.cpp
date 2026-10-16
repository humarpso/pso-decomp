#include "types.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TUnk_804CF0B8.h"

extern "C" {

int TWindowCtrl::is_flag_2_set() { return *(u16*)((char*)this + 0x4) & 0x4; }
void TWindowCtrl::set_flag1e_bit8() { *(u16*)((char*)this + 0x1e) |= 0x8; }
void TWindowCtrl::clear_flag1e_bit8() { *(u16*)((char*)this + 0x1e) &= 0xfffffff7; }

}

#include "types.h"

struct Obj_8024C5C4 { u8 pad[0x1e]; u16 f1e; };

extern "C" {
s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self);
}

extern "C" {

s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self) {
    if (self->f1e & 2) return 0;
    return 1;
}

}

#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void TWindowCtrl::set_flag1e_bit40() { this->m_1e |= 0x40; }
u16 TWindowCtrl::get_flags() { return this->m_76; }
int TUnk_804CF0B8::get_flag_bit1() { return ((*(u8 *)((u8 *)this + 0x71)) >> 1) & 0x1; }

}
