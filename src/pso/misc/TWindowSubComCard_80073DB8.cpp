#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

void set_field_20__12TQuestListVMFl(void* p, s32 v);

int TWindowSubComCard::get_status_flag() { return (*(u16*)((char*)this + 0x70) >> 2) & 0x1; }

}
