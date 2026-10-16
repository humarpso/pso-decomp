#include "types.h"
#include "pso/object/TUnk_804F0D1C.h"

extern "C" {

int get_quest_bgm_issued_flag(void*);
int queue_destruction__7TObjectFv(void*);
void run_task__13TUnk_804F0D1CFv(void* p);

void TUnk_804F0D1C::run_task() { if (get_quest_bgm_issued_flag(this) != 0) { queue_destruction__7TObjectFv(this); } }

}
