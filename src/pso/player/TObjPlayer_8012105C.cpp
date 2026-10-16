#include "types.h"
#include "pso/items/TItemWeapon.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TItemWeapon__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
int get_attack_damage_scale(void*);
int TObjPlayer__sub_801D2F4C(void*);

void TObjPlayer__sub_8012105C(void) {  }
void TObjPlayer__sub_80121060(void) {  }
u8 TItemWeapon__sub_80121064(void* p) { return *(u8*)((char*)p + 0x1d3); }
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) |= v; }
void TItemWeapon::clear_equip_flags(u32 v) { *(u32*)((char*)this + 0x1b8) &= ~v; }
void set_flag_8__10TObjPlayerFPv(void* p) { set_status_flags__10TObjPlayerFPvUi(p, 8); }

}

#include "types.h"

extern "C" {
void set_weapon_trail_joints(s32 arg0, s32 arg1, s8 arg2, s8 arg3);
}

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TItemWeapon__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
int get_attack_damage_scale(void*);
int TObjPlayer__sub_801D2F4C(void*);

void set_weapon_trail_joints(s32 arg0, s32 arg1, s8 arg2, s8 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(arg0 + arg1);
    *(s8 *)((s8 *)temp_r3 + 0x19C) = arg2;
    *(s8 *)((s8 *)temp_r3 + 0x1A0) = arg3;
}

}

#include "types.h"
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

void TObjPlayer::set_model_param(s16 v) { *(s16*)((char*)this + 0x118) = v; }
void TObjPlayer::set_model_id(s16 v) { this->m_116 = v; }
int TObjPlayer::is_status_subsystem_ready() { return TObjPlayer__sub_801D2F4C((char*)this + 0x7cc); }
void*TObjPlayer::get_extended_state() { return ((TObjPlayer *)((char*)this + 0x7cc))->get_state_ptr(); }
int TObjPlayer::query_extended_state() { return get_attack_damage_scale((char*)this + 0x7cc); }
void TObjPlayer::test_flag30_bit0x100000() { obj_testFlags30(this, (void*)1048576); }
void* get_model_joint_matrix(void* a0, int a1) {  return (char*)(*(int*)((char*)a0 + 0xdb4)) + a1 * 48; }
void TObjPlayer::set_action_type(s16 v) { *(s16*)((char*)this + 0x0) = v; }

}
