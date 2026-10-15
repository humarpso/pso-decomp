#include "types.h"

struct O_801BEC50 { u16 a; u16 b; f32 x; f32 y; f32 z; };

struct O_801BEC78 { u16 a; u16 pad; s32 b; };

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void init_vec_record__10TObjPlayerFPv(O_801BEC50 *p);
void TObjPlayer__sub_801BEC78(O_801BEC78 *p);
}

extern "C" {

s32 get_entrance_id__10TObjPlayerFPv(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int TFontSmallLobby__sub_801C0228(void*);
int TObjPlayer__sub_8011E204(void*, int);
int unregister_object_by_id(void*);
int clear_flag_4000_callback__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
void set_control_role__10TObjPlayerFPvi(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void reset_entrance_id__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
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
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int check_flag_4__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
int end_camera_pan__10TObjPlayerFPv(void*);
s32 get_anim_id__10TObjPlayerFPv(void* p);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
u8 get_byte_339__10TObjPlayerFPv(void* p);
int get_equip_flags__10TObjPlayerFPv(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
int get_field_374__10TObjPlayerFPv(void* p);
int get_field_374_state__10TObjPlayerFPv(void* p);
int get_inventory_state__10TObjPlayerFPv(void* p);
u8 get_mag_level__10TObjPlayerFPv(void* p);
s32 get_max_level__10TObjPlayerFv();
int get_quest_status__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int query_field374__10TObjPlayerFPv(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
void set_action_flag_2__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
int set_flag_4000__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int start_freeze__10TObjPlayerFPv(void*);
int start_freeze_self__10TObjPlayerFPv(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);

int is_mounted__15TPlyPhotonChairFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 26) & 0x1; }

void init_vec_record__10TObjPlayerFPv(O_801BEC50 *p) {
    p->a = 0xFFFF;
    p->b = 0;
    p->x = p->y = p->z = TObjPlayer__data_805DC278;
}

void TObjPlayer__sub_801BEC78(O_801BEC78 *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

s32 get_entrance_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x3c8); }

}
