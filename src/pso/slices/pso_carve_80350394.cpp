#include "types.h"

extern "C" {

int get_bgm_object__13TQuestBgmCtrlFv(void*);
int queue_destruction__7TObjectFv(void*);
void queue_quest_bgm_destruction(void* p);

void queue_quest_bgm_destruction(void* p) { if (get_bgm_object__13TQuestBgmCtrlFv(p) != 0) { queue_destruction__7TObjectFv(p); } }

}
