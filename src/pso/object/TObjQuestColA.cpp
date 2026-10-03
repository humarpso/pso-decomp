#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjQuestColA__ct(void *arg0);
s32 TObjQuestColA__vt13(void *arg0);
void TObjQuestColA__vt14(void* p);
M2C_UNK enable_action_input__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801B35E4(s32);
s32 is_quest_interaction_blocked__10TObjPlayerFPv(s32);
void TObjQuestColBase__ct(void *);
s32 get_player_by_client_id(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);

void TObjQuestColA__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

s32 TObjQuestColA__vt13(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (check_flag_100__10TObjPlayerFPv() != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        if (is_quest_interaction_blocked__10TObjPlayerFPv(temp_r3) != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        temp_r3_2 = update_trigger_state__12TObjQuestColFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
        if (temp_r3_2 == 1) {
            TObjPlayer__sub_801B35E4(temp_r3);
        }
        if (temp_r3_2 == 3) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 0) {
            TObjPlayer__sub_801B35E4(temp_r3);
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

extern M2C_UNK __vt__13TObjQuestColA[];
extern void *lbl_805D33F0;

void *TObjQuestColA__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjQuestColA;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F0;
    return arg0;
}

}
