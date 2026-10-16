#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int TFontSmallLobby__sub_801C0228(void*);
int TObjPlayer__sub_8011E204(void*, int);
int unregister_object_by_id(void*);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);

s32 TObjPlayer__sub_801BEB0C(void* p) { return *(s32*)((char*)p + 0x334); }
int TObjPlayer::unregister_sub() { return unregister_object_by_id(this); }
void TObjPlayer::set_control_role(s32 v) { *(s32*)((char*)this + 0x3e8) = v; }
u8 TObjPlayer__sub_801BEB3C(void* p) { return *(u8*)((char*)p + 0x2e7); }
u8 TObjPlayer__sub_801BEB44(void* p) { return *(u8*)((char*)p + 0x2cb); }
u8 TObjPlayer__sub_801BEB4C(void* p) { return *(u8*)((char*)p + 0x2af); }
void TObjPlayer::set_play_time(s32 v) { this->m_3bc = v; }
void TObjPlayer::reset_entrance_id() { *(s32*)((char*)this + 0x3c8) = -1; }
int TObjPlayer__sub_801BEB68(void* p) { return TObjPlayer__sub_801BED98((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEB8C(void* p) { return *(u8*)((char*)p + 0x293); }
int TObjPlayer::query_field374() { return TObjPlayer__sub_801BEDA0((char*)this + 0x374); }
u8 TObjPlayer__sub_801BEBB8(void* p) { return *(u8*)((char*)p + 0x277); }
int TObjPlayer::query_flags_374() { return TObjPlayer__sub_801BEDA8((char*)this + 0x374); }
u8 TObjPlayer__sub_801BEBE4(void* p) { return *(u8*)((char*)p + 0x25b); }
int TObjPlayer::get_quest_status() { return TObjPlayer__sub_801BEDB0((char*)this + 0x374); }
u8 TObjPlayer__sub_801BEC10(void* p) { return *(u8*)((char*)p + 0x23f); }
int TObjPlayer::get_field_0x374() { return TObjPlayer__sub_801BEDB8((char*)this + 0x374); }
u8 TObjPlayer__sub_801BEC3C(void* p) { return *(u8*)((char*)p + 0x223); }

}
