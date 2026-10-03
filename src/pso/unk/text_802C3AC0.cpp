#include "types.h"
extern "C" {
s32 get_ptr_4__10TObjPlayerFPv(void *);
s32 get_class_starting_inventory(u8);
void copy_item_entry_array(u8, s32, s32);
void init_class_starting_inventory(void *arg0);
}

extern "C" {

void init_class_starting_inventory(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 v = p[0x3A1];
    p[0] = 5;
    copy_item_entry_array(p[0], get_class_starting_inventory(v), get_ptr_4__10TObjPlayerFPv(p));
}

}
