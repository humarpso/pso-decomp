#include "types.h"

extern "C" {

int TQuestBgmCtrl__sub_8017E8F8(void*);
int queue_destruction__7TObjectFv(void*);
void queue_quest_bgm_destruction(void* p);

void queue_quest_bgm_destruction(void* p) { if (TQuestBgmCtrl__sub_8017E8F8(p) != 0) { queue_destruction__7TObjectFv(p); } }

}
