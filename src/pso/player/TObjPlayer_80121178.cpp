#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TItemWeapon__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFs(void* p, s16 v);
void set_model_id__10TObjPlayerFs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFv(void* p);
void* get_extended_state__10TObjPlayerFv(void* p);
int query_extended_state__10TObjPlayerFv(void* p);
void set_action_type__10TObjPlayerFs(void* p, s16 v);
int get_attack_damage_scale(void*);
int TObjPlayer__sub_801D2F4C(void*);

void*TObjPlayer::get_state_ptr() { return (char*)this + 0x30; }

}
