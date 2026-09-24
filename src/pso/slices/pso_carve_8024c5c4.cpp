#include "types.h"

struct Obj_8024C5C4 { u8 pad[0x1e]; u16 f1e; };

extern "C" {
s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self);
}

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);
void set_flag1e_bit40__11TWindowCtrlFPv(void* p);
u16 get_flags__11TWindowCtrlFPv(void* p);
int get_flag_bit1__11TWindowCtrlFPv(void* p);

s32 TWindowCtrl__sub_8024C5C4(Obj_8024C5C4 *self) {
    if (self->f1e & 2) return 0;
    return 1;
}

}
