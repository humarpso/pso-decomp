#include "types.h"
extern "C" {
s32 get_ptr_4__10TObjPlayerFPv(void *);
s32 get_class_starting_inventory(u8);
void fn_802C3A50(u8, s32, s32);
void TAdSinglePlyChrSelectGC__sub_802C3AC0(void *arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802C3AC0(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 v = p[0x3A1];
    p[0] = 5;
    fn_802C3A50(p[0], get_class_starting_inventory(v), get_ptr_4__10TObjPlayerFPv(p));
}

}
