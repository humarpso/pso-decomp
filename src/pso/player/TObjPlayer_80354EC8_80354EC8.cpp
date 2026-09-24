#include "types.h"

extern "C" {
s32 __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_80355098(void);
extern u8 lbl_80543984[];
void TObjPlayer__sub_80354F44(void);
}

extern "C" {

void finish_quest_thread__10TObjPlayerFv(void);
int TQuestThread__sub_801F5C50(void);
int get_quest_thread_id__10TObjPlayerFPv(void);

void finish_quest_thread__10TObjPlayerFv(void) { get_quest_thread_id__10TObjPlayerFPv(); TQuestThread__sub_801F5C50(); }
void TObjPlayer__sub_80354F44(void) {
    __destroy_arr(lbl_80543984, (void *)TObjPlayer__sub_80355098, 8, 4);
}

}
