#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B35AC(void* p);
void TObjPlayer__sub_801B35E4(void* p);
void TObjPlayer__sub_801B3620(void* p);
int TObjPlayer__sub_801B3674(void);
s32 can_use_camera_field__10TObjPlayerFi(s32 arg0);
s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2);
int check_technique_flag__10TObjPlayerFPv(void* p);
int has_item_flag_4096__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8011E204(void* a0 = 0, void* a1 = 0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 check_flag_100__10TObjPlayerFPv();
int check_flag__10TObjPlayerFPvi(void*, int);
s32 fn_801B7F4C(void *, s32);
s32 get_camera_field__10TObjPlayerFPv(s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_owner_if_alive__10TObjPlayerFPv();
int get_player_rank__18TChallenge4PResultFPv(void* a0 = 0);
int get_player_result__18TChallenge4PResultFPv(void* a0 = 0, void* a1 = 0);
s32 init__9TItemDataFv(s8 *);
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
s32 reset_key_machine_state__10TObjPlayerFv();
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
int set_state_flags__10TObjPlayerFPvUi(void* a0 = 0, void* a1 = 0);

int has_item_flag_4096__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8011E204((void*)(p), (void*)(4096)); }
int check_technique_flag__10TObjPlayerFPv(void* p) { return set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)(4096)); }

int is_flag_400_set__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 1024); }

void TObjPlayer__sub_801B35AC(void* p) { TObjPlayer__sub_8011E204((void*)(p), (void*)((void*)1024)); get_player_rank__18TChallenge4PResultFPv(p); }
void TObjPlayer__sub_801B35E4(void* p) { set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)((void*)1024)); get_player_result__18TChallenge4PResultFPv(p, (void*)1); }
void TObjPlayer__sub_801B3620(void* p) { set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)((void*)1024)); get_player_result__18TChallenge4PResultFPv(p, (void*)1); get_player_result__18TChallenge4PResultFPv(p, (void*)2); get_player_result__18TChallenge4PResultFPv(p, (void*)3); }

int TObjPlayer__sub_801B3674(void) { return 0; }

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

s32 can_use_camera_field__10TObjPlayerFi(s32 arg0) {
    if ((check_flag_100__10TObjPlayerFPv() != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0) || (reset_key_machine_state__10TObjPlayerFv() == 0)) {
        return 0;
    }
    return 1;
}

}
