#include "types.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);

int is_flag_2_set__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x4) & 0x4; }
void set_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x8; }
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) &= 0xfffffff7; }

}

#include "types.h"

struct Obj_8024C5C4 { u8 pad[0x1e]; u16 f1e; };

extern "C" {
s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self);
}

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);

s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self) {
    if (self->f1e & 2) return 0;
    return 1;
}

}

#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);

void TWindowCtrl::set_flag1e_bit40() { this->m_1e |= 0x40; }
u16 TWindowCtrl::get_flags() { return this->m_76; }
int TWindowCtrl::get_flag_bit1() { return (this->m_71 >> 1) & 0x1; }

}
