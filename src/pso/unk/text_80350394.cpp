#include "types.h"
#include "pso/object/TUnk_804F0D1C.h"

extern "C" {

int get_quest_bgm_issued_flag(void*);
int queue_destruction__7TObjectFv(void*);

void TUnk_804F0D1C::run_task() { if (get_quest_bgm_issued_flag(this) != 0) { queue_destruction__7TObjectFv(this); } }

}
