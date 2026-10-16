#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjQuestColALock.h"
#include "pso/object/TObjQuestColBase.h"
#include "pso/object/TObjQuestCol.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8019677C_lbl_80445E84 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019677C___vt__17TObjQuestColALock {
    s32 value;
    u8 remaining[0x40];
};

extern "C" {
void set_indexed_flags(void *, s32, s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjQuestColBase__ct(void *, s32);
extern RecoveredGlobal_8019677C_lbl_80445E84 TObjQuestColALock__collision_desc;
extern s32 __vt__17TObjQuestColALock[];
extern s32 obj_quest_col_alock_class_name;
u8 *TObjQuestColALock__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__17TObjQuestColALockFv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 enable_action_input__10TObjPlayerFPv(s32);
s32 disable_primary_action_input__10TObjPlayerFPv(s32);
s32 submit_cursor_candidate(void *, s32);
s32 is_quest_interaction_blocked__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 __dl__7TObjectFPv(void *);
s32 __dt__16TObjQuestColBaseFv(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

int TObjQuestColALock::vfunc_16() { destroy_board__17TQuestThreadBoardFv(this); create__12TQuestThreadFi(*(void**)((char*)this + 0xb0)); }

extern s32 controller_input_state[];
extern s32 local_client_id;

int TObjQuestColALock::vfunc_15() {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = get_player_by_client_id(local_client_id);
    if (temp_r3 != 0) {
        if (check_flag_100__10TObjPlayerFPv() != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        if (is_quest_interaction_blocked__10TObjPlayerFPv(temp_r3) != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        submit_cursor_candidate(this, -1);
        temp_r3_2 = ((TObjQuestColBase *)this)->update_trigger_state(*(f32 *)((s8 *)this + 0xAC));
        if (temp_r3_2 == 1) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 3) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 0) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
            if (TWindowShortListCtrl__check_controller_button((void *)((s8 *)controller_input_state + 0x20), 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

extern s32 __vt__17TObjQuestColALock[];

void *__dt__17TObjQuestColALockFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjQuestColALock;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8019677C_lbl_80445E84_size[sizeof(RecoveredGlobal_8019677C_lbl_80445E84) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019677C___vt__17TObjQuestColALock_size[sizeof(RecoveredGlobal_8019677C___vt__17TObjQuestColALock) == 0x44 ? 1 : -1];
u8 *TObjQuestColALock__ct(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    TObjQuestColBase__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019677C___vt__17TObjQuestColALock *)&__vt__17TObjQuestColALock).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) obj_quest_col_alock_class_name;
    init_collision_body_parts(arg0, (s32) &TObjQuestColALock__collision_desc.value, 1);
    set_indexed_flags(arg0, 0, 0xF0);
    temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
    *(f32 *)((s8 *)temp_r4 + 4) = (f32) (*(f32 *)((s8 *)temp_r4 + 4) + *(f32 *)((s8 *)arg0 + 0x6C));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
