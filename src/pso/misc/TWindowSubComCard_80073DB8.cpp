#include "types.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TQuestListVM.h"

int TWindowSubComCard::get_status_flag() { return (*(u16*)((char*)this + 0x70) >> 2) & 0x1; }
