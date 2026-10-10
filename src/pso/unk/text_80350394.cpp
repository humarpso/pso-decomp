#include "types.h"

extern "C" {

int get_quest_bgm_issued_flag(void*);
int queue_destruction__7TObjectFv(void*);
void queue_quest_bgm_destruction(void* p);

void queue_quest_bgm_destruction(void* p) { if (get_quest_bgm_issued_flag(p) != 0) { queue_destruction__7TObjectFv(p); } }

}
