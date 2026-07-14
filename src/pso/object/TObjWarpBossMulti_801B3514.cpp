#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80099EF8();
s32 init__9TItemDataFv(s8 *);
s32 fn_801B7F4C(void *, s32);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
int TObjPlayer__sub_801B3540(void* p);
int check_technique_flag__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int TObjPlayer__sub_8011E238(void*, int);

int is_flag_clear__17TObjWarpBossMultiFPv(void* p) { return (check_flag__10TObjPlayerFPvi(p, 4096)) == 0; }

}
