#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {
    int create_named_object(void*);
    extern unsigned char lbl_8044BD3C[];
extern u32 item_appraisal_rules;
void load_judge_item(void);
}

extern "C" {

void update_all__6TLobbyFi(s32 arg0);
s32 adjust_appraisal_percentages(s32);
s32 roll_item_grind_bonus__6TLobbyFv(s32);
s32 adjust_appraisal_special(s32);
s32 is_slot_match__6TLobbyFv();

extern u32 item_appraisal_rules;
extern s32 item_appraisal_favored_weapon;
extern s32 item_appraisal_score;

void update_all__6TLobbyFi(s32 arg0) {
    if ((u32) item_appraisal_rules != 0U) {
        item_appraisal_score = 0;
        item_appraisal_favored_weapon = is_slot_match__6TLobbyFv();
        adjust_appraisal_special(arg0);
        roll_item_grind_bonus__6TLobbyFv(arg0);
        adjust_appraisal_percentages(arg0);
    }
}

extern u32 item_appraisal_rules;

void TLobby::free_window() {
    if ((u32) item_appraisal_rules != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)item_appraisal_rules));
        item_appraisal_rules = 0U;
    }
}
void load_judge_item(void) { (*(int *)&item_appraisal_rules) = create_named_object(lbl_8044BD3C); }

}
