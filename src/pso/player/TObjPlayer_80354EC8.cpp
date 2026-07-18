#include "types.h"

extern "C" {

void finish_quest_thread__10TObjPlayerFv(void);
int TQuestThread__sub_801F5C50(void);
int TObjPlayer__sub_80354F7C(void);

void finish_quest_thread__10TObjPlayerFv(void) { TObjPlayer__sub_80354F7C(); TQuestThread__sub_801F5C50(); }

}
