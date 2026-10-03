#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 test_flag_2000000__10TObjPlayerFPv();
int update_foot_stamp__10TObjPlayerFPvi(void *, int);
void enable_foot_stamp__10TObjPlayerFii(void *, void *);
void clear_foot_stamp__10TObjPlayerFii(void *, void *);
M2C_UNK emit_sand_footstep_effect(void *);
M2C_UNK emit_water_footstep_effect(void *);
M2C_UNK emit_grass_footstep_effect(void *);
s32 is_timer_running(void *);
s32 get_contact_surface_type(void *);
void emit_footstep_effect__10TObjPlayerFiff(s32 arg0, f32 farg0, f32 farg1);
s32 objInBand__FP7GameObjf(void *, f32);
s32 test_ordered_anim_markers__10TObjPlayerFPvff(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

int TObjPlayer__sub_801B3FD8(void* p);
int TObjPlayer__sub_801B4044(void* p);
int attach_battle_ctrl_sub__10TObjPlayerFPv(void* p);
s32 classify_action_state__10TObjPlayerFv(void);
int forward_1BF500_at_63c__10TObjPlayerFPv(void* p);
s32 set_hp_clamped__10TObjPlayerFPvs(void *, s16);
s8 get_class_index__10TObjPlayerFPv();
s32 get_footstep_floor_index__10TObjPlayerFv(s32);
s32 check_camera_mode__10TObjPlayerFv();
int clear_flag0_bit1__10TObjPlayerFPv(void*);
int clear_target_lock__10TObjPlayerFPv(void*);
s32 is_technique_ready__8TTecCtrlFv();
s32 obj_isState3_324(void *);
int reset_ring__10TObjPlayerFPv(void*);
s32 reset_volopt_state__10TObjPlayerFv(void *);
s32 send_field_state_if_active__10TObjPlayerFii(s32, s32);
s32 set_facing__10TObjPlayerFPvs(void *, s16);
int set_flag_2__10TObjPlayerFPv(void*);

int TObjPlayer__sub_801B3FD8(void* p) { return reset_ring__10TObjPlayerFPv((char*)p + 0x63c); }
int attach_battle_ctrl_sub__10TObjPlayerFPv(void* p) { return clear_target_lock__10TObjPlayerFPv((char*)p + 0x63c); }
int forward_1BF500_at_63c__10TObjPlayerFPv(void* p) { return clear_flag0_bit1__10TObjPlayerFPv((char*)p + 0x63c); }
int TObjPlayer__sub_801B4044(void* p) { return set_flag_2__10TObjPlayerFPv((char*)p + 0x63c); }
s32 classify_action_state__10TObjPlayerFv(void) {
    s8 temp_r3;

    temp_r3 = get_class_index__10TObjPlayerFPv();
    switch (temp_r3) {
    case 5:
    case 9:
    case 2:
        return 1;
    case 4:
        return 2;
    default:
        return 0;
    }
}

int update_foot_stamp__10TObjPlayerFPvi(void *arg0, int arg1) {
    if (arg1 == 1) {
        clear_foot_stamp__10TObjPlayerFii((u8 *)arg0 + 0x384, arg0);
    } else if (arg1 == 2) {
        enable_foot_stamp__10TObjPlayerFii((u8 *)arg0 + 0x384, arg0);
    }
}

s32 test_ordered_anim_markers__10TObjPlayerFPvff(u8 *arg0, f32 farg0, f32 farg1) {
    if (objInBand__FP7GameObjf(arg0, farg0) != 0) {
        return 1;
    }
    return (objInBand__FP7GameObjf(arg0, farg1) != 0) ? 2 : 0;
}

void emit_footstep_effect__10TObjPlayerFiff(s32 arg0, f32 farg0, f32 farg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    if ((test_flag_2000000__10TObjPlayerFPv() == 0) && (temp_r3 = ((s32)test_ordered_anim_markers__10TObjPlayerFPvff((u8 *)((void *)((void *) (arg0))), (f32) (farg0), (f32) (farg1))), ((temp_r3 == 0) == 0))) {
        temp_r3_2 = get_contact_surface_type((void *) (arg0 + 0x360));
        switch (temp_r3_2) {
        case 1:
            emit_grass_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 2:
            emit_water_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 3:
            emit_sand_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 4:
            ((M2C_UNK)update_foot_stamp__10TObjPlayerFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3))));
            return;
        case 0:
            if (is_timer_running((void *) (arg0 + 0x360)) != 0) {
                update_foot_stamp__10TObjPlayerFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3)));
            }
            break;
        }
    }
}

}
