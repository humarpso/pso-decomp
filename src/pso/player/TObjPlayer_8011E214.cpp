#include "types.h"

extern "C" {

void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v);
u8 get_special_selector__11TItemWeaponFv(void* p);
void set_special_selector__11TItemWeaponFUc(void* p, u8 v);

void set_flag_10000__10TObjPlayerFPv(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi((void*)(arg0), 0x10000);
}
void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x334) |= v; }

}
