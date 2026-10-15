#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_special_selector__11TItemWeaponFv(void* p);
void set_special_selector__11TItemWeaponFUc(void* p, u8 v);

void TObjPlayer::set_flag_10000() {
    set_state_flags(0x10000);
}
void TObjPlayer::set_state_flags(u32 v) { *(u32*)((char*)this + 0x334) |= v; }

}
