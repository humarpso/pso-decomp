#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Item_801BE890 { u8 b[0x1C]; };

struct Inv_801BE890 { s32 f0; Item_801BE890 items[0x1E]; };

extern "C" {
void init__17TPlyInventoryItemFv(void *);
Inv_801BE890 *init_inventory_list__10TObjPlayerFPv(Inv_801BE890 *arg0);
}

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int clear_flag_4000_callback__10TObjPlayerFPv(void* p);
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
int unregister_sub__10TObjPlayerFPv(void* p);
void set_control_role__10TObjPlayerFPvi(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void reset_entrance_id__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
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

Inv_801BE890 *init_inventory_list__10TObjPlayerFPv(Inv_801BE890 *arg0) {
    s32 i;
    arg0->f0 = 0;
    for (i = 0; i < 0x1E; i++) {
        init__17TPlyInventoryItemFv(&arg0->items[i]);
    }
    return arg0;
}

}
