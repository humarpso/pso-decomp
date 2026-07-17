#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_d8__10TObjPlayerFPv();
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
int set_state_flags__10TObjPlayerFPvUi(void*, int);

s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2) {
    s8 sp8[24];

    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    if (fn_801B7F4C(arg0, get_field_d8__10TObjPlayerFPv()) == 0) {
        return 0;
    }
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

}
