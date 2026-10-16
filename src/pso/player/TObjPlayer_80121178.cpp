#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TItemWeapon__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
int get_attack_damage_scale(void*);
int TObjPlayer__sub_801D2F4C(void*);

void*TObjPlayer::get_state_ptr() { return (char*)this + 0x30; }

}
