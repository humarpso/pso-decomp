#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_801B57E8(void);
int TObjPlayer__sub_801B5874(void);
int TObjPlayer__sub_801B58DC(void);
int TObjPlayer__sub_801B5920(void);
int TObjPlayer__sub_801B5990(void);
int TObjPlayer__sub_801B59C4(s32);
int TObjPlayer__sub_801B59F8(void);
int TObjPlayer__sub_801B5A44(void);
int TObjPlayer__sub_801B5A88(void);
int TObjPlayer__sub_801B5AC4(void);
int TObjPlayer__sub_801B5AF8(void);
void action_enable_if_present__10TObjPlayerFPv(void* p);
int check_flag_100__10TObjPlayerFPv(void* p);
s32 get_camera_field__10TObjPlayerFPv(void *arg0);
int has_valid_handle__10TObjPlayerFPv(void* p);
void init_parts__10TObjPlayerFPv(void* p);
s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1);
void refresh_effect__10TObjPlayerFi(s32 arg0);
void release_attached_resource__10TObjPlayerFPv(void* p);
void reset_equip_slots__10TObjPlayerFPv(void* p);
void set_effect_enabled__10TObjPlayerFii(s32 arg0, s32 arg1);
void update_ground_contact__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80019248();
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_801C1B38(void*);
int TObjPlayer__sub_801C1B60(void*);
s32 TObjPlayer__sub_801C1F50(s32);
int check_flag__10TObjPlayerFPvi(void*, int);
s32 fn_8002AE08(u16);
int fn_8019DD14(void*, void*);
int fn_8019DD24(void*, void*);
s32 fn_801C1E44(s32);
s32 fn_801C1E48(s32);
s32 fn_801C1E50(s32);
M2C_UNK fn_801C1E74(s32);
M2C_UNK fn_801C1EA4(s32);
M2C_UNK fn_801C1EC4(s32);
M2C_UNK fn_801C1EF4(s32);
int get_player_rank__18TChallenge4PResultFPv(void*);
int get_player_result__18TChallenge4PResultFPv(void*, void*);
s32 is_cursor_clear__11TMainCursorFPv(void *);
s32 is_flag_b0_4__10TObjPlayerFPv();
int is_handle_valid__10TObjPlayerFPv(void*);
s32 obj_getField1c(s32);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
s32 try_ground_action__10TObjPlayerFPvi(s32, s32);

int has_valid_handle__10TObjPlayerFPv(void* p) { return is_handle_valid__10TObjPlayerFPv(*(void**)((char*)p + 0x380)); }
int check_flag_100__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 256); }
void init_parts__10TObjPlayerFPv(void* p) { fn_8019DD24((char*)p + 0x550, (void*)1030); get_player_rank__18TChallenge4PResultFPv(p); TObjPlayer__sub_8011E204(p, (void*)256); }
void reset_equip_slots__10TObjPlayerFPv(void* p) { fn_8019DD14((char*)p + 0x550, (void*)1030); get_player_result__18TChallenge4PResultFPv(p, (void*)0); get_player_result__18TChallenge4PResultFPv(p, (void*)1); get_player_result__18TChallenge4PResultFPv(p, (void*)2); get_player_result__18TChallenge4PResultFPv(p, (void*)3); set_state_flags__10TObjPlayerFPvUi(p, (void*)256); }
s32 get_camera_field__10TObjPlayerFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x424);
    if (p != 0) {
        return is_cursor_clear__11TMainCursorFPv(p);
    }
    return 0;
}
void release_attached_resource__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TObjPlayer__sub_801C1B38(m); }
void action_enable_if_present__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TObjPlayer__sub_801C1B60(m); }

int TObjPlayer__sub_801B57E8(void) { return 0; }
int TObjPlayer__sub_801B5874(void) { return 0; }
int TObjPlayer__sub_801B58DC(void) { return 0; }
int TObjPlayer__sub_801B5920(void) { return 0; }
int TObjPlayer__sub_801B5990(void) { return 0; }
int TObjPlayer__sub_801B59C4(s32) { return 0; }
int TObjPlayer__sub_801B59F8(void) { return 0; }
int TObjPlayer__sub_801B5A44(void) { return 0; }
int TObjPlayer__sub_801B5A88(void) { return 0; }
int TObjPlayer__sub_801B5AC4(void) { return 0; }
int TObjPlayer__sub_801B5AF8(void) { return 0; }

void set_effect_enabled__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        fn_801C1E48(arg0 + 0x500);
        return;
    }
    fn_801C1E44(arg0 + 0x500);
}
void refresh_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
        if (fn_801C1E50(arg0 + 0x500) != 0) {
            fn_801C1E44(arg0 + 0x500);
            return;
        }
        fn_801C1E48(arg0 + 0x500);
        return;
    }
    fn_801C1E44(arg0 + 0x500);
}

void update_ground_contact__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_80019248() != 0) {
        if (try_ground_action__10TObjPlayerFPvi(arg0 + 0x550, fn_8002AE08(obj_getField1c(arg0))) != 0) {
            fn_801C1EF4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1EC4(arg0 + 0x500);
            }
        } else {
            fn_801C1EA4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1E74(arg0 + 0x500);
            }
        }
        TObjPlayer__sub_801B59C4((s32)(arg0));
    }
}

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if ((is_flag_b0_4__10TObjPlayerFPv() != 0) && (arg1 == (s16) M2C_FIELD(arg0, s16 *, 0xBC))) {
        return 1;
    }
    return 0;
}

}
