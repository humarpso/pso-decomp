#include "types.h"

extern "C" {

int run_task__15TObjNewFloorWinFv(void);
void set_field_20__12TQuestListVMFPvi(void* p, s32 v);
int get_status_flag__17TWindowSubComCardFPv(void* p);

void set_field_20__12TQuestListVMFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

int run_task__15TObjNewFloorWinFv(void) { return 0; }

}
