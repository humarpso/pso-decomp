#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
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
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
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
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFUl(void*, int);
int unregister_object_by_id(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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

void TObjPlayer::set_flag_200000() {
    s32 arg0 = (s32)this;
    TObjPlayer__sub_8011E204((void*)(arg0), 0x200000);
}
int TObjPlayer::check_flag_4() { return check_flag__10TObjPlayerFl(this, 4); }
void*TObjPlayer::set_invisible() { TFontSmallLobby__sub_801C0228(this); return this; }
int TObjPlayer::clear_flag_4000_callback() { return set_flag_4000(); }
int TObjPlayer::set_flag_4000() { return TObjPlayer__sub_8011E204(this, 16384); }
int TObjPlayer::clear_flag_4000() { return set_state_flags__10TObjPlayerFUl(this, 16384); }
void TObjPlayer::set_battle_flag(s32 v) { *(s32*)((char*)this + 0x3b4) = v; }
s32 TObjPlayer::get_anim_id() { return *(s32*)((char*)this + 0x3b4); }
int TObjPlayer::check_flag_0x40000000() { return (*(u32*)((char*)this + 0x334) >> 30) & 0x1; }
void TObjPlayer::clear_flag_0x2() { *(u32*)((char*)this + 0x334) &= 0xfffffffd; }

}
