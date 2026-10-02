#include "types.h"

typedef s32 M2C_UNK;
struct VBase_801B3DD4 { char pad[0x18]; };

struct VObj_801B3DD4 : VBase_801B3DD4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11(s32);
};

struct Player_801B3DD4 {
    u8 pad0[0x60];
    s32 f60;
};

extern "C" {
s32 TObjPlayer__sub_801B5AF8(void *, s32);
s32 TObjPlayer__sub_801B5AC4(void *, s32);
void set_action_palette_mode__10TObjPlayerFPv(void *, u8);
void update_action_palette__10TObjPlayerFPv(void *, u8);
s32 is_target_valid__10TObjPlayerFPv(void *);
s32 obj_getField1c(void *);
void set_action_type__10TObjPlayerFPvs(void *, s16);
s32 check_mode_action__10TObjPlayerFii(void *, s16);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
s32 calc_scaled_value__10TObjPlayerFii(void *, s32);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
s32 try_camera_action__10TObjPlayerFii(void *, s16);
void set_technique_id__10TObjPlayerFPvs(void *, s16);
s32 can_use_camera_field__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801B3A18(void *, s16);
s32 check_conditions__10TObjPlayerFi(void *, s16);
void fn_801C1F14(void *, s16);
s32 is_player_valid_target__10TObjPlayerFi(s32);
void TObjPlayer__sub_80354BE4(s32);
extern const f32 lbl_805DC290;
s32 execute_palette_action__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
}

extern "C" {

int get_result_entry__18TChallenge4PResultFPv(void* p);
int get_player_rank__18TChallenge4PResultFPv(void* p);
int get_field_340__18TChallenge4PResultFPv(void* p);
int get_player_result__18TChallenge4PResultFPv(void* p);
int TObjPlayer__sub_801BF460(void*);
int TObjPlayer__sub_801BF47C(void*);
int TObjPlayer__sub_801BF488(void*);
int TObjPlayer__sub_801BF4A0(void*);

int get_result_entry__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF460((char*)p + 0x340); }
int get_player_rank__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF47C((char*)p + 0x340); }
int get_field_340__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF488((char*)p + 0x340); }
int get_player_result__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF4A0((char*)p + 0x340); }
s32 execute_palette_action__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    u8 *self = (u8 *)arg0;
    s16 kind;
    s16 act;
    kind = TObjPlayer__sub_801B5AF8(arg0, arg1);
    act = TObjPlayer__sub_801B5AC4(arg0, arg1);
    set_action_palette_mode__10TObjPlayerFPv(self + 0x340, kind);
    update_action_palette__10TObjPlayerFPv(self + 0x340, act);
    switch (kind) {
    case 0:
        return 0;
    case 1:
        if (arg2 == NULL) {
            return 0;
        }
        if (is_target_valid__10TObjPlayerFPv(arg0) != 0) {
            ((VObj_801B3DD4 *)arg2)->m11(obj_getField1c(arg0));
            return 1;
        }
        break;
    case 2:
        set_action_type__10TObjPlayerFPvs(self + 0x7CC, act);
        if (check_mode_action__10TObjPlayerFii(arg0, act) != 0) {
            if (get_attached_float_24__10TObjPlayerFPv(self + 0x550) >= lbl_805DC290) {
                ((Player_801B3DD4 *)arg0)->f60 = calc_scaled_value__10TObjPlayerFii(arg0, get_target_field_1c__10TObjPlayerFPv(self + 0x550));
            }
            run_action_state_phase__10TObjPlayerFisi(arg0, 5, 5);
            return 1;
        }
        break;
    case 3:
        if (try_camera_action__10TObjPlayerFii(arg0, act) != 0) {
            set_technique_id__10TObjPlayerFPvs(self + 0x428, act);
            run_action_state_phase__10TObjPlayerFisi(arg0, 8, 5);
            return 1;
        }
        break;
    case 4:
        if (can_use_camera_field__10TObjPlayerFi(arg0) != 0 && TObjPlayer__sub_801B3A18(arg0, act) != 0) {
            return 1;
        }
        break;
    case 5:
        if (check_conditions__10TObjPlayerFi(arg0, act) != 0) {
            fn_801C1F14(self + 0x4AC, act);
            run_action_state_phase__10TObjPlayerFisi(arg0, 9, 5);
            return 1;
        }
        break;
    case 6:
        if (is_player_valid_target__10TObjPlayerFi(obj_getField1c(arg0)) != 0) {
            TObjPlayer__sub_80354BE4(obj_getField1c(arg0));
        }
        break;
    default:
        return 0;
    }
    return 0;
}

}
