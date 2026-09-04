#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_8011E204(void* a0 = 0, void* a1 = 0);
int get_player_rank__18TChallenge4PResultFPv(void* a0 = 0);
int get_player_result__18TChallenge4PResultFPv(void* a0 = 0, void* a1 = 0);
int set_state_flags__10TObjPlayerFPvUi(void* a0 = 0, void* a1 = 0);
void TObjPlayer__sub_801B35AC(void* p);
void TObjPlayer__sub_801B35E4(void* p);
void TObjPlayer__sub_801B3620(void* p);
s32 get_field_d8__10TObjPlayerFPv();
s32 init__9TItemDataFv(s8 *);
s32 fn_801B7F4C(void *, s32);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
int has_item_flag_4096__10TObjPlayerFPv(void* p);
int check_technique_flag__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);

int TObjPlayer__sub_801B3674(void) { return 0; }

}
