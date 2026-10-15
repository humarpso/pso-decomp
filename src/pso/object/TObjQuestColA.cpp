#include "types.h"

extern "C" {

void *TObjQuestColA__ct(void *arg0);
s32 TObjQuestColA__vt13(void *arg0);
void TObjQuestColA__vt14(void* p);
s32 enable_action_input__10TObjPlayerFPv(s32);
s32 disable_primary_action_input__10TObjPlayerFPv(s32);
s32 is_quest_interaction_blocked__10TObjPlayerFPv(s32);
void TObjQuestColBase__ct(void *);
s32 get_player_by_client_id(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);

void TObjQuestColA__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern s8 controller_input_state[];
extern s32 local_client_id;

s32 TObjQuestColA__vt13(void *arg0) {
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
        temp_r3_2 = update_trigger_state__12TObjQuestColFPvf(arg0, *(f32 *)((s8 *)arg0 + 0xAC));
        if (temp_r3_2 == 1) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 3) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 0) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
            if (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

extern s32 __vt__13TObjQuestColA[];
extern void *TObjQuestColA__class_name;

void *TObjQuestColA__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjQuestColA;
    *(void **)((s8 *)arg0 + 0x0) = TObjQuestColA__class_name;
    return arg0;
}

}
