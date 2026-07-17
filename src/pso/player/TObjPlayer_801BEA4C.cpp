#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
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
int TObjPlayer__sub_801BE7E8(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int TObjPlayer__sub_801BE814(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int TObjPlayer__sub_801BE840(void* p);
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
void TObjPlayer__sub_801BEB04(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int TObjPlayer__sub_801BEBEC(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
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

void set_action_flag_2__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) |= 0x2; }
void set_flag_400000__10TObjPlayerFi(s32 arg0) {
    set_state_flags__10TObjPlayerFPvUi((void*)(arg0), 0x400000);
}
int check_flag_48__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 48); }
int is_status_locked__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x30) & 0x10000; }
int is_status_flag_200__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x30) & 0x200; }
int TObjPlayer__sub_801BEABC(void* p) { return end_camera_pan__10TObjPlayerFPv(p); }
int start_freeze_self__10TObjPlayerFPv(void* p) { return start_freeze__10TObjPlayerFPv(p); }
void set_floor__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3e4) = v; }
void TObjPlayer__sub_801BEB04(void* p, s32 v) { *(s32*)((char*)p + 0x3e0) = v; }

}
